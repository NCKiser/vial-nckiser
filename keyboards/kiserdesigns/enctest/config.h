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
#define PRODUCT_ID      0x6556
#define DEVICE_VER 	0x0001
#define MANUFACTURER    Kiser Designs
#define PRODUCT         ENCTEST

#define MATRIX_ROWS 3
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { F4, F5, F7 }
#define MATRIX_COL_PINS { F6, D6, D7 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 200

#endif

#define ENCODER_MATRIX

#define ENCODERS_PAD_A_ROWS { 1 }
#define ENCODERS_PAD_A_COLS { 0 }
#define ENCODERS_PAD_B_ROWS { 1 }
#define ENCODERS_PAD_B_COLS { 2 }

#define ENCODERS_PAD_A { F0 } // Need to be dummy pins not assigned to anything else
#define ENCODERS_PAD_B { F1 } // Need to be dummy pins not assigned to anything else

#define ENCODER_RESOLUTIONS { 4 }
