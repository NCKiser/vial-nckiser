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

enum custom_keycodes {
    KC_PASS = SAFE_RANGE,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
    case KC_PASS:
        if (record->event.pressed) {
            // when keycode KC_PASS is pressed
            SEND_STRING("KYU68c12#$0709");
        } else {
            // when keycode KC_PASS is released
        }
        break;
    }
    return true;
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_BSPC,
        KC_ENT,  KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_TAB,
        LT(1,KC_SPC), KC_F9, KC_F10, KC_F11, KC_F12, KC_RSFT
    ),
    [1] = LAYOUT(
        KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_BSPC,
        KC_ENT,  KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_PASS,
        KC_TRNS, KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_RSFT
    ),

};
