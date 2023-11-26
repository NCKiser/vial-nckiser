#include "tomy.h"

void matrix_init_kb(void) {
	matrix_init_user();
}

led_config_t g_led_config = { {

    { 6, 5, 4, 3, 2, 1 },
    { 7, 4, 3, 2, 1, 14 },
    { 8, 9, 11, 12, 13, 15 }
}, {
	{ 214, 0 }, { 150,0 }, { 119,0 }, { 88,0 }, { 57,0 },  { 25,0 },  { 0, 15 },  { 8, 40 },
	{ 24,64 }, { 51,64 }, { 88,64 }, { 135,64 }, { 171,64 }, { 198,64 }, { 214,41 }, { 224,21 }
}, {
	2, 2, 2, 2, 2, 2, 2, 2,
    2, 2, 2, 2, 2, 2, 2, 2
} };