/*
Copyright 2021 Noah Kiser (contact@kiserdesigns.com)

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

#define VENDOR_ID       0x4B44
#define PRODUCT_ID      0x4B6E
#define DEVICE_VER 	0x0001
#define MANUFACTURER    Kiser Designs
#define PRODUCT         Korone

#define MATRIX_ROWS 4
#define MATRIX_COLS 15

#define MATRIX_ROW_PINS { F7, C6, D7, D6 }
#define MATRIX_COL_PINS { F0, F1, F4, F5, F6, C7, D0, D1, D2, D3, D5, D4, B2, B3, B7 }
#define UNUSED_PINS

#define ENCODERS_PAD_A { B5, B1 }
#define ENCODERS_PAD_B { B6, B0 }
#define ENCODER_RESOLUTION 4

#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 200

#define RGB_DI_PIN B4
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 12    // Number of LEDs
#define RGBLIGHT_HUE_STEP 10
#define RGBLIGHT_SAT_STEP 17
#define RGBLIGHT_VAL_STEP 17

#endif
