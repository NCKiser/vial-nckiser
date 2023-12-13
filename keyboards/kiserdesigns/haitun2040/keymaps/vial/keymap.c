 /* This program is free software: you can redistribute it and/or modify
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

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
  if (rgb_matrix_is_enabled()){
    if (host_keyboard_led_state().caps_lock) {
        switch (get_highest_layer(layer_state|default_layer_state)) {
            case 1:
                rgb_matrix_set_color(0, RGB_YELLOW);
                break;
            case 2:
                rgb_matrix_set_color(0, RGB_MAGENTA);
                break;
            case 3:
                rgb_matrix_set_color(0, RGB_WHITE);
                break;
            default: //  for any other layers, or the default layer
                rgb_matrix_set_color(0, RGB_RED);
                break;
            };
    };
    if (!host_keyboard_led_state().caps_lock) {
        switch (get_highest_layer(layer_state|default_layer_state)) {
            case 1:
                rgb_matrix_set_color(0, RGB_GREEN);
                break;
            case 2:
                rgb_matrix_set_color(0, RGB_BLUE);
                break;
            case 3:
                rgb_matrix_set_color(0, RGB_CYAN);
                break;
            default: //  for any other layers, or the default layer
                rgb_matrix_set_color(0, RGB_BLACK);
                break;
            };
    }
  }
	return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
             KC_TRNS, KC_TRNS,     KC_TRNS,          KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS 
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif
