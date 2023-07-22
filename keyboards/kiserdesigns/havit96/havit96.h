#ifndef HAVIT96_H
#define HAVIT96_H

#include "quantum.h"

#define kxx KC_NO

#define LAYOUT( \
         k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, k0g, \
    k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f, k1g, \
    k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, k2g, \
    k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b,      k3d, k3e,      k3g, \
    k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a,      k4c,           k4f,      \
    k50, k51, k52,           k55,           k58, k59, k5a,      k5c,      k5e, k5f, k5g  \
) { \
    { kxx, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0a, k0b, k0c, k0d, k0e, k0f, k0g }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1a, k1b, k1c, k1d, k1e, k1f, k1g }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2a, k2b, k2c, k2d, k2e, k2f, k2g }, \
    { k30, k31, k32, k33, k34, k35, k36, k37, k38, k39, k3a, k3b, kxx, k3d, k3e, kxx, k3g },  \
    { k40, k41, k42, k43, k44, k45, k46, k47, k48, k49, k4a, kxx, k4c, kxx, kxx, k4f, kxx },  \
    { k50, k51, k52, kxx, kxx, k55, kxx, kxx, k58, k59, k5a, kxx, k5c, kxx, k5e, k5f, k5g }  \
}

#endif
