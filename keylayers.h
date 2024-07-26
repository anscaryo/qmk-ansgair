#pragma once

/*
  _____ _____  _  ______  _____
 / ____|  __ \| |/ /  _ \|  __ \
| |    | |__) | ' /| |_) | |  | |
| |    |  _  /|  < |  _ <| |  | |
| |____| | \ \| . \| |_) | |__| |
 \_____|_|  \_\_|\_\____/|_____/
*/

#if (!defined(LAYOUT) && defined(KEYMAP))
#define LAYOUT KEYMAP
#endif

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

// crkbd layer qwerty
#define ____________________QWERTY1L__________________ KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T
#define ____________________QWERTY1R__________________ KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC

// crkbd layer lower

// crkbd layer raiser

// crkbd layer config