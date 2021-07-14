#include "extend.h"
#include "includes.h"
#include "GPIO_Init.h"

// Power Supply
#ifdef PS_ON_PIN

// Power Supply Control pins Initialization
void PS_ON_Init(void)
{
  GPIO_InitSet(PS_ON_PIN, MGPIO_MODE_OUT_PP, 0);
  GPIO_SetLevel(PS_ON_PIN, infoSettings.ps_active_high);
}

// Power Supply Control turn on, M80
void PS_ON_On(void)
{
  GPIO_SetLevel(PS_ON_PIN, infoSettings.ps_active_high);
}

// Power Supply Control turn off, M81
void PS_ON_Off(void)
{
  GPIO_SetLevel(PS_ON_PIN, !infoSettings.ps_active_high);
}

#endif

// Filament runout detect
#ifdef FIL_RUNOUT_PIN

static bool update_PosE_waiting = false;

// Set whether we need to query the current position
void positionSetUpdateWaiting(bool isWaiting)
{
  update_PosE_waiting = isWaiting;
}

void FIL_Runout_Init(void)
{
  #if defined(MKS_TFT)
    GPIO_InitSet(FIL_RUNOUT_PIN, MGPIO_MODE_IPN, 0);  // MKS TFTs already have an external pull-up resistor on PB0 and PB1 pins
  #else
    GPIO_InitSet(FIL_RUNOUT_PIN, infoSettings.runout_invert ? MGPIO_MODE_IPU : MGPIO_MODE_IPD, 0);
  #endif
  #ifdef FIL_RUNOUT_PIN_1
    GPIO_InitSet(FIL_RUNOUT_PIN_1, infoSettings.runout_invert ? MGPIO_MODE_IPU : MGPIO_MODE_IPD, 0);
  #endif
  #ifdef FIL_RUNOUT_PIN_2
    GPIO_InitSet(FIL_RUNOUT_PIN_2, infoSettings.runout_invert ? MGPIO_MODE_IPU : MGPIO_MODE_IPD, 0);
  #endif
  #ifdef FIL_RUNOUT_PIN_3
    GPIO_InitSet(FIL_RUNOUT_PIN_3, infoSettings.runout_invert ? MGPIO_MODE_IPU : MGPIO_MODE_IPD, 0);
  #endif
  #ifdef FIL_RUNOUT_PIN_4
    GPIO_InitSet(FIL_RUNOUT_PIN_4, infoSettings.runout_invert ? MGPIO_MODE_IPU : MGPIO_MODE_IPD, 0);
  #endif
  #ifdef FIL_RUNOUT_PIN_5
    GPIO_InitSet(FIL_RUNOUT_PIN_5, infoSettings.runout_invert ? MGPIO_MODE_IPU : MGPIO_MODE_IPD, 0);
  #endif
}

bool FIL_NormalRunoutDetect(void)
{
  static bool runout = false;
  static uint32_t trueTimes = 0;
  static uint32_t falseTimes = 0;
  static uint32_t nextRunoutTime = 0;

  if (OS_GetTimeMs() > nextRunoutTime)
  {
    runout = trueTimes > falseTimes ? true : false;
    trueTimes = 0;
    falseTimes = 0;
    nextRunoutTime = OS_GetTimeMs() + infoSettings.runout_noise_ms;
  }
  else
  {
    bool pinState = false;
    uint8_t toolNum = heatGetCurrentTool();

    switch (toolNum)
    {
      case 0:
        pinState = GPIO_GetLevel(FIL_RUNOUT_PIN);
        break;

      #ifdef FIL_RUNOUT_PIN_1
        case 1:
          pinState = GPIO_GetLevel(FIL_RUNOUT_PIN_1);
          break;
      #endif
      #ifdef FIL_RUNOUT_PIN_2
        case 2:
          pinState = GPIO_GetLevel(FIL_RUNOUT_PIN_2);
          break;
      #endif
      #ifdef FIL_RUNOUT_PIN_3
        case 3:
          pinState = GPIO_GetLevel(FIL_RUNOUT_PIN_3);
          break;
      #endif
      #ifdef FIL_RUNOUT_PIN_4
        case 4:
          pinState = GPIO_GetLevel(FIL_RUNOUT_PIN_4);
          break;
      #endif
      #ifdef FIL_RUNOUT_PIN_5
        case 5:
          pinState = GPIO_GetLevel(FIL_RUNOUT_PIN_5);
          break;
      #endif
    }

    if (pinState)
    {
      trueTimes++;
    }
    else
    {
      falseTimes++;
    }
  }

  // Detect HIGH/LOW level, Suitable for general mechanical / photoelectric switches
  return (runout == infoSettings.runout_invert);
}

