/* Copyright 2021 customMK
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_default(
                          KC_GESC, KC_1,    KC_2,    KC_3,    KC_4,     KC_5,    KC_6,     KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_BSPC, KC_DEL,
                          KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,     KC_T,    KC_Y,     KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS, KC_PGUP,
        KC_F1,   KC_F4,   MO(1),   KC_A,    KC_S,    KC_D,    KC_F,     KC_G,    KC_H,     KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,           KC_PGDN,
        KC_F2,   KC_F5,   KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,     KC_B,    KC_N,     KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT,          KC_UP,   MO(1),
        KC_F3,   KC_F6,   KC_LCTL, KC_LWIN, KC_LALT,                    KC_SPACE,KC_TRNS,  KC_VOLD, KC_RALT, KC_RCTL, KC_VOLU,          KC_LEFT, KC_DOWN, KC_RGHT
    ),

    [1] = LAYOUT_default(
                          KC_PWR,  KC_F1,   KC_F2,   KC_F3,   KC_F4,    KC_F5,   KC_F6,    KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_DEL,  KC_HOME,
                          KC_TRNS, KC_TRNS, KC_TRNS, RGB_SPI, RGB_TOG,  RGB_RMOD,RGB_HUD,  RGB_SAD, RGB_VAD, RGB_SPD, KC_PSCR, KC_SLCK, KC_PAUS, RESET,   KC_HOME,
        KC_F7,   KC_F10,  KC_CAPS, KC_TRNS, RGB_SPI, KC_TRNS, RGB_TOG,  RGB_MOD, RGB_HUI,  RGB_SAI, RGB_VAI, RGB_SPI, KC_TRNS, KC_TRNS, KC_MPLY,          KC_END,
        KC_F8,   KC_F11,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  RGB_VAI, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
        KC_F9,   KC_F12,  KC_TRNS, KC_TRNS, KC_MPRV,                    KC_MPLY, KC_TRNS,  RGB_VAD, KC_MNXT, KC_TRNS, RGB_VAI,          KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [2] = LAYOUT_default(
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    ),

    [3] = LAYOUT_default(
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
                          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS,
        KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,                    KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS
    ),

};

static bool custom_encoder_mode = false;

void set_custom_encoder_mode_user(bool custom_mode) {
    custom_encoder_mode = custom_mode;
}


keyevent_t encoder_ccw = {
    .key = (keypos_t){.row = 4, .col = 7},
    .pressed = false
};

keyevent_t encoder_cw = {
    .key = (keypos_t){.row = 4, .col = 10},
    .pressed = false
};


bool encoder_update_user(uint8_t index, bool clockwise) {
    if (custom_encoder_mode) {
        if (clockwise) {
            encoder_cw.pressed = true;
            encoder_cw.time = (timer_read() | 1);
            action_exec(encoder_cw);
        } else {
            encoder_ccw.pressed = true;
            encoder_ccw.time = (timer_read() | 1);
            action_exec(encoder_ccw);
        }
    }

    return true;
}

void matrix_scan_user(void) {
    if (IS_PRESSED(encoder_ccw)) {
        encoder_ccw.pressed = false;
        encoder_ccw.time = (timer_read() | 1);
        action_exec(encoder_ccw);
    }

    if (IS_PRESSED(encoder_cw)) {
        encoder_cw.pressed = false;
        encoder_cw.time = (timer_read() | 1);
        action_exec(encoder_cw);
    }
}


// // Shift + esc = ~
// const key_override_t tilde_esc_override = ko_make_basic(MOD_MASK_SHIFT, KC_ESC, S(KC_GRV));

// // Win + esc =
// const key_override_t grave_esc_override = ko_make_basic(MOD_MASK_GUI, KC_ESC, KC_GRV);

// // Shift + bspc = del
// const key_override_t delete_key_override = ko_make_basic(MOD_MASK_SHIFT, KC_BSPC, KC_DEL);

// This globally defines all key overrides to be used
// const key_override_t **key_overrides = (const key_override_t *[]){
//     &tilde_esc_override,
//     &grave_esc_override,
//     &delete_key_override,
//     NULL // Null terminate the array of overrides!
// };
