#ifndef QUARTERTILLELEVEN_H
#define QUARTERTILLELEVEN_H

#define kXX KC_NO

#include "quantum.h"

#define LAYOUT( \
      k0A, k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, \
      k1A,  k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, \
      k2A,   k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, \
      k3A,       k30,      k32, k33,   k35, k36,      k38  \
) \
{ \
    { k00, k01, k02, k03, k04, k05, k06, k07, k08, k09, k0A }, \
    { k10, k11, k12, k13, k14, k15, k16, k17, k18, k19, k1A }, \
    { k20, k21, k22, k23, k24, k25, k26, k27, k28, k29, k2A }, \
    { k30, kXX, k32, k33, kXX, k35, k36, kXX, k38, kXX, k3A }, \
} 

#endif
