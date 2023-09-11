/*
 * Copyright (c) 2020 The ZMK Contributors
 *
 * SPDX-License-Identifier: MIT
 */
#pragma once

#include <dt-bindings/zmk/hid_usage.h>
#include <dt-bindings/zmk/hid_usage_pages.h>
#include <dt-bindings/zmk/modifiers.h>
#include <dt-bindings/zmk/keys.h>

/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ | │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ \ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ø │ Æ │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define NO_PIPE  GRAVE  // 
#define NO_1     N1    // 1
#define NO_2     N2    // 2
#define NO_3     N3    // 3
#define NO_4     N4    // 4
#define NO_5     N5    // 5
#define NO_6     N6    // 6
#define NO_7     N7    // 7
#define NO_8     N8    // 8
#define NO_9     N9    // 9
#define NO_0     N0    // 0
#define NO_PLUS  MINUS // +
#define NO_BSLS  EQUAL  // (backslash)
// Row 2
#define NO_Q     Q    // Q
#define NO_W     W    // W
#define NO_E     E    // E
#define NO_R     R    // R
#define NO_T     T    // T
#define NO_Y     Y    // Y
#define NO_U     U    // U
#define NO_I     I    // I
#define NO_O     O    // O
#define NO_P     P    // P
#define NO_ARNG  LBKT // Å
#define NO_DIAE  RBKT // ¨ (dead)
// Row 3
#define NO_A     A    // A
#define NO_S     S    // S
#define NO_D     D    // D
#define NO_F     F    // F
#define NO_G     G    // G
#define NO_H     H    // H
#define NO_J     J    // J
#define NO_K     K    // K
#define NO_L     L    // L
#define NO_OSTR  SEMI // Ø
#define NO_AE    SQT // Æ
#define NO_QUOT  NUHS // '
// Row 4
#define NO_LABK  NUBS // <
#define NO_Z     Z    // Z
#define NO_X     X    // X
#define NO_C     C    // C
#define NO_V     V    // V
#define NO_B     B    // B
#define NO_N     N    // N
#define NO_M     M    // M
#define NO_COMM  COMMA // ,
#define NO_DOT   DOT  // .
#define NO_MINS  FSLH // -

/* Shifted symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ ! │ " │ # │ ¤ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define NO_SECT S(NO_PIPE) // §
#define NO_EXLM LS(NO_1)    // !
#define NO_DQUO LS(NO_2)    // "
#define NO_HASH LS(NO_3)    // #
#define NO_CURR LS(NO_4)    // ¤
#define NO_PERC LS(NO_5)    // %
#define NO_AMPR LS(NO_6)    // &
#define NO_SLSH LS(NO_7)    // /
#define NO_LPRN LS(NO_8)    // (
#define NO_RPRN LS(NO_9)    // )
#define NO_EQL  LS(NO_0)    // =
#define NO_QUES LS(NO_PLUS) // ?
#define NO_GRV  LS(NO_BSLS) // ` (dead)
// Row 2
#define NO_CIRC LS(NO_DIAE) // ^ (dead)
// Row 3
#define NO_ASTR LS(NO_SQT) // *
// Row 4
#define NO_GT LS(NO_LT)       // >
#define NO_SEMI LS(NO_COMMA)  // ;
#define NO_COLON LS(NO_DOT)   // :
#define NO_UNDER LS(NO_MINUS) // _

/* AltGr symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ $ │ € │   │ { │ [ │ ] │ } │   │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │   │   │   │   │   │   │   │   │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1 AltGr
#define NO_AT    ALGR(NO_2)    // @
#define NO_POUND ALGR(NO_3)    // £
#define NO_DLLR  ALGR(NO_4)    // $
#define NO_EURO  ALGR(NO_5)    // €
#define NO_LBRC  ALGR(NO_7)    // {
#define NO_LBKT  ALGR(NO_8)    // [
#define NO_RBKT  ALGR(NO_9)    // ]
#define NO_RBRC  ALGR(NO_0)    // }
#define NO_ACUT  ALGR(NO_BSLS) // ´ (dead)
// Row 2 (only AltGr)
#define NO_TILD ALGR(NO_DIAE) // ~ (dead)
