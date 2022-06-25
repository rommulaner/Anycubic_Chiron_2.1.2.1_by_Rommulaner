/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
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
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Release version. Leave the Marlin version or apply a custom scheme.
 */
#ifndef SHORT_BUILD_VERSION
  #define SHORT_BUILD_VERSION "2.0.9 Bugfix"
#endif

/**
 * Verbose version identifier containing a unique identifier, such as the
 * vendor name, download location, GitHub account, etc.
 */
#ifndef DETAILED_BUILD_VERSION
  #if ENABLED(CHIRON_CLASSIC_JERK)
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix CJ"
  #elif defined(CHIRON_CLASSIC_JERK_S_CURVE)
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix CJ SC"
  #elif defined(CHIRON_CLASSIC_JERK_ADAPTIVE_STEP_SMOOTHING)
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix CJ ASS"
  #elif defined(CHIRON_CLASSIC_JERK_S_CURVE_ADAPTIVE_STEP_SMOOTHING)
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix CJ SC ASS"
  #elif defined(CHIRON_CLASSIC_JERK_TMC2208_STANDALONE)
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix CJ TMC"
  #elif defined(CHIRON_CLASSIC_JERK_TMC2208_STANDALONE_S_CURVE)
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix CJ TMC SC"
  #elif defined(CHIRON_CLASSIC_JERK_TMC2208_STANDALONE_ADAPTIVE_STEP_SMOOTHING)
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix CJ TMC ASS"
  #elif defined(CHIRON_CLASSIC_JERK_TMC2208_STANDALONE_S_CURVE_ADAPTIVE_STEP_SMOOTHING)
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix CJ TMC SC ASS"
  #elif defined(CHIRON_LINEAR_ADVANCE)
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix LA"
  #elif defined(CHIRON_LINEAR_ADVANCE_ADAPTIVE_STEP_SMOOTHING)
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix LA ASS"
  #elif defined(CHIRON_LINEAR_ADVANCE_TMC2208_STANDALONE)
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix LA TMC"
  #elif defined(CHIRON_LINEAR_ADVANCE_TMC2208_STANDALONE_ADAPTIVE_STEP_SMOOTHING)
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix LA TMC ASS"
  #else
    #define DETAILED_BUILD_VERSION  "2.0.9 Bugfix Classic Jerk"
  #endif
#endif

/**
 * The STRING_DISTRIBUTION_DATE represents when the binary file was built,
 * here we define this default string as the date where the latest release
 * version was tagged.
 */
#ifndef STRING_DISTRIBUTION_DATE
  #define STRING_DISTRIBUTION_DATE "2022-05-01"
#endif

/**
 * Minimum Configuration.h and Configuration_adv.h file versions.
 * Set based on the release version number. Used to catch an attempt to use
 * older configurations. Override these if using a custom versioning scheme
 * to alert users to major changes.
 */

#define MARLIN_HEX_VERSION 02010000
#ifndef REQUIRED_CONFIGURATION_H_VERSION
  #define REQUIRED_CONFIGURATION_H_VERSION MARLIN_HEX_VERSION
#endif
#ifndef REQUIRED_CONFIGURATION_ADV_H_VERSION
  #define REQUIRED_CONFIGURATION_ADV_H_VERSION MARLIN_HEX_VERSION
#endif

/**
 * The protocol for communication to the host. Protocol indicates communication
 * standards such as the use of ASCII, "echo:" and "error:" line prefixes, etc.
 * (Other behaviors are given by the firmware version and capabilities report.)
 */
#ifndef PROTOCOL_VERSION
  #define PROTOCOL_VERSION "1.0"
#endif

/**
 * Define a generic printer name to be output to the LCD after booting Marlin.
 */
#ifndef MACHINE_NAME
  #define MACHINE_NAME "3D Printer"
#endif

/**
 * Website where users can find Marlin source code for the binary installed on the
 * device. Override this if you provide public source code download. (GPLv3 requires
 * providing the source code to your customers.)
 */
#ifndef SOURCE_CODE_URL
  #define SOURCE_CODE_URL "github.com/MarlinFirmware/Marlin"
#endif

/**
 * Default generic printer UUID.
 */
#ifndef DEFAULT_MACHINE_UUID
  #define DEFAULT_MACHINE_UUID "cede2a2f-41a2-4748-9b12-c55c62f367ff"
#endif

  /**
   * The WEBSITE_URL is the location where users can get more information such as
   * documentation about a specific Marlin release. Displayed in the Info Menu.
   */
#ifndef WEBSITE_URL
  #define WEBSITE_URL "marlinfw.org"
#endif

/**
 * Set the vendor info the serial USB interface, if changable
 * Currently only supported by DUE platform
 */
#ifndef USB_DEVICE_VENDOR_ID
  #define USB_DEVICE_VENDOR_ID            0x03EB /* ATMEL VID */
#endif
#ifndef USB_DEVICE_PRODUCT_ID
  #define USB_DEVICE_PRODUCT_ID           0x2424 /* MSC / CDC */
#endif
//! USB Device string definitions (Optional)
#ifndef USB_DEVICE_MANUFACTURE_NAME
  #define USB_DEVICE_MANUFACTURE_NAME     WEBSITE_URL
#endif
#ifdef CUSTOM_MACHINE_NAME
  #define USB_DEVICE_PRODUCT_NAME         CUSTOM_MACHINE_NAME
#else
  #define USB_DEVICE_PRODUCT_NAME         MACHINE_NAME
#endif
#define USB_DEVICE_SERIAL_NAME            "123985739853"