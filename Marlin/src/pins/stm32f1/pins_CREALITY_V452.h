/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
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

/**
 * Creality v4.5.2 (STM32F103) board pin assignments
 */

#if HOTENDS > 1 || E_STEPPERS > 1
  #error "CREALITY supports up to 1 hotends / E-steppers. Comment out this line to continue."
#endif

#define BOARD_NAME "Creality v4.5.2"
#define DEFAULT_MACHINE_NAME "Creality3D"

//
// EEPROM
//
#if NO_EEPROM_SELECTED
  #define IIC_BL24CXX_EEPROM                      // EEPROM on I2C-0 used only for display settings
  #if ENABLED(IIC_BL24CXX_EEPROM)
    #define IIC_EEPROM_SDA                  PB7
    #define IIC_EEPROM_SCL                  PB6
    #define MARLIN_EEPROM_SIZE             0x800  // 2Kb (24C16)
  #else
    #define SDCARD_EEPROM_EMULATION               // SD EEPROM until all EEPROM is BL24CXX
    #define MARLIN_EEPROM_SIZE             0x800  // 2Kb
  #endif
#endif

/* SPI */
//#define SPI_EEPROM  // EEPROM on SPI-0
//#define SPI_CHAN_EEPROM1        ?
//#define SPI_EEPROM1_CS          ?
// 2K EEPROM
//#define SPI_EEPROM2_CS          ?
// 32Mb FLASH
//#define SPI_FLASH_CS            ?

//
// Limit Switches
//
#define X_MIN_PIN           PC0
// #define X_MAX_PIN          PA7
#define Y_MIN_PIN           PC1
#define Z_MIN_PIN           PC14
#define COM_PIN             PA1

//
// Steppers
//
#define X_ENABLE_PIN        PB14
#define X_STEP_PIN          PB13
#define X_DIR_PIN           PB12

#define Y_ENABLE_PIN        PB11
#define Y_STEP_PIN          PB10
#define Y_DIR_PIN           PB2

#define Z_ENABLE_PIN        PB1
#define Z_STEP_PIN          PB0
#define Z_DIR_PIN           PC5

#define E0_ENABLE_PIN       PD2
#define E0_STEP_PIN         PB3
#define E0_DIR_PIN          PB4

#if HAS_TMC220x

  //
  // TMC2208 mode
  //
  // #define TMC2208_STANDALONE

  #define X_HARDWARE_SERIAL  MSerial1
  #define Y_HARDWARE_SERIAL  MSerial2
  #define Z_HARDWARE_SERIAL  MSerial3
  #define E0_HARDWARE_SERIAL MSerial4

  //
  // TMC2208 Software serial
  //
  // #define HAVE_SW_SERIAL

  // Reduce baud rate to improve software serial reliability
  // #define TMC_BAUD_RATE 19200

#endif

//
// Release PB4 (Z_STEP_PIN) from JTAG NRST role
//
#define DISABLE_DEBUG

//
// Temperature Sensors
//
#define TEMP_0_PIN         PA1   // TH1
#define TEMP_BED_PIN       PC3   // TB1

//
// Heaters / Fans
/*certification*/
// #define HEATER_0_PIN       PB14  // HEATER1
// #define HEATER_BED_PIN     PB13  // HOT BED

// #define FAN_PIN            PB15  // FAN
// #define FAN_SOFT_PWM

#define HEATER_0_PIN       PC8   // HEATER1
#define HEATER_BED_PIN     PC9   // HOT BED

#define FAN_PIN            PC6   // FAN
#define FAN_SOFT_PWM

#define HAS_ONBOARD_SD

#ifndef SDCARD_CONNECTION
  #define SDCARD_CONNECTION ONBOARD
#endif

#define ON_BOARD_SPI_DEVICE 1    // SPI1
#define ONBOARD_SD_CS_PIN  PA4   // Chip select for "System" SD card
/* SD card detect */
#define SD_DETECT_PIN      PC4
#define NEOPIXEL_PIN       PA8     

#define SDIO_SUPPORT      // Extra added by Creality
#define SDIO_CLOCK 6000000 // In original source code overridden by Creality in sdio.h

#define CASE_LIGHT_PIN PA6

#define FIL_RUNOUT_PIN PC15
// #define OPTO_SWITCH_PIN    PB2   // certification
#define OPTO_SWITCH_PIN    PC2


#define TEMP_TIMER_CHAN 4 // Channel of the timer to use for compare and interrupts

