/* Copyright 2021 REPLACE_WITH_YOUR_NAME
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

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
        KC_1,    KC_ESC,  KC_LCTL, KC_TAB,  KC_SPC,  KC_LGUI, KC_Q,    KC_2,
        KC_3,    KC_W,    KC_A,    KC_LSFT, KC_Z,    KC_S,    KC_E,    KC_4,
        KC_5,    KC_R,    KC_D,    KC_X,    KC_C,    KC_F,    KC_T,    KC_6,
        KC_7,    KC_Y,    KC_G,    KC_V,    KC_B,    KC_H,    KC_U,    KC_8,
        KC_9,    KC_I,    KC_J,    KC_N,    KC_M,    KC_K,    KC_O,    KC_0,
        KC_PPLS, KC_P,    KC_L,    KC_COMM, KC_DOT,  KC_SCLN, KC_LBRC, KC_MINS,
        KC_GRV,  KC_RBRC, KC_QUOT, KC_SLSH, KC_LALT, KC_EQL,  KC_BSLS, KC_HOME,
        KC_DEL,  KC_ENT,  KC_RGHT, KC_DOWN, KC_PGUP, KC_PGDN, KC_CAPS,  TT(1),
                                                                                KC_BSPC
    ),

    [1] = LAYOUT(
        KC_F1,   _______, _______, _______, _______, _______, _______, KC_F2,
        KC_F3,   _______, _______, _______, _______, _______, _______, KC_F4,
        KC_F5,   RESET,   _______, _______, _______, _______, _______, KC_F6,
        KC_F7,   _______, _______, _______, _______, _______, _______, KC_F8,
        KC_F9,   _______, _______, _______, _______, _______, _______, KC_F10,
        KC_F11,  _______, _______, _______, _______, _______, _______, KC_F12,
        _______, _______, _______, _______, _______, _______, _______, KC_END,
        KC_INS,  _______, KC_LEFT, KC_UP,   _______, _______, _______, _______,
                                                                                _______
    ),

    [2] = LAYOUT(
        KC_F1,   _______, _______, _______, _______, _______, _______, KC_F2,
        KC_F3,   _______, _______, _______, _______, _______, _______, KC_F4,
        KC_F5,   RESET,   _______, _______, _______, _______, _______, KC_F6,
        KC_F7,   _______, _______, _______, _______, _______, _______, KC_F8,
        KC_F9,   _______, _______, _______, _______, _______, _______, KC_F10,
        KC_F11,  _______, _______, _______, _______, _______, _______, KC_F12,
        _______, _______, _______, _______, _______, _______, _______, KC_END,
        KC_INS,  _______, KC_LEFT, KC_UP,   _______, _______, _______, _______,
                                                                                _______
    ),

};

void keyboard_post_init_user(void) {
  setPinOutput(D6);
  writePin(D6, 1);
}

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
    case 1:
        writePin(D6, 0);
        break;
    default: //  for any other layers, or the default layer
        writePin(D6, 1);
        break;
    }
  return state;
}