static uint32_t update_PosE_time = 2000;
// Use an encoder disc to toggles the runout
// Suitable for BigTreeTech Smart Filament Sensor
static uint8_t SFS_IsAlive = false;

void FIL_SFS_SetAlive(uint8_t alive)
{
  SFS_IsAlive = alive;
}

bool FIL_SmartRunoutDetect(void)
{
  static float lastExtrudePosition = 0.0f;
  static bool lastRunout = false;
  static uint32_t nextRunoutTime = 0;

  float actualExtrude = coordinateGetExtruderActual();
  bool runout = FIL_NormalRunoutDetect();

  do
  { // Send M114 E query extrude position continuously
    if (update_PosE_waiting == true)
    {
      nextRunoutTime = OS_GetTimeMs() + update_PosE_time;
      break;
    }

    if (OS_GetTimeMs() < nextRunoutTime)
      break;

    if (requestCommandInfoIsRunning())  // To avoid colision in Gcode response processing
      break;

    if (storeCmd("M114 E\n") == false)
      break;

    nextRunoutTime = OS_GetTimeMs() + update_PosE_time;
    update_PosE_waiting = true;
  } while (0);

  if (SFS_IsAlive == false)
  {
    if (lastRunout != runout)
    {
      SFS_IsAlive = true;
    }
  }

  if (ABS(actualExtrude - lastExtrudePosition) >= infoSettings.runout_distance)
  {
    lastExtrudePosition = actualExtrude;

    if (SFS_IsAlive)
    {
      SFS_IsAlive = false;
      lastRunout = runout;
    }
    else
    {
      return true;
    }
  }

  return false;
}

bool FIL_IsRunout(void)
{
  if (infoSettings.runout & 1)
  {
    // Get sensor type
    uint8_t sensorType = (infoSettings.runout >> 1) & 1;

    switch (sensorType)
    {
      case FILAMENT_SENSOR_NORMAL:
        return FIL_NormalRunoutDetect();

      case FILAMENT_SENSOR_SMART:
        return FIL_SmartRunoutDetect();

      default:
        return false;
    }
  }

  return false;
}

void loopBackEndFILRunoutDetect(void)
{
  if (!(infoSettings.runout & 1))  // Filament runout turn off
    return;

  setPrintRunout(FIL_IsRunout());  // Need constant scanning to filter interference
}

void loopFrontEndFILRunoutDetect(void)
{
  #define ALARM_REMINDER_TIME 10000
  static uint32_t nextTime = 0;

  if (!getPrintRunout() && !getRunoutAlarm())
    return;

  if (printPause(true, PAUSE_NORMAL) && !getRunoutAlarm())  // If not printing, printPause() function will always fail
  {                                                         // so no useless error message is displayed
    setRunoutAlarmTrue();
    setDialogText(LABEL_WARNING, LABEL_FILAMENT_RUNOUT, LABEL_CONFIRM, LABEL_BACKGROUND);
    showDialog(DIALOG_TYPE_ALERT, setRunoutAlarmFalse, NULL, NULL);
  }

  if ((OS_GetTimeMs() > nextTime) && (getRunoutAlarm() == true))
  {
    BUZZER_PLAY(sound_error);
    nextTime = OS_GetTimeMs() + ALARM_REMINDER_TIME;
  }
}

#endif
