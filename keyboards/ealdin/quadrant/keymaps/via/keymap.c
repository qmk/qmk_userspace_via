/* Copyright 2020 Ealdin Keyboards
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
  [0] = LAYOUT_ortho_5x14(
    /* Base
      * ,-------------------------------------------------------------------------------------------------.
      * |   `  |   1  |   2  |   3  |   4  |   5  |   -  |   +  |   6  |   7  |   8  |   9  |   0  | Bksp |
      * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
      * | Tab  |   Q  |   W  |   E  |   R  |   T  |   [  |   ]  |   Y  |   U  |   I  |   O  |   P  | Del  |
      * |------+------+------+------+------+-------------+------+------+------+------+------+------+------|
      * | Esc  |   A  |   S  |   D  |   F  |   G  | Home | PgUp |   H  |   J  |   K  |   L  |   ;  |  "   |
      * |------+------+------+------+------+------|------+------+------+------+------+------+------+------|
      * | Shift|   Z  |   X  |   C  |   V  |   B  | End  | PgDn |   N  |   M  |   ,  |   .  |   /  | Enter|
      * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
      * | Ctrl |  GUI | CpsLk|  Alt |  Fn2 | Space| Space| Space| Space|  Fn1 | Left | Down |  Up  | Right|
      * `-------------------------------------------------------------------------------------------------'
      */
    KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_MINS, KC_EQL,  KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_BSPC,
    KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_LBRC, KC_RBRC, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_DEL,
    KC_ESC,  KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_HOME, KC_PGUP, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
    KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_END,  KC_PGDN, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_ENT,
    KC_LGUI, KC_LCTL, KC_LALT, KC_CAPS, MO(2),   KC_BSPC, KC_BSPC, KC_SPC,  KC_SPC,  TG(1),   KC_LEFT, KC_DOWN, KC_UP,   KC_RGHT
  ),
  
  [1] = LAYOUT_ortho_5x14( 
    /* Layer 1 
      * ,-------------------------------------------------------------------------------------------------.
      * |  Esc |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |  F7  |  F8  |  F9  |  F10 | F11  |  F12 | PScr |
      * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      |      |      |      |      |      |      |      |  |   |
      * |------+------+------+------+------+-------------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      |      |      |      |      |      |      |      |Pause |
      * |------+------+------+------+------+------|------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      |      |      |      |      |      |      |      |Insert|
      * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
      * | Reset|      |      |      |      |      |      |      |      |      |      |      |      |ScrLk |
      * `-------------------------------------------------------------------------------------------------'
      */
    KC_ESC,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_PSCR,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_PAUS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,
    QK_BOOT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_SCRL
    ),

  [2] = LAYOUT_ortho_5x14(
  /* Layer 2 
      * ,-------------------------------------------------------------------------------------------------.
      * |Toggle| Mode+| Mode-| Hue+ | Hue- | Sat+ | Sat- |Value+|Value-|      |      |      |      |      |
      * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
      * |Static|Breath| Rainb| Swirl| Snake|Knight| Xmas | Grad | Test |      |      |      |      |      |
      * |------+------+------+------+------+-------------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
      * |------+------+------+------+------+------|------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      |      |      |      |      |      |      |      | Mute |
      * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      | Stop | Play |      |      | Prev | Vol- | Vol+ | Next |
      * `-------------------------------------------------------------------------------------------------'
      */
    UG_TOGG, UG_NEXT, UG_PREV, UG_HUEU, UG_HUED, UG_SATU, UG_SATD, UG_VALU, UG_VALD, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    RGB_M_P, RGB_M_B, RGB_M_R, RGB_M_SW, RGB_M_SN, RGB_M_K, RGB_M_X, RGB_M_G, RGB_M_T, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MUTE,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MSTP, KC_MPLY, KC_TRNS, KC_TRNS, KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT
    
  ),

  [3] = LAYOUT_ortho_5x14(
  /* Layer 3 
      * ,-------------------------------------------------------------------------------------------------.
      * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
      * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
      * |------+------+------+------+------+-------------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
      * |------+------+------+------+------+------|------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
      * |------+------+------+------+------+------+------+------+------+------+------+------+------+------|
      * |      |      |      |      |      |      |      |      |      |      |      |      |      |      |
      * `-------------------------------------------------------------------------------------------------'
      */
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
    KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
  )   
};
