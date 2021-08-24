#ifndef _LANGUAGE_PL_H_
#define _LANGUAGE_PL_H_

    // config.ini Parameter Settings - Screen Settings and Feature Settings
    #define STRING_EMULATED_M600          "Emulated M600"
    #define STRING_ROTATE_UI              "Obrót"
    #define STRING_LANGUAGE               "Polski"
    #define STRING_ACK_NOTIFICATION       "ACK notification style"
    #define STRING_FILES_SORT_BY          "Sort files by"
    #define STRING_FILES_LIST_MODE        "Files viewer List Mode"
    #define STRING_FAN_SPEED_PERCENTAGE   "Fan Speed As Percentage"
    #define STRING_PERSISTENT_INFO        "Persistent Status Info"
    #define STRING_TERMINAL_ACK           "Show ACK in Terminal"
    #define STRING_SERIAL_ALWAYS_ON       "Serial Always ON"
    #define STRING_MARLIN_FULL_SCREEN     "Marlin mode in fullscreen"
    #define STRING_MARLIN_SHOW_TITLE      "Marlin Mode Title Support"
    #define STRING_MARLIN_TYPE            "Marlin Mode Type"
    #define STRING_MOVE_SPEED             "Move speed(X Y Z)"
    #define STRING_AUTO_LOAD_LEVELING     "Auto Save Load Leveling"
    #define STRING_PROBING_AFTER_HOMING   "Probing after homing"
    #define STRING_Z_STEPPERS_ALIGNMENT   "Z Steppers Auto-Alignment"
    #define STRING_PS_ON                  "Auto Power"
    #define STRING_FIL_RUNOUT             "Filament sensor"
    #define STRING_PLR_ON                 "Power loss recovery"
    #define STRING_PLR_HOME               "Power Loss Recovery Homing"
    #define STRING_BTT_MINI_UPS           "BTT UPS Support"
    #define STRING_TOUCH_SOUND            "Touch sounds"
    #define STRING_TOAST_SOUND            "Toast Notifications"
    #define STRING_ALERT_SOUND            "Popups and Alerts"
    #define STRING_HEATER_SOUND           "Heater notification"
    #define STRING_LCD_BRIGHTNESS         "Brightness"
    #define STRING_LCD_IDLE_BRIGHTNESS    "Idle brightness"
    #define STRING_LCD_IDLE_TIME          "Idle timeout"
    #define STRING_BLOCK_TOUCH_ON_IDLE    "Block touch on idle"
    #define STRING_KNOB_LED_COLOR         "Rotary Knob LED"
    #define STRING_KNOB_LED_IDLE          "Rotary Knob LED idle"
    #define STRING_START_GCODE_ENABLED    "Start Gcode before print"
    #define STRING_END_GCODE_ENABLED      "End Gcode after print"
    #define STRING_CANCEL_GCODE_ENABLED   "Cancel Gcode"

    // Machine Parameter Settings - Param Title (ordered by gcode)
    #define STRING_STEPS_SETTING          "Steps per mm"
    #define STRING_FILAMENT_SETTING       "Filament Diameter"
    #define STRING_MAXACCELERATION        "Max Acceleration"
    #define STRING_MAXFEEDRATE            "Max Feed Rate"
    #define STRING_ACCELERATION           "Acceleration"
    #define STRING_JERK                   "Jerk"
    #define STRING_JUNCTION_DEVIATION     "Junction Deviation"
    #define STRING_HOME_OFFSET            "Home Offset"
    #define STRING_FWRETRACT              "FW Retraction"
    #define STRING_FWRECOVER              "FW Retraction Recover"
    #define STRING_RETRACT_AUTO           "Auto Firmware Retract"
    #define STRING_HOTEND_OFFSET          "Offset 2nd Nozzle"
    #define STRING_STEALTH_CHOP           "TMC StealthChop"
    #define STRING_DELTA_CONFIGURATION    "Delta Configuration"
    #define STRING_DELTA_TOWER_ANGLE      "Tower Angle Trim"
    #define STRING_DELTA_ENDSTOP          "Endstop Adjustments"
    #define STRING_PROBE_OFFSET           "Przesunięcie"
    #define STRING_LIN_ADVANCE            "Linear Advance"
    #define STRING_CURRENT_SETTING        "Driver Current (mA)"
    #define STRING_HYBRID_THRESHOLD       "TMC HybridThreshold"
    #define STRING_BUMP_SENSITIVITY       "TMC bump sensitivity"
    #define STRING_MBL_OFFSET             "MBL Offset"

    // Machine Parameter Settings - Param Attributes (ordered by gcode)
    #define STRING_PRINT_ACCELERATION     "Print Acceleration"
    #define STRING_RETRACT_ACCELERATION   "Retract Acceleration"
    #define STRING_TRAVEL_ACCELERATION    "Travel Acceleration"
    #define STRING_RETRACT_LENGTH         "Retract length"
    #define STRING_RETRACT_SWAP_LENGTH    "Retract swap length"
    #define STRING_RETRACT_FEEDRATE       "Retract feedrate"
    #define STRING_RETRACT_Z_LIFT         "Z lift on retraction"
    #define STRING_RECOVER_LENGTH         "Extra recover length"
    #define STRING_SWAP_RECOVER_LENGTH    "Extra recover swap length"
    #define STRING_RECOVER_FEEDRATE       "Recover feedrate"
    #define STRING_SWAP_RECOVER_FEEDRATE  "Swap recover feedrate"

    // Save / Load
    #define STRING_SAVE                   "Zapisz"
    #define STRING_RESTORE                "Restore"
    #define STRING_RESET                  "Reset"
    #define STRING_EEPROM_SAVE_INFO       "Save printer settings to EEPROM?"
    #define STRING_EEPROM_RESTORE_INFO    "Reload settings from EEPROM?"
    #define STRING_EEPROM_RESET_INFO      "Reset EEPROM to stock printer settings?"
    #define STRING_SETTINGS_SAVE          "Save settings"
    #define STRING_SETTINGS_RESTORE       "Restore settings"
    #define STRING_SETTINGS_RESET         "Reset default settings"
    #define STRING_SETTINGS_RESET_INFO    "Reset all settings to default values?"
    #define STRING_SETTINGS_RESET_DONE    "Reset all settings successful.\nPlease restart the device."

    // Navigation Buttons
    #define STRING_PAGE_UP                "Dalej"
    #define STRING_PAGE_DOWN              "Wstecz"
    #define STRING_UP                     "Up"
    #define STRING_DOWN                   "Down"
    #define STRING_NEXT                   "Next"
    #define STRING_BACK                   "Powrót"

    // Value Buttons
    #define STRING_INC                    "Więcej"
    #define STRING_DEC                    "Mniej"
    #define STRING_LOAD                   "Load"
    #define STRING_UNLOAD                 "Unload"
    #define STRING_ON                     "ON"
    #define STRING_OFF                    "OFF"
    #define STRING_AUTO                   "AUTO"
    #define STRING_SMART                  "SMART"
    #define STRING_SLOW                   "Wolno"
    #define STRING_NORMAL                 "Normalnie"
    #define STRING_FAST                   "Szybko"
    #define STRING_ZERO                   "Zero"
    #define STRING_HALF                   "Połowa"
    #define STRING_FULL                   "Max"
    #define STRING_CUSTOM                 "Własne"
    #define STRING_CLEAR                  "Clear"
    #define STRING_DEFAULT                "Default"

    // Action Buttons
    #define STRING_START                  "Start"
    #define STRING_STOP                   "Stop"
    #define STRING_PAUSE                  "Wstrzymaj"
    #define STRING_RESUME                 "Wznów"
    #define STRING_INIT                   "Init"
    #define STRING_DISCONNECT             "Odłącz"
    #define STRING_SHUT_DOWN              "Wyłącz"
    #define STRING_FORCE_SHUT_DOWN        "Wymuś"
    #define STRING_EMERGENCYSTOP          "ZATRZYMAJ"
    #define STRING_PREHEAT                "Rozgrzew."
    #define STRING_PREHEAT_BOTH           "Wszystko"
    #define STRING_COOLDOWN               "Chłodzenie"

    // Dialog Buttons
    #define STRING_CONFIRM                "Potwierdź"
    #define STRING_CANCEL                 "Anuluj"
    #define STRING_WARNING                "Uwaga"
    #define STRING_CONTINUE               "Kontynuuj"
    #define STRING_CONFIRMATION           "Are you sure?"

    // Process Status
    #define STRING_STATUS                 "Status"
    #define STRING_READY                  "Gotowy"
    #define STRING_BUSY                   "Trwa przetwarzanie, proszę czekać..."
    #define STRING_LOADING                "Loading..."
    #define STRING_UNCONNECTED            "Drukarka nie podłączona!"

    // Process Info
    #define STRING_INFO                   "Info"
    #define STRING_INVALID_VALUE          "Invalid value(s)"
    #define STRING_TIMEOUT_REACHED        "Timeout reached!"
    #define STRING_DISCONNECT_INFO        "Teraz możesz kontrolować drukarkę z komputera!"
    #define STRING_SHUTTING_DOWN          "Wyłączanie..."
    #define STRING_WAIT_TEMP_SHUT_DOWN    "Czekam na schłodzenie do %d℃" // Wait for the temperature of hotend to be lower than 50℃
    #define STRING_POWER_FAILED           "Kontynuować drukowanie?"
    #define STRING_PROCESS_RUNNING        "Process already running!"
    #define STRING_PROCESS_COMPLETED      "Process completed!"
    #define STRING_PROCESS_ABORTED        "Process aborted!"

    // TFT SD, U_DISK, Onboard SD, Filament Runout Process Commands / Status / Info
    #define STRING_TFTSD                  "SD TFT"
    #define STRING_READ_TFTSD_ERROR       "Błąd odczytu karty SD wyświetlacza!"
    #define STRING_TFTSD_INSERTED         "Karta włożona!"
    #define STRING_TFTSD_REMOVED          "Karta wyjęta!"
    #define STRING_U_DISK                 "U Disk"
    #define STRING_READ_U_DISK_ERROR      "Błąd odczytu U Disk!"
    #define STRING_U_DISK_INSERTED        "U Disk włożony!"
    #define STRING_U_DISK_REMOVED         "U Disk wyjęty!"
    #define STRING_ONBOARDSD              "SD płyta"
    #define STRING_READ_ONBOARDSD_ERROR   "Błąd odczytu karty SD na płycie!"
    #define STRING_FILAMENT_RUNOUT        "brak filamentu!"

    // Steppers, Print, Probe Process Commands / Status / Info
    #define STRING_DISABLE_STEPPERS       "Disarm All"
    #define STRING_XY_UNLOCK              "Odblokuj XY"

    #define STRING_START_PRINT            "Start Printing:\n%s?"
    #define STRING_STOP_PRINT             "Zatrzymać drukowanie?"
    #define STRING_IS_PAUSE               "Operacja niedostępna w trakcie drukowania,\nwstrzymać drukowanie?"
    #define STRING_M0_PAUSE               "Paused by M0 command"

    #define STRING_TEST                   "Test"
    #define STRING_DEPLOY                 "Wysuń"
    #define STRING_STOW                   "Schowaj"
    #define STRING_REPEAT                 "Powtórz"

    // Printer Tools
    #define STRING_NOZZLE                 "Głowica"
    #define STRING_BED                    "Stół"
    #define STRING_CHAMBER                "Chamber"
    #define STRING_FAN                    "Wentylator"

    #define STRING_BLTOUCH                "BLTouch"
    #define STRING_TOUCHMI                "TouchMi"

    // Values
    #define STRING_1_DEGREE               "1℃"
    #define STRING_5_DEGREE               "5℃"
    #define STRING_10_DEGREE              "10℃"

    #define STRING_001_MM                 "0.01mm"
    #define STRING_01_MM                  "0.1mm"
    #define STRING_1_MM                   "1mm"
    #define STRING_5_MM                   "5mm"
    #define STRING_10_MM                  "10mm"
    #define STRING_100_MM                 "100mm"
    #define STRING_200_MM                 "200mm"

    #define STRING_1_PERCENT              "1%"
    #define STRING_5_PERCENT              "5%"
    #define STRING_10_PERCENT             "10%"
    #define STRING_PERCENT_VALUE          "%d%%"

    #define STRING_5_SECONDS              "5 Sec."
    #define STRING_10_SECONDS             "10 Sec."
    #define STRING_30_SECONDS             "30 Sec."
    #define STRING_60_SECONDS             "1 Min."
    #define STRING_120_SECONDS            "2 Min."
    #define STRING_300_SECONDS            "5 Min."

    // Colors
    #define STRING_WHITE                  "Biały"
    #define STRING_BLACK                  "Czarny"
    #define STRING_BLUE                   "Niebieski"
    #define STRING_RED                    "Czerwony"
    #define STRING_GREEN                  "Zielony"
    #define STRING_CYAN                   "Turkusowy"
    #define STRING_YELLOW                 "Żółty"
    #define STRING_BROWN                  "Brązowy"
    #define STRING_GRAY                   "Szary"
    #define STRING_ORANGE                 "Orange"
    #define STRING_INDIGO                 "Indigo"
    #define STRING_VIOLET                 "Violet"
    #define STRING_MAGENTA                "Magenta"
    #define STRING_PURPLE                 "Purple"
    #define STRING_LIME                   "Lime"
    #define STRING_DARKBLUE               "DarkBlue"
    #define STRING_DARKGREEN              "DarkGreen"
    #define STRING_DARKGRAY               "DarkGray"

    // Menus
    #define STRING_HEAT                   "Temp."
    #define STRING_MOVE                   "Ruch"
    #define STRING_HOME                   "Powrót"
    #define STRING_PRINT                  "Druk"
    #define STRING_EXTRUDE                "Extrude"
    #define STRING_SETTINGS               "Ustawienia"
    #define STRING_SCREEN_SETTINGS        "Ekran"
    #define STRING_UI_SETTINGS            "UI"
    #define STRING_SOUND                  "Sound"
    #define STRING_MARLIN_MODE_SETTINGS   "MarlinMode"
    #define STRING_MACHINE_SETTINGS       "Drukarka"
    #define STRING_PARAMETER_SETTINGS     "Parametr"
    #define STRING_FEATURE_SETTINGS       "Opcje"
    #define STRING_CONNECTION_SETTINGS    "Connection"
    #define STRING_SERIAL_PORTS           "S. Ports"
    #define STRING_BAUDRATE               "BaudRate"
    #define STRING_EEPROM_SETTINGS        "EEPROM"
    #define STRING_RGB_SETTINGS           "Kolor LED"
    #define STRING_RGB_OFF                "Wyłącz LED"
    #define STRING_TERMINAL               "Terminal"
    #define STRING_LEVELING               "Poziomowanie"
    #define STRING_POINT_1                "Punkt 1"
    #define STRING_POINT_2                "Punkt 2"
    #define STRING_POINT_3                "Punkt 3"
    #define STRING_POINT_4                "Punkt 4"
    #define STRING_POINT_5                "Punkt 5"
    #define STRING_BED_LEVELING           "Bed Level"
    #define STRING_BL_COMPLETE            "Bed Leveling Complete"
    #define STRING_BL_SMART_FILL          "Missing probe points have been smart filled.\n\nNote: remember to save!"
    #define STRING_BL_ENABLE              "BL: on"
    #define STRING_BL_DISABLE             "BL: off"
    #define STRING_ABL                    "ABL"
    #define STRING_BBL                    "BBL"
    #define STRING_UBL                    "UBL"
    #define STRING_MBL                    "MBL"
    #define STRING_MBL_SETTINGS           "Mesh Bed Leveling"
    #define STRING_ABL_SETTINGS           "Auto Bed Leveling"
    #define STRING_ABL_SETTINGS_BBL       "Bilinear Bed Leveling"
    #define STRING_ABL_SETTINGS_UBL       "Unified Bed Leveling"
    #define STRING_ABL_SETTINGS_UBL_SAVE  "Save to slot"
    #define STRING_ABL_SETTINGS_UBL_LOAD  "Load from slot"
    #define STRING_ABL_SLOT0              "Slot 0"
    #define STRING_ABL_SLOT1              "Slot 1"
    #define STRING_ABL_SLOT2              "Slot 2"
    #define STRING_ABL_SLOT3              "Slot 3"
    #define STRING_ABL_SLOT_EEPROM        "Save the mesh to EEPROM to load after reboot?"
    #define STRING_ABL_Z                  "Z Fade"
    #define STRING_LEVEL_CORNER           "L corner"
    #define STRING_P_OFFSET               "P Offset"
    #define STRING_H_OFFSET               "H Offset"
    #define STRING_DISTANCE               "Distance"
    #define STRING_LOAD_UNLOAD            "Load/Unload"  // needs translation
    #define STRING_LOAD_UNLOAD_SHORT      "(Un)Load"  // needs translation
    #define STRING_TOUCHSCREEN_ADJUST     "Kalibracja"
    #define STRING_MORE                   "Więcej"
    #define STRING_SCREEN_INFO            "Info"
    #define STRING_BG_COLOR               "Background color"
    #define STRING_FONT_COLOR             "Font color"
    #define STRING_PERCENTAGE             "Procent"
    #define STRING_PERCENTAGE_SPEED       "Prędkość"
    #define STRING_PERCENTAGE_FLOW        "Flow"
    #define STRING_BABYSTEP               "BabyStep"
    #define STRING_X_INC                  "X+"
    #define STRING_Y_INC                  "Y+"
    #define STRING_Z_INC                  "Z+"
    #define STRING_X_DEC                  "X-"
    #define STRING_Y_DEC                  "Y-"
    #define STRING_Z_DEC                  "Z-"
    #define STRING_X                      "X"
    #define STRING_Y                      "Y"
    #define STRING_Z                      "Z"
    #define STRING_ADJUST_TITLE           "Kalibracja ekranu dotykowego"
    #define STRING_ADJUST_INFO            "Dotykaj czerwoną kropkę"
    #define STRING_ADJUST_OK              "Kalibracja poprawna"
    #define STRING_ADJUST_FAILED          "Kalibracja niepoprawna, spróbuj ponownie"
    #define STRING_UNIFIEDMOVE            "Ruch"
    #define STRING_UNIFIEDHEAT            "Temperatura"
    #define STRING_TOUCH_TO_EXIT          "Dotkij aby wyjść"
    #define STRING_MAINMENU               "Menu"
    #define STRING_LEVELING_EDGE_DISTANCE "Bed edge distance"
    #define STRING_TUNING                 "Tuning"
    #define STRING_PID                    "PID"
    #define STRING_PID_TITLE              "PID autotune"
    #define STRING_PID_START_INFO         "PID autotune may take some time to complete.\nContinue?"
    #define STRING_PID_START_INFO_2       "PID autotune in progress!"
    #define STRING_PID_START_INFO_3       "Do not touch the screen until completed (green LED ON)!"
    #define STRING_TUNE_EXTRUDER          "Tune steps"
    #define STRING_TUNE_EXT_EXTRUDE_100   "Ext. 100mm"
    #define STRING_TUNE_EXT_TEMP          "Extruder tuning | Heat"
    #define STRING_TUNE_EXT_MARK120MM     "Mark 120 mm on your fillament.\nPress '%s' when ready.\nMeasure remaining length after extruding."
    #define STRING_TUNE_EXT_HEATOFF       "Turn the heater off?"
    #define STRING_TUNE_EXT_ADJ_ESTEPS    "Adjust E-Steps"
    #define STRING_TUNE_EXT_ESTEPS_SAVED  "New E-steps applied.\nDon't forget to save it in EEPROM.\nNew value: %0.2f"
    #define STRING_TUNE_EXT_MEASURED      "Length remaining:"
    #define STRING_TUNE_EXT_OLD_ESTEP     "Old e-steps: %0.2f"
    #define STRING_TUNE_EXT_NEW_ESTEP     "New e-steps: %0.2f"
    #define STRING_NOTIFICATIONS          "Notifications"
    #define STRING_MESH_EDITOR            "Mesh edit"
    #define STRING_MESH_TUNER             "Mesh tuner"
    #define STRING_CASE_LIGHT             "Case light"
    #define STRING_LOAD_STARTED           "Loading filament.\nPlease wait for the process to complete."  // translation needed
    #define STRING_UNLOAD_STARTED         "Unloading filament.\nPlease wait for the process to complete."  // translation needed
    #define STRING_HEATERS_ON             "Some heaters are still ON.\nDo you want to stop them?"  // translation needed
    #define STRING_PRINT_FINISHED         "   Print\n   finished"
    #define STRING_MAIN_SCREEN            "Main"
    #define STRING_PREVIOUS_PRINT_DATA    "Brief"
    #define STRING_PRINT_TIME             "Print Time: %02u:%02u:%02u"
    #define STRING_FILAMENT_LENGTH        "\nFilament length: %1.2fm"
    #define STRING_FILAMENT_WEIGHT        "\nFilament weight: %1.2fg"
    #define STRING_FILAMENT_COST          "\nFilament cost: %1.2f"
    #define STRING_NO_FILAMENT_STATS      "\nFilament data not available."
    #define STRING_CLICK_FOR_MORE         "Click for summary"
    #define STRING_EXT_TEMPLOW            "Hotend temperature is below minimum temperature (%d℃)."
    #define STRING_HEAT_HOTEND            "Heat hotend to %d℃?"
    #define STRING_DESIRED_TEMPLOW        "Hotend temperature is below\ndesired temperature (%d℃)."
    #define STRING_WAIT_HEAT_UP           "Wait for it to heat up."
    #define STRING_Z_ALIGN                "Z Align"
    #define STRING_MACROS                 "Macros"
    #define STRING_MESH_VALID             "Mesh Validation"
    #define STRING_CONNECT_PROBE          "Connect probe before starting the process. Make sure to disconnect it afterwards."
    #define STRING_DISCONNECT_PROBE       "Make sure you have disconnected probe before using this feature."
    #define STRING_CALIBRATION            "Calibration"

#endif
