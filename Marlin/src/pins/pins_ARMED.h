/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2019 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#ifndef STM32F4
  #error "Oops! Select an STM32F4 board in 'Tools > Board.'"
#endif

#ifndef ARMED_V1_0
  #define ARMED_V1_1
#endif

#define DEFAULT_MACHINE_NAME "Arm'ed"

#undef BOARD_NAME
#define BOARD_NAME "GloryToArztoska"

//#define I2C_EEPROM

// #undef E2END
// #define E2END 0xFFF // EEPROM end address (4kB)

#if HOTENDS > 2 || E_STEPPERS > 2
  #error "Arm'ed supports up to 2 hotends / E-steppers."
#endif

//
// Limit Switches
//
#define X_MIN_PIN          PC13
#define X_MAX_PIN          -1
#define Y_MIN_PIN          PD12
#define Y_MAX_PIN          -1
#define Z_MIN_PIN          PD14
#define Z_MAX_PIN          PD15

//
// Z Probe (when not Z_MIN_PIN)
//
// #ifndef Z_MIN_PROBE_PIN
//   #define Z_MIN_PROBE_PIN  PA4
// #endif

//
// Steppers
//
//#define ARMED_SWAP_X_E1

#ifdef ARMED_SWAP_X_E1
  #define X_STEP_PIN       PE4
  #define X_DIR_PIN        PE2
  #define X_ENABLE_PIN     PE3
  #define X_CS_PIN         PE5
#else
  #define X_STEP_PIN       PC4
  #define X_DIR_PIN        PE0
  #define X_ENABLE_PIN     PE7
  #define X_CS_PIN         PE4
#endif

#define Y_STEP_PIN         PE5
#define Y_DIR_PIN          PE2
#define Y_ENABLE_PIN       PE6
#define Y_CS_PIN           PE3

#define Z_STEP_PIN         PD5
#define Z_DIR_PIN          PD3
#define Z_ENABLE_PIN       PD6
#define Z_CS_PIN           PE1

#define E0_STEP_PIN        PD7
#define E0_DIR_PIN         PD0
#define E0_CS_PIN          PB8
#define E0_ENABLE_PIN      PB9

// #ifdef ARMED_SWAP_X_E1
//   #define E1_STEP_PIN      PD3
//   #define E1_DIR_PIN       PD2
//   #define E1_ENABLE_PIN    PD0
//   #define E1_CS_PIN        PD1
// #else
//   #define E1_STEP_PIN      PE4
//   #define E1_DIR_PIN       PE2
//   #define E1_ENABLE_PIN    PE3
//   #define E1_CS_PIN        PE5
// #endif

//
// Temperature Sensors
//
#define TEMP_0_PIN         PC0   // Analog Input
#define TEMP_1_PIN         PC1   // Analog Input
#define TEMP_BED_PIN       PC2   // Analog Input
#define TEMP_C_PIN         PC3

//
// Heaters / Fans
//
#define HEATER_0_PIN       PA2   // PWM pin
#define HEATER_1_PIN       PA3   // PWM pin
#define HEATER_BED_PIN     PA1   // PWM pin

#define FAN_PIN            PE9   // PWM pin, Part cooling fan
#define FAN1_PIN           PE11   // PWM pin, Extruder fan
#define FAN2_PIN           PE13  // PWM pin, Controller fan
#define FAN3_PIN           PE14  // PWM pin, Psu fan ?

//
// Misc functions
//
#define SDSS               PB10
#define LED_PIN            PA15   // LIGHTS
//#define PS_ON_PIN          PA10
//#define KILL_PIN           PA8
//#define PWR_LOSS           PA4   // Power loss / nAC_FAULT

//
// LCD / Controller
//
//#define SD_DETECT_PIN      PA15
//#define BEEPER_PIN         PC9
#define LCD_PINS_RS        PE15
#define LCD_PINS_ENABLE    PD8
#define LCD_PINS_D4        PE10
#define LCD_PINS_D5        PE12
#define LCD_PINS_D6        PD1
#define LCD_PINS_D7        PE8
// #define BTN_EN1            PC4
// #define BTN_EN2            PC5
// #define BTN_ENC            PC3

#define ADC_KEYPAD_PIN     PA4

//
// Filament runout detection
//
//#define FIL_RUNOUT_PIN     PA3

//
// Extension pins
//


//#define EXT0_PIN           PB0

// #define EXT1_PIN           PB1
// #define EXT2_PIN           PB2
// #define EXT3_PIN           PD8
// #define EXT4_PIN           PD9
// #define EXT5_PIN           PD10
// #define EXT6_PIN           PD11
// #define EXT7_PIN           PD12
// #define EXT8_PIN           PB10
// #define EXT9_PIN           PB11

//Volatile

#define EEPROM_EMULATED_WITH_SRAM
// #define SPI_EEPROM
// #define SPI_CHAN_EEPROM1    0
// #define SPI_EEPROM1_CS     PB0   
//#define E2END 0x1FFFFF
