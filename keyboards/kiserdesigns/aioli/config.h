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
#define PRODUCT_ID      0x4169
#define DEVICE_VER 	0x0001
#define MANUFACTURER    Kiser Designs
#define PRODUCT         Aioli

#define MATRIX_ROWS 3
#define MATRIX_COLS 3

#define MATRIX_ROW_PINS { F4, F5, F7 }
#define MATRIX_COL_PINS { F6, D6, D7 }
#define UNUSED_PINS

#define ENC0 D0
#define ENC1 C6
#define ENC2 B6
#define ENC3 B4
#define ENC4 B5
#define ENC5 F1
#define ENC6 F0
#define ENC7 E6
#define ENC8 D2
#define ENC9 D1

#define ENCODERS_PAD_A { ENC6, ENC7, ENC8, ENC6, ENC0, ENC3, ENC5, ENC1, ENC2 }
#define ENCODERS_PAD_B { ENC7, ENC8, ENC3, ENC5, ENC9, ENC4, ENC1, ENC2, ENC4 }

#define ENCODER_RESOLUTIONS { 4, 4, 4, 4, 4, 4, 4, 4, 4 }

#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 200

#endif
