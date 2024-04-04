#include QMK_KEYBOARD_H

enum layers {
    _base = 0,
    _fn,
    _hotkeys,
    _macBase,
    _macFn,
    _macCtrl,
    _macOs,
    _macHotkeys
}

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┐
     * │Esc│ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ - │ = │Del│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Tab│ Q │ W │ E │ R │ T │Vup│Vdo│ Y │ U │ I │ O │ P │F12│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Cap│ A │ S │ D │ F │ G │ > │>> │ H │ J │ K │ L │ ; │Ret│
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Sft│ Z │ X │ C │ V │ B │Lcl│Rcl│ N │ M │ , │ . │ Up│/? │
     * ├───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┼───┤
     * │Ctr│ OS│Alt│Lup│Ldo│ BS│SPA│ ' │ [ │ ] │ \ │Lef│Dow│Rig│
     * └───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┴───┘
     */
     
    [_base] = LAYOUT_ortho_5x14(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_VOLD, KC_VOLU, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_F12,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_MPLY, KC_MNXT, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_BTN1, KC_BTN2, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
        KC_LCTL, KC_LGUI, KC_LALT, MO(_fn), MO(_hotkeys),   KC_BSPC, KC_SPC,  KC_QUOT, KC_LBRC, KC_RBRC, KC_BSLS, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [_fn] = LAYOUT_ortho_5x14(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  DF(_macBase),
        _______, _______, _______, _______, _______, _______, KC_KB_MUTE,_______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_MPRV,   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, KC_INS,    KC_PSCR, _______, _______, _______, _______, _______, _______,
        RGB_TOG, RGB_MODE_FORWARD, RGB_SAI, RGB_VAI, RGB_SPI, KC_BTN3,   _______, _______, _______, _______, _______, _______, _______, _______
    ),
    [_hotkeys] = LAYOUT_ortho_5x14(
        QK_BOOT, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, DF(_macBase),
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______
    ),
    [_macBase] = LAYOUT_ortho_5x14(
        KC_ESC,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,  KC_DEL,
        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_VOLD, KC_VOLU, KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_F12,
        KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_MPLY, KC_MNXT, KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_ENT,
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_INS,  KC_PSCR, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
        MO(_macCtrl), MO(_macOs), KC_LGUI, MO(_macFn), MO(_macHotkeys),KC_BSPC, KC_SPC,  KC_QUOT, KC_LBRC, KC_RBRC, KC_BSLS, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [_macFn] = LAYOUT_ortho_5x14(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_WAKE,
        LGUI(KC_GRV), _______, _______, _______, _______, _______, KC_KB_MUTE,_______, _______, _______, _______, _______, _______, _______,
        KC_CAPS, _______, _______, _______, _______, _______, KC_MPRV,   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
        RGB_TOG, RGB_MODE_FORWARD, RGB_SAI, RGB_VAI, RGB_SPI, KC_BTN3, _______,   _______, _______, _______, _______, _______, _______, _______
    ),
    [_macCtrl] = LAYOUT_ortho_5x14(
        _______,   _______,    _______,    _______,    _______,    _______,    _______,   _______, _______,    _______, _______, LGUI(KC_MINS), LGUI(KC_EQL),   LALT(KC_DEL),
        _______,   LGUI(KC_Q), LGUI(KC_W), _______,    LGUI(KC_R), LGUI(KC_T), _______,   _______, LGUI(KC_Y), _______, _______, _______, LGUI(KC_P), _______,
        _______,   LGUI(KC_A), LGUI(KC_S), _______,    LGUI(KC_F), _______,    _______,   _______, LGUI(KC_H), _______, _______, _______, _______,    _______,
        _______,   LGUI(KC_Z), _______,    LGUI(KC_C), LGUI(KC_V), _______,    _______,   _______, LGUI(KC_N), _______, _______, _______, LALT(KC_UP), _______,
        _______, _______, _______, _______, _______,   LALT(KC_BSPC), _______,   _______, _______, _______, _______, LALT(KC_LEFT), LALT(KC_DOWN), LALT(KC_RIGHT)
    ),
    [_macOs] = LAYOUT_ortho_5x14(
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, LALT(LCTL(KC_ENT)), _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, LALT(LCTL(KC_LEFT)), _______, LALT(LCTL(KC_RIGHT))
    ),
    [_macHotkeys] = LAYOUT_ortho_5x14(
        QK_BOOT, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, _______,
        _______, _______, _______, _______, _______, _______, _______,   _______, _______, _______, _______, _______, _______, DF(_base)
    )
};
const float width = 17.23077

led_config_t g_led_config = { {
// Key Matrix to LED Index
{ 0, 1, 2, 3, 4, 5, 6 },
{ 13, 12, 11, 10, 9, 8, 7 },
{ 14, 15, 16, 17, 18, 19, 20 },
{ 27, 26, 25, 24, 23, 22, 21 },
{ 28, 29, 30, 31, 32, 33, 34 },
{ 35, 36, 37, 38, 39, 40, 41 },
{ 42, 43, 44, 45, 46, 47, 48 },
{ 49, 50, 51, 52, 53, 54, 55 },
{ 56, 57, 58, 59, 60, 61, 62 },
{ 63, 64, 65, 66, 67, 68, 69 }
}, {
// LED Index to Physical Position
{ (int)(width * 6),  0  },  { (int)(width * 5),  0  },  { (int)(width * 4),  0  },  { (int)(width * 3),  0  }, { (int)(width * 2),  0  },  { (int)(width * 1), 0  },  {0, 0  },
{ (int)(width * 6),  16 },  { (int)(width * 5),  16 },  { (int)(width * 4),  16 },  { (int)(width * 3),  16 }, { (int)(width * 2),  16 },  { (int)(width * 1), 16 },  {0, 16 },
{ (int)(width * 6),  32 },  { (int)(width * 5),  32 },  { (int)(width * 4),  32 },  { (int)(width * 3),  32 }, { (int)(width * 2),  32 },  { (int)(width * 1), 32 },  {0, 32 },
{ (int)(width * 6),  48 },  { (int)(width * 5),  48 },  { (int)(width * 4),  48 },  { (int)(width * 3),  48 }, { (int)(width * 2),  48 },  { (int)(width * 1), 48 },  {0, 48 },
{ (int)(width * 6),  64 },  { (int)(width * 5),  64 },  { (int)(width * 4),  64 },  { (int)(width * 3),  64 }, { (int)(width * 2),  64 },  { (int)(width * 1), 64 },  {0, 64 },

{ (int)(width * 13),  0  },  { (int)(width * 12),  0  },  { (int)(width * 11),  0  },  { (int)(width * 10),  0  }, { (int)(width * 9),  0  },  { (int)(width * 8), 0  }, { (int)(width * 7), 0 },
{ (int)(width * 13), 16  },  { (int)(width * 12), 16  },  { (int)(width * 11),  16  },  { (int)(width * 116),  16  }, { (int)(width * 9),  16  },  { (int)(width * 8), 16  }, { (int)(width * 7), 16 },
{ (int)(width * 13), 32  },  { (int)(width * 12),  32 },  { (int)(width * 11),  32 },  { (int)(width * 10),  32 }, { (int)(width * 9),  32 },  { (int)(width * 8), 32 }, { (int)(width * 7), 32},
{ (int)(width * 13),  48  },  { (int)(width * 12),  48  },  { (int)(width * 11),  48  },  { (int)(width * 148),  48  }, { (int)(width * 9),  48  },  { (int)(width * 8), 48  }, { (int)(width * 7), 48 },
{ (int)(width * 13),  64  },  { (int)(width * 12),  64  },  { (int)(width * 11),  64  },  { (int)(width * 164),  64  }, { (int)(width * 9),  64  },  { (int)(width * 8), 64  }, { (int)(width * 7), 64 }
}, {
// LED Index to Flag
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4,
4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4, 4
} };