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
#    define LAYOUT KEYMAP
#endif

#define LAYOUT_wrapper(...) LAYOUT(__VA_ARGS__)

enum {
    TD_CAPLOCK,
    TD_COPY,
    TD_PASTE,
};

// Tap Dance definitions
tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_CAPLOCK] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
    [TD_COPY]    = ACTION_TAP_DANCE_DOUBLE(KC_C, KC_COPY),
    [TD_PASTE]   = ACTION_TAP_DANCE_DOUBLE(KC_V, KC_PASTE),
};

//  layer QWERTY

/* #define ____________________QWERTY1L__________________ KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T
#define ____________________QWERTY1R__________________ KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC
 */
#define ____________________QWUERTY1__________________ KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_DEL
#define ____________________QWUERTY2__________________ TD(TD_CAPLOCK), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT // CON QK_LOCK bloque mayuscula al pulsar, y shift al presionar
#define ____________________QWUERTY3__________________ KC_LCTL, KC_Z, KC_X, TD(TD_COPY), TD(TD_PASTE), KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, RSFT_T(KC_ENT)
#define ____________________QWUERTY4__________________ KC_LGUI, MO(1), KC_SPC, KC_SPC, MO(2), KC_RALT

//  layer LOWER
#define ____________________LOWER1____________________ KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC
#define ____________________LOWER2____________________ KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, XXXXXXX, XXXXXXX
#define ____________________LOWER3____________________ KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX
#define ____________________LOWER4____________________ KC_LGUI, _______, KC_SPC, KC_ENT, MO(3), KC_RALT

//  layer RASER
#define ____________________RAISER1___________________ _______, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_DEL
#define ____________________RAISER2___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLU, XXXXXXX, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV
#define ____________________RAISER3___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_VOLD, KC_MUTE, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, LCTL(LALT(KC_DEL)) // Esta ultima manda ctrl+alt+del
#define ____________________RAISER4___________________ KC_LGUI, MO(3), KC_SPC, KC_ENT, _______, KC_RALT

//  layer CONFIG
#define ____________________CONFIG1___________________ XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG, KC_PGUP, KC_P7, KC_P8, KC_P9, XXXXXXX, KC_PWR
#define ____________________CONFIG2___________________ XXXXXXX, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, RGB_MOD, KC_PGDN, KC_P4, KC_P5, KC_P6, XXXXXXX, QK_BOOT
#define ____________________CONFIG3___________________ RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, RGB_RMOD, XXXXXXX, KC_P1, KC_P2, KC_P3, XXXXXXX, XXXXXXX
#define ____________________CONFIG4___________________ KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_P0
