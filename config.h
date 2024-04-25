// Copyright 2024 Kajtn (@Kajtn)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT

#define MASTER_RIGHT
#define SOFT_SERIAL_PIN GP0

// The pin connected to the data pin of the LEDs
#define WS2812_DI_PIN GP22
// The number of LEDs connected
#define RGB_MATRIX_LED_COUNT 70
#define RGBLED_SPLIT { 35, 35 }

#define PMW33XX_CS_PIN GP17
#define SPI_DRIVER SPID0
#define SPI_SCK_PIN GP18
#define SPI_MOSI_PIN GP19
#define SPI_MISO_PIN GP16

#define POINTING_DEVICE_INVERT_Y true