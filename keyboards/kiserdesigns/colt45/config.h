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
#define PRODUCT_ID      0x6334
#define DEVICE_VER 	0x0001
#define MANUFACTURER    rpiguy
#define PRODUCT         Colt45

#define MATRIX_ROWS 6
#define MATRIX_COLS 8

#define MATRIX_ROW_PINS { D3, D2, D1, D0, D4, C6}
#define MATRIX_COL_PINS { D7, E6, B4, B5, F4, F5, F6, F7 }
#define UNUSED_PINS

#define DIODE_DIRECTION COL2ROW

#define TAPPING_TERM 200

#endif
