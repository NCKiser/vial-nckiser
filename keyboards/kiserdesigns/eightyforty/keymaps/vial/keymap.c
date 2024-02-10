#include QMK_KEYBOARD_H

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
  if (rgb_matrix_is_enabled()){
    HSV hsv = {0, 255, 0};
    if (!host_keyboard_led_state().caps_lock) {
        switch (get_highest_layer(layer_state|default_layer_state)) {

            // reference color wheel: https://github.com/qmk/qmk_firmware/blob/master/docs/feature_rgblight.md
            case 1:
                hsv.h = 156;
                hsv.v = 255;
                break;
            case 2:
                hsv.h = 96;
                hsv.v = 255;
                break;
            case 3:
                hsv.h = 180;
                hsv.v = 255;
                break;
            case 4:
                hsv.h = 201;
                hsv.v = 255;
                break;
            case 5:
                hsv.h = 85;
                hsv.v = 255;
                break;
            case 6:
                hsv.h = 40;
                hsv.v = 255;
                break;
            default: //  for any other layers, or the default layer
                hsv.h = 10;
                // hsv.s = 235;
                hsv.v = 180;
                break;
            };
    }
    if (host_keyboard_led_state().caps_lock) {
        hsv.s = 0;
        hsv.v = 255;
    };
    if (hsv.v > rgb_matrix_get_val()) {
        hsv.v = rgb_matrix_get_val();
    }
    RGB rgb = hsv_to_rgb(hsv);
    rgb_matrix_set_color(0, rgb.r, rgb.g, rgb.b);
  }
	return true;
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT(
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, QK_BOOT, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,     KC_TRNS,          KC_TRNS,      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif