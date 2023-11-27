/* Copyright 2021 Noah Kiser (NCKiser)
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

enum layers {
    _BASE,
    _FUNC
};

#define KC_NUM_SPC LT(_NUM_SYM, KC_SPC)
#define KC_GA LGUI_T(KC_A)
#define KC_AS LALT_T(KC_S)
#define KC_CD LCTL_T(KC_D)
#define KC_SF LSFT_T(KC_F)
#define KC_SJ RSFT_T(KC_J)
#define KC_CK RCTL_T(KC_K)
#define KC_AL RALT_T(KC_L)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_BASE] = LAYOUT(
        KC_DEL, KC_PRSC,    KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6,
        KC_F1,  KC_F2,        KC_TAB,   KC_Q, KC_W, KC_E, KC_R, KC_T,
        KC_F3,  KC_F4,         KC_CAPS,  KC_A, KC_S, KC_D, KC_F, KC_G,
        KC_F5,  KC_F6,          KC_LSFT,   KC_Z, KC_X, KC_C, KC_V, KC_B,
        KC_F7,  KC_F8,       KC_LCTL,  KC_LGUI,  KC_LALT,   KC_SPACE
    ),

    [_FUNC] = LAYOUT(
        KC_TRNS, KC_TRNS,   KC_GRAVE, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,
        KC_TRNS, KC_TRNS,     KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,      KC_TRNS,   KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS,       KC_TRNS,     KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
        KC_TRNS, KC_TRNS,     KC_TRNS,   KC_TRNS,   KC_TRNS,        KC_TRNS 
    )
};

