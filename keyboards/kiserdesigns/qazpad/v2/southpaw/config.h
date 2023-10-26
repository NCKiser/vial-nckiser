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



#define MATRIX_ROWS 8
#define MATRIX_COLS 7


#define MATRIX_ROW_PINS { GP25, GP24, GP2, GP14, GP8, GP6, GP3, GP13 }
#define MATRIX_COL_PINS { GP4, GP5, GP19, GP9, GP10, GP1, GP0 }



#define ENCODERS_PAD_A { GP23, GP12, GP18 }
#define ENCODERS_PAD_B { GP21, GP11, GP17 }

#define ENCODER_RESOLUTIONS { 4, 4, 4 }

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U
