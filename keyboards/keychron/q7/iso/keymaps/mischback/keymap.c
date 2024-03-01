// SPDX-License-Identifier: GPL-2.0-or-later
// SPDX-FileCopyrightText: 2024 Mischback <mischback.dev@googlemail.com>
// SPDX-FileType: SOURCE

/* This is a personal keymap for the Keychron Q7 (ISO) keyboard.
 *
 * The source code is directly based on Keychron's contribution to the official
 * QMK repository (https://github.com/qmk/qmk_firmware) and customized to my
 * personal requirements.
 */

#include QMK_KEYBOARD_H

/* ***** DEFINES ***** */

/* Define custom keycodes.
 *
 * Actually these are just shortcuts to fit into the layer keymap without
 * overly destroying the neat columns.
 */
#define CC_CLMOV  LT(LAYER_MOVE, KC_CAPS)  // read: Custom Code Hold: Layer Move, Tap: CapsLock
#define CC_LFUNC  MO(LAYER_FUNC)           // read: Custom Code Layer Function
#define CC_LCTRL  MO(LAYER_CTRL)           // read: Custom Code Layer Control

enum layers{
    LAYER_BASE,
    LAYER_MOVE,
    LAYER_FUNC,
    LAYER_CTRL
};


// clang-format off

/* The actual definition of the layers.
 *
 * ``LAYER_BASE`` is just a slight modification of the original layer as
 * provided by Keychron's default keymap for the keyboard (originally named
 * ``WIN_BASE``):
 *   - document deviations here!
 *
 * Reference EMPTY LAYER (yank 6 lines):

    [LAYER_NAME] = LAYOUT_iso_73(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [LAYER_BASE] = LAYOUT_iso_73(
        KC_ESC,   KC_1,     KC_2,     KC_3,     KC_4,     KC_5,     KC_6,     KC_7,     KC_8,     KC_9,     KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,            KC_INS,   KC_DEL,
        KC_TAB,   KC_Q,     KC_W,     KC_E,     KC_R,     KC_T,     KC_Y,     KC_U,     KC_I,     KC_O,     KC_P,     KC_LBRC,  KC_RBRC,                      KC_PGUP,  KC_END,
        CC_CLMOV, KC_A,     KC_S,     KC_D,     KC_F,     KC_G,     KC_H,     KC_J,     KC_K,     KC_L,     KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,             KC_PGDN,  KC_HOME,
        KC_LSFT,  KC_NUBS,  KC_Z,     KC_X,     KC_C,     KC_V,     KC_B,     KC_N,     KC_M,     KC_COMM,  KC_DOT,   KC_SLSH,            KC_RSFT,            KC_UP,    _______,
        KC_LCTL,  KC_LGUI,  KC_LALT,                                KC_SPC,                                 KC_RALT,  KC_RCTL,  CC_LFUNC, CC_LCTRL, KC_LEFT,  KC_DOWN,  KC_RGHT),

    [LAYER_MOVE] = LAYOUT_iso_73(
        KC_GRV,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  KC_HOME,  KC_END,   _______,  _______,  _______,  _______,                      _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  KC_LEFT,  KC_DOWN,  KC_UP,    KC_RGHT,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),

    [LAYER_FUNC] = LAYOUT_iso_73(
        KC_TILD,  KC_F1,    KC_F2,    KC_F3,    KC_F4,    KC_F5,    KC_F6,    KC_F7,    KC_F8,    KC_F9,    KC_F10,   KC_F11,   KC_F12,   _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            _______,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  _______,  _______,  _______),

    [LAYER_CTRL] = LAYOUT_iso_73(
        KC_GRV,   _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,  RGB_TOG,
        _______,  RGB_MOD,  RGB_VAI,  RGB_HUI,  RGB_SAI,  RGB_SPI,  _______,  _______,  _______,  _______,  _______,  _______,  _______,                      RGB_SAI,  _______,
        _______,  RGB_RMOD, RGB_VAD,  RGB_HUD,  RGB_SAD,  RGB_SPD,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            RGB_SAD,  _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,            _______,            RGB_HUI,  _______,
        _______,  _______,  _______,                                _______,                                _______,  _______,  _______,  _______,  RGB_RMOD, RGB_HUD,  RGB_MOD)
};

// clang-format on
