/* Copyright 2015-2016 Jack Humbert
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

#pragma once

#include "keymap.h"

// clang-format off

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │mas│BORRAR │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │ TAB │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │CA │CC │MENU │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴─────│
 * │CAPS  │ A │ S │ D │ F │ G │ H │ J │ K │ L │PTS│ ´ │ ENTER  │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴────────┤
 * │SHFT│ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define KC_ESC KC_GRV  // esc
#define KC_1    KC_1    // 1
#define KC_2    KC_2    // 2
#define KC_3    KC_3    // 3
#define KC_4    KC_4    // 4
#define KC_5    KC_5    // 5
#define KC_6    KC_6    // 6
#define KC_7    KC_7    // 7
#define KC_8    KC_8    // 8
#define KC_9    KC_9    // 9
#define KC_0    KC_0    // 0
#define KC_MINS KC_MINS // -
#define KC_EQL KC_EQL  // MAS
#define KC_BSPC KC_BSPC  // BORRAR
// Row 2
#define KC_TAB    KC_TAB    // TAB
#define KC_Q    KC_Q    // Q
#define KC_W    KC_W    // W
#define KC_E    KC_E    // E
#define KC_R    KC_R    // R
#define KC_T    KC_T    // T
#define KC_Y    KC_Y    // Y
#define KC_U    KC_U    // U
#define KC_I    KC_I    // I
#define KC_O    KC_O    // O
#define KC_P    KC_P    // P
#define KC_LBRC  KC_LBRC // CORCHETESABRIENDO
#define KC_RBRC KC_RBRC // CORCHETESCERRANDO
#define KC_MENU    KC_MENU    // MENU
// Row 3
#define KC_LCAP    KC_LCAP    // LCAP
#define KC_A    KC_A    // A
#define KC_S    KC_S    // S
#define KC_D    KC_D    // D
#define KC_F    KC_F    // F
#define KC_G    KC_G    // G
#define KC_H    KC_H    // H
#define KC_J    KC_J    // J
#define KC_K    KC_K    // K
#define KC_L    KC_L    // L
#define KC_SLSH KC_SLSH // SLASH
#define KC_QUOT KC_QUOT // ´ (dead)
// Row 4
#define KC_LEFT_SHIFT KC_LEFT_SHIFT // SHIFT
#define KC_Z    KC_Z    // Z
#define KC_X    KC_X    // X
#define KC_C    KC_C    // C
#define KC_V    KC_V    // V
#define KC_B    KC_B    // B
#define KC_N    KC_N    // N
#define KC_M    KC_M    // M
#define KC_COMMA KC_COMMA // ,
#define KC_DOT  KC_DOT  // .
#define KC_NUBS KC_NUBS // -
#define KC_UP KC_UP // ARRIBA
#define KC_DEL KC_DEL  // SUPRIMIR


// Row 5
#define KC_LEFT_CTRL KC_LEFT_CTRL // CTLR DER
#define KC_LEFT_GUI KC_LEFT_GUI // WINDOWS
#define KC_LEFT_ALT KC_LEFT_ALT // WINDOWS
#define KC_SPACE KC_SPACE // ESPACIO
#define KC_ALGR KC_ALGR // ALTGR
#define KC_SCLN KC_SCLN // DOSPTOS
#define KC_LEFT KC_LEFT // IZQ
#define KC_DOWN KC_DOWN // ABAJO
#define KC_RIGHT KC_RIGHT // DER





/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │ ! │ @ │ # │ $ │ % │ ^ │ & │ * │ ( │ ) │ - │ = │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ ^ │ * │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ ? │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │ Ñ │   │ ; │ : │ | │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define KC_EXLM S(KC_1)    // !
#define KC_AT S(KC_2)      // @
#define KC_HASH S(KC_3)    // #
#define KC_DLR  S(KC_4)    // $
#define KC_PERC S(KC_5)    // %
#define KC_CIRC S(KC_6)    // ^
#define KC_AMPR S(KC_7)    // &
#define ES_ASTR S(KC_8)    // *
#define KC_LPRN S(KC_9)    // (
#define KC_RRPN S(KC_0)    // )
#define KC_UNDS S(KC_MINS) // _
#define KC_KP_EQUAL S(ES_IEXL) // =
// Row 2
#define KC_LCBR  s(KC_LBRC) // CORCHETESABRIENDO
#define KC_RCBR (KC_RBRC) // CORCHETESCERRANDO
// Row 3
#define KC_QUES S(KC_SLSH) // ? 
#define KC_DQUO S(KC_QUOT) // ´ (dead)
// Row 4
#define KC_LABK S(KC_COMMA) // ,
#define KC_RABK S(KC_DOT)  // .
#define KC_PIPE S(KC_NUBS) // |
#define ES_NTIL S(KC_N) // Ñ

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ \ │ | │ @ │ # │ ~ │ € │ ¬ │   │   │   │   │   │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │ [ │ ] │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │ { │ } │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define KC_F1 ALGR(KC_1)    // F1
#define KC_F2 ALGR(KC_2)    // F2
#define KC_F3 ALGR(KC_3)    // F3
#define KC_F4 ALGR(KC_4)    // F4
#define KC_F5 ALGR(KC_5)    // F5
#define KC_F6 ALGR(KC_6)    // F6
#define KC_F7 ALGR(KC_7)    // F7
#define KC_F8 ALGR(KC_8)    // F8
#define KC_F9 ALGR(KC_9)    // F9
#define KC_F10 ALGR(KC_0)    // F10
#define KC_F11 ALGR(KC_MINS)    // F11
#define KC_F12 ALGR(KC_EQL)    // F12
// Row 2
#define KC_PSCR ALGR(KC_P)  // PRINTSCREEN
#define KC_TILD  ALGR(KC_LBRC) // CORCHETESABRIENDO
// Row 3
#define RGB_TOG ALGR(KC_A) // RGB TOGGLE
#define RGB_MODE_FORWARD ALGR(KC_S) // RGB MODE ADELANTE
#define RGB_MODE_REVERSE ALGR(KC_D) // RGB MODE ATRAS
#define RGB_HUI ALGR(KC_F) // HUI
#define RGB_SAI ALGR(KC_G) // SAI
#define RGB_SAD ALGR(KC_H) // SAD
#define RGB_VAI ALGR(KC_J) // VAI
#define RGB_VAD ALGR(KC_K) // VAD
#define RGB_SPI ALGR(KC_L) // SPI
#define RGB_SPD ALGR(KC_SLSH) // SPD
//ROW 4
#define QK_BOOTLOADER ALGR(KC_DEL) // SPD

