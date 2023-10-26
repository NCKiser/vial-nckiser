#include "quantum.h"

#define LAYOUT( \
      k00, k01, k02, k03, k04, k05, k46, k40, k41, k42, k43, k44, k45, \
      k10, k11, k12,  k13, k14, k15, k56, k50, k51, k52, k53, k54, k55, \
      k20, k21, k22,    k24, k25, k66, k60, k61,  k62, k63, k64,  k65, \
      k30, k31, k32, k33, k34, k35,    k70, k71, k72,    k73, k74, k75 \
) \
{ \
    { k00, k01, k02, k03, k04, k05, KC_NO }, \
    { k10, k11, k12, k13, k14, k15, KC_NO }, \
    { k20, k21, k22, KC_NO, k24, k25, KC_NO }, \
    { k30, k31, k32, k33, k34, k35, KC_NO }, \
    { k40, k41, k42, k43, k44, k45, k46 }, \
    { k50, k51, k52, k53, k54, k55, k56 }, \
    { k60, k61, k62, k63, k64, k65, k66 }, \
    { k70, k71, k72, k73, k74, k75, KC_NO }, \
} 
