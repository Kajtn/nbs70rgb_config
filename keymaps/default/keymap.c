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
};

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
        _______, RGB_MODE_FORWARD, RGB_SAI, RGB_VAI, RGB_SPI, RGB_HUI, KC_INS,    KC_PSCR, _______, _______, _______, _______, _______, _______,
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
        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_BTN1, KC_BTN2, KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_UP,   KC_SLSH,
        MO(_macCtrl), MO(_macOs), KC_LGUI, MO(_macFn), MO(_macHotkeys),KC_BSPC, KC_SPC,  KC_QUOT, KC_LBRC, KC_RBRC, KC_BSLS, KC_LEFT, KC_DOWN, KC_RIGHT
    ),
    [_macFn] = LAYOUT_ortho_5x14(
        KC_GRV,  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,     KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,  KC_WAKE,
        LGUI(KC_GRV), _______, _______, _______, _______, _______, KC_KB_MUTE,_______, _______, _______, _______, _______, _______, _______,
        KC_CAPS, _______, _______, _______, _______, _______, KC_MPRV,   _______, _______, _______, _______, _______, _______, _______,
        _______, RGB_MODE_FORWARD, RGB_SAI, RGB_VAI, RGB_SPI, RGB_HUI, KC_INS,    KC_PSCR, _______, _______, _______, _______, _______, _______,
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


static bool scrolling_mode = false;

layer_state_t layer_state_set_user(layer_state_t state) {
    switch (get_highest_layer(state)) {
        case _fn:  // If we're on the _RAISE layer enable scrolling mode
            scrolling_mode = true;
            pointing_device_set_cpi(700);
            break;
        case _hotkeys: 
            scrolling_mode = true;
            pointing_device_set_cpi(2500);
            break;
        case _macFn: 
            scrolling_mode = true;
            pointing_device_set_cpi(700);
            break;
        case _macHotkeys: 
            scrolling_mode = true;
            pointing_device_set_cpi(2500);
            break;
        default:
            if (scrolling_mode) {  // check if we were scrolling before and set disable if so
                scrolling_mode = false;
                pointing_device_set_cpi(2500);
            }
            break;
    }
    return state;
}

report_mouse_t pointing_device_task_user(report_mouse_t mouse_report) {
    if (scrolling_mode) {
        mouse_report.h = mouse_report.x;
        mouse_report.v = mouse_report.y;
        mouse_report.x = 0;
        mouse_report.y = 0;
    }
    return mouse_report;
}