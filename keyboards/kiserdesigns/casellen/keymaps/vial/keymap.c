#include QMK_KEYBOARD_H

#define __ KC_TRNS

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
  if (rgb_matrix_is_enabled()){
    HSV hsv = {0, 255, 0};
    if (!host_keyboard_led_state().caps_lock) {
        switch (get_highest_layer(layer_state|default_layer_state)) {
            case 1:
                hsv.h = 0;
                hsv.v = 255;
                break;
            case 2:
                hsv.h = 85;
                hsv.v = 255;
                break;
            case 3:
                hsv.h = 171;
                hsv.v = 255;
                break;
            case 4:
                hsv.h = 43;
                hsv.v = 255;
                break;
            case 5:
                hsv.h = 128;
                hsv.v = 255;
                break;
            case 6:
                hsv.h = 213;
                hsv.v = 255;
                break;
            default: //  for any other layers, or the default layer
                hsv.h = 0;
                hsv.v = 0;
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
    __,  __, __, __, __,  __, __, __, __,  __, __, __, __,  __,  __, __,     __,
    __, __, __, __, __, __, __, __, __, __, __, __, __,    __,   __, __, __, __,
     __,  __, __, __, __, __, __, __, __, __, __, __, __,  __,   __, __, __, __,
      __,  __, __, __, __, __, __, __, __, __, __, __,    __,    __, __, __,
       __,   __, __, __, __, __, __, __, __, __, __, __,   __,   __, __, __, __,
    __,  __,  __,      __,    __,    __,     __, __, __, __,     __,     __
  )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif
