#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT( \
  KC_1,       KC_2,      KC_3,       \
  KC_4,       KC_5,      KC_6,       \
  KC_7,       KC_8,      LT(1, KC_9) \
),
[1] = LAYOUT( \
  KC_ESC,   KC_PLUS, KC_MINS, \
  KC_ENTER, KC_ASTR, KC_SLSH, \
  KC_0,     KC_DOT,  KC_TRNS  \
),
[2] = LAYOUT( \
  KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS  \
),
[3] = LAYOUT( \
  KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS  \
),
[4] = LAYOUT( \
  KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS  \
),
[5] = LAYOUT( \
  KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS, \
  KC_TRNS, KC_TRNS, KC_TRNS  \
),

};

void keyboard_post_init_user(void) {
  // Customise these values to desired behaviour
//   debug_enable=true;
//   debug_matrix=true;
//   debug_keyboard=true;
  //debug_mouse=true;
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [1] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [2] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [3] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [4] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
    [5] =   { ENCODER_CCW_CW(KC_VOLU, KC_VOLD) },
};
#endif
