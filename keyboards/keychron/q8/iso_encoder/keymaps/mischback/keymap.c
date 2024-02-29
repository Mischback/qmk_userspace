// SPDX-License-Identifier: GPL-2.0-or-later
// SPDX-FileCopyrightText: 2024 Mischback <mischback.dev@googlemail.com>
// SPDX-FileType: SOURCE

/* This is a personal keymap for the Keychron Q8 (ISO, knob) keyboard.
 *
 * The source code is directly based on Keychron's contribution to the official
 * QMK repository (https://github.com/qmk/qmk_firmware) and customized to my
 * personal requirements.
 */

#include QMK_KEYBOARD_H

// clang-format off

enum layers {
    WIN_BASE
};

#define KC_TASK LGUI(KC_TAB)
#define KC_FLXP LGUI(KC_E)


// clang-format off

/* The actual definition of the layers.
 *
 * ``LAYER_BASE`` is just a slight modification of the original layer as
 * provided by Keychron's default keymap for the keyboard (originally named
 * ``WIN_BASE``):
 *   - document deviations here!
 *
 * Reference EMPTY LAYER (yank 6 lines):

    [LAYER_NAME] = LAYOUT_iso_70(
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______, _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______, _______,  _______,  _______,                      _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______, _______,  _______,  _______,  _______,            _______,
        _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______,  _______, _______, _______,  _______,  _______,  _______,  _______,
        _______,  _______,  _______,            _______,            _______,  _______,           _______,           _______,            _______,  _______,  _______)
 */

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [WIN_BASE] = LAYOUT_iso_70(
        KC_ESC,  KC_1,     KC_2,     KC_3,    KC_4,    KC_5,    KC_6,     KC_7,     KC_8,    KC_9,    KC_0,     KC_MINS,  KC_EQL,   KC_BSPC,          KC_MUTE,
        KC_TAB,  KC_Q,     KC_W,     KC_E,    KC_R,    KC_T,    KC_Y,     KC_U,     KC_I,    KC_O,    KC_P,     KC_LBRC,  KC_RBRC,                    KC_DEL,
        KC_CAPS, KC_A,     KC_S,     KC_D,    KC_F,    KC_G,    KC_H,     KC_J,     KC_K,    KC_L,    KC_SCLN,  KC_QUOT,  KC_NUHS,  KC_ENT,           KC_HOME,
        KC_LSFT, KC_NUBS,  KC_Z,     KC_X,    KC_C,    KC_V,    KC_B,     KC_B,     KC_N,    KC_M,    KC_COMM,  KC_DOT,   KC_SLSH,  KC_RSFT, KC_UP,
        KC_LCTL, KC_LWIN,  KC_LALT,           KC_SPC,           _______,  _______,           KC_SPC,            KC_RALT,            KC_LEFT, KC_DOWN, KC_RGHT),
        // KC_LCTL, KC_LWIN,  KC_LALT,           KC_SPC,           MO(_FN2), MO(_FN3),          KC_SPC,            KC_RALT,            KC_LEFT, KC_DOWN, KC_RGHT),
};

// clang-format on

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [WIN_BASE] = {ENCODER_CCW_CW(KC_VOLD, KC_VOLU)}
};
#endif // ENCODER_MAP_ENABLE
