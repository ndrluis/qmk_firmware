#include QMK_KEYBOARD_H

#include "defines.h"

#ifdef OLED_DRIVER_ENABLE
#   include "oled.c"
#endif

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
       KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,   KC_P,  KC_BSPC,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LCTL,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                         KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_TILD,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                           KC_ESC,   MO(1),  KC_SPC,     KC_ENT,   MO(2), KC_LALT
                                      //`--------------------------'  `--------------------------'
  ),

  [1] = LAYOUT_split_3x6_3(
    KC_TAB,  KC_VOLD, KC_VOLU, KC_MUTE, XXXXXXX, XXXXXXX,       KC_7,   KC_8,  KC_9, XXXXXXX, XXXXXXX, KC_BSPC,
    KC_LCTL, KC_MPRV, KC_MNXT, KC_MPLY, XXXXXXX, KC_PGUP,      KC_4,   KC_5,  KC_6, XXXXXXX, XXXXXXX, KC_PSCR,
    KC_LSFT, XXXXXXX, XXXXXXX, COPY,    PASTE,   KC_PGDN,      KC_1,   KC_2,  KC_3, KC_0,  XXXXXXX, LCTL(LSFT(KC_PSCR)),
                               KC_LGUI, KC_TRNS, KC_SPC,      KC_ENT, MO(3), KC_LALT
  ),

  [2] = LAYOUT_split_3x6_3(
    KC_TAB,  KC_EXLM, KC_AT,   KC_HASH, KC_DLR, KC_PERC,      KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC,
    KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, COPY,              KC_MINS, KC_EQL,  KC_LBRC, KC_RBRC, KC_BSLS, KC_GRV,
    KC_LSFT, XXXXXXX,   XXXXXXX, XXXXXXX,   XXXXXXX,  PASTE,        KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_TILD,
                             KC_LGUI, MO(3),  KC_SPC,       KC_ENT, KC_TRNS, KC_LALT
  ),

  [3] = LAYOUT_split_3x6_3(
    KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, KC_F6,     KC_F7,   KC_F8,   KC_F9, KC_F10,  KC_F11, KC_F12,
    RGB_TOG, RGB_HUI, RGB_SAI, RGB_VAI, XXXXXXX, XXXXXXX,     KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, XXXXXXX, XXXXXXX,
    RGB_MOD, RGB_HUD, RGB_SAD, RGB_VAD, XXXXXXX, RESET,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                            KC_LGUI, KC_TRNS, KC_SPC,     KC_ENT, KC_TRNS, KC_RALT
  )
};
