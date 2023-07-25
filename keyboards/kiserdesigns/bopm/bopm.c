/* SPDX-License-Identifier: GPL-2.0-or-later */

#include "bopm.h"


void keyboard_pre_init_user(void) {
  // Write the encoder common pin low.

    setPinOutput(ENCODER_COMMON);
    writePinLow(ENCODER_COMMON);

}
