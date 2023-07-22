/* Copyright 2021 Noah Kiser
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

#define LT1_BSP     LT(1, KC_BSPC)

enum custom_keycodes {
    RQ = SAFE_RANGE, RW, RE, RR, RT, RY, RU, RI, RO, RP,
    RA, RS, RD, RF, RG, RH, RJ, RK, RL,
    RZ, RX, RC, RV, RB, RN, RM, REX, RQU,   RSPC,
    R1, R2, R3, R4, R5, R6, R7, R8, R9, R0
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {    
        switch (keycode) {
            case RQ: SEND_STRING(":regional_indicator_q: "); break;
            case RW: SEND_STRING(":regional_indicator_w: "); break;
            case RE: SEND_STRING(":regional_indicator_e: "); break;
            case RR: SEND_STRING(":regional_indicator_r: "); break;
            case RT: SEND_STRING(":regional_indicator_t: "); break;
            case RY: SEND_STRING(":regional_indicator_y: "); break;
            case RU: SEND_STRING(":regional_indicator_u: "); break;
            case RI: SEND_STRING(":regional_indicator_i: "); break;
            case RO: SEND_STRING(":regional_indicator_o: "); break;
            case RP: SEND_STRING(":regional_indicator_p: "); break;
            case RA: SEND_STRING(":regional_indicator_a: "); break;
            case RS: SEND_STRING(":regional_indicator_s: "); break;
            case RD: SEND_STRING(":regional_indicator_d: "); break;
            case RF: SEND_STRING(":regional_indicator_f: "); break;
            case RG: SEND_STRING(":regional_indicator_g: "); break;
            case RH: SEND_STRING(":regional_indicator_h: "); break;
            case RJ: SEND_STRING(":regional_indicator_j: "); break;
            case RK: SEND_STRING(":regional_indicator_k: "); break;
            case RL: SEND_STRING(":regional_indicator_l: "); break;
            case RZ: SEND_STRING(":regional_indicator_z: "); break;
            case RX: SEND_STRING(":regional_indicator_x: "); break;
            case RC: SEND_STRING(":regional_indicator_c: "); break;
            case RV: SEND_STRING(":regional_indicator_v: "); break;
            case RB: SEND_STRING(":b: "); break;
            case RN: SEND_STRING(":regional_indicator_n: "); break;
            case RM: SEND_STRING(":regional_indicator_m: "); break;
            case REX: SEND_STRING(":exclamation: "); break;
            case RQU: SEND_STRING(":question: "); break;
            case RSPC: SEND_STRING(":blue_square: "); break;
            case R1: SEND_STRING(":one: "); break;
            case R2: SEND_STRING(":two: "); break;
            case R3: SEND_STRING(":three: "); break;
            case R4: SEND_STRING(":four: "); break;
            case R5: SEND_STRING(":five: "); break;
            case R6: SEND_STRING(":six: "); break;
            case R7: SEND_STRING(":seven: "); break;
            case R8: SEND_STRING(":eight: "); break;
            case R9: SEND_STRING(":nine: "); break;
            case R0: SEND_STRING(":zero: "); break;
            default: break;
        }
    } else {}
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        RQ,    RW,    RE,    RR,    RT,    RY,    RU,    RI,    RO,    RP,
        RA,    RS,    RD,    RF,    RG,    RH,    RJ,    RK,    RL,    KC_ENT,
        RZ,    RX,    RC,    RV,    RB,    RN,    RM,    REX,   KC_UP, RQU,
        KC_LCTL, KC_LGUI, KC_LALT, LT1_BSP,   RSPC,    KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [1] = LAYOUT(
        R1,    R2,    R3,    R4,    R5,    R6,    R7,    R8,    R9,    R0,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______,          _______,          _______, _______, _______
    ),

};
