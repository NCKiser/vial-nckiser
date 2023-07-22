/* SPDX-License-Identifier: GPL-2.0-or-later */

#pragma once

/* Comment or uncomment the next line to change the orientation of the pro-micro */
// #define PRO_MICRO_FLIPPED

#define BOOTMAGIC_LITE_ROW 7
#define BOOTMAGIC_LITE_COLUMN 0

/* USB Device descriptor parameter */
#define VENDOR_ID       0x4B44
#define PRODUCT_ID      0x426D
#define DEVICE_VER      0x0001
#define MANUFACTURER    Kiser Designs
#define PRODUCT         BoPM

/* key matrix size */
#define MATRIX_ROWS 13
#define MATRIX_COLS 10

/* Pro micro not flipped */
#ifndef PRO_MICRO_FLIPPED
#define MATRIX_ROW_PINS { GP9, GP27, GP26, GP22, GP20, GP21, GP23, GP3, GP4, GP5, GP6, GP7, GP8 }
#define MATRIX_COL_PINS { GP27, GP9, GP26, GP22, GP20, GP21, GP23, GP3, GP4, GP5 }
#define ENCODERS_PAD_A { GP28 }
#define ENCODERS_PAD_B { GP2 }
#define ENCODER_COMMON GP29
#endif

/*Pro micro is flipped */
#ifdef PRO_MICRO_FLIPPED
#define MATRIX_ROW_PINS { GP21, GP4, GP5, GP6, GP7, GP9, GP8, GP28, GP27, GP26, GP22, GP20, GP23 }
#define MATRIX_COL_PINS { GP4, GP21, GP5, GP6, GP7, GP9, GP8, GP28, GP27, GP26 }
#define ENCODERS_PAD_A { GP3 }
#define ENCODERS_PAD_B { GP29 }
#define ENCODER_COMMON GP2
#endif

#define DIODE_DIRECTION COL2ROW

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET
#define RP2040_BOOTLOADER_DOUBLE_TAP_RESET_TIMEOUT 500U

#define ENCODER_RESOLUTION 4
