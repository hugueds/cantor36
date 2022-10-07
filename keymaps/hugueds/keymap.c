
// TODO strings layer
// TODO add commands layer


#include QMK_KEYBOARD_H

#define BASE 0
#define _LAYER1 1
#define _LAYER2 2
#define _LAYER3 3
#define _LAYER4 4
#define _LAYER5 5
#define _LAYER6 6

enum custom_keycodes {
    LAYER0 = SAFE_RANGE,
    LAYER1,
    LAYER2,
    LAYER3,
    LAYER4,
    LAYER5,
    LAYER6,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {


  [BASE] = LAYOUT_split_3x6_3(
    KC_NO, KC_Q, KC_W, KC_F, KC_P, KC_B,                                    KC_J, KC_L, KC_U, KC_Y, KC_SCLN, KC_NO, 
    KC_NO, LGUI_T(KC_A), LALT_T(KC_R), LCTL_T(KC_S), LSFT_T(KC_T), KC_G,    KC_M, RSFT_T(KC_N), RCTL_T(KC_E), LALT_T(KC_I), KC_O, KC_NO,
    KC_NO, LCTL_T(KC_Z), KC_X, KC_C, KC_D, KC_V,                            KC_K, KC_H, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
    LT(5,KC_ESC), LT(1,KC_SPC), LT(3,KC_TAB),                               LT(4,KC_ENT), LT(2,KC_BSPC), LT(6,KC_DEL)
  ),


  [_LAYER1] = LAYOUT_split_3x6_3(
    KC_NO, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC,                        KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_NO, 
    KC_NO, LGUI_T(KC_1), LALT_T(KC_2), LCTL_T(KC_3), LSFT_T(KC_4), KC_NO,   KC_EQL, RSFT_T(KC_7), RCTL_T(KC_8), LALT_T(KC_9), RGUI_T(KC_0), KC_NO, 
    KC_NO, KC_NO, KC_NO, KC_NO, KC_5, KC_NO,                                KC_PLUS, KC_6, KC_PMNS, KC_PDOT, KC_NO, KC_NO, 
    KC_NO, KC_NO, KC_NO,                                                    KC_ENT, KC_BSPC, KC_NO
  ),


  [_LAYER2] = LAYOUT_split_3x6_3(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                               KC_PIPE, KC_LCBR, KC_RCBR, KC_MINS, KC_UNDS, KC_NO,
    KC_NO, KC_TILD, KC_GRV, KC_QUOT, KC_DQUO, KC_CIRC,                      KC_EQL, KC_LPRN, KC_RPRN, KC_PPLS, KC_SCLN,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                        KC_BSLS, KC_LBRC, KC_RBRC, KC_LT, KC_GT, KC_NO,
    KC_NO, KC_NO, KC_NO,                                                    KC_NO, KC_NO, KC_NO
  ),

  [_LAYER3] = LAYOUT_split_3x6_3(
    KC_NO, LALT(KC_F4), LCTL(KC_F4), KC_NO, KC_F5, LALT(KC_GRV),            KC_NO, LSFT(KC_HOME), KC_UP, LSFT(KC_END), KC_PGUP, KC_NO, 
    KC_NO, KC_LGUI, KC_LALT, KC_LCTL, KC_LSFT, LALT(KC_TAB),                KC_NO, KC_LEFT, KC_DOWN, KC_RGHT, KC_PGDN, KC_NO,
    KC_NO, KC_UNDO, KC_CUT, KC_COPY, KC_PSTE, KC_NO,                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO,                                                    KC_NO, C_S_T(KC_TAB), LCTL(KC_TAB)
  ),

  [_LAYER4] = LAYOUT_split_3x6_3(
    KC_NO, KC_WH_U, KC_NO, KC_MS_U, KC_F5, KC_WH_L,                           KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_WH_D, KC_MS_L, KC_MS_D, KC_MS_R,KC_WH_R,                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_WBAK, KC_WFWD, KC_COPY, KC_PSTE, KC_NO,                       KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_BTN3, KC_BTN1, KC_BTN2,                                              KC_NO, KC_NO, KC_NO
  ),

  [_LAYER5] = LAYOUT_split_3x6_3(
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                               KC_MPRV, KC_VOLD, KC_VOLU, KC_MNXT, KC_NO,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                               KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_NO, KC_NO, KC_NO,                                                    KC_NO, KC_MSTP, KC_MPLY
  ),


  [_LAYER6] = LAYOUT_split_3x6_3(
    KC_NO, KC_PAUS, KC_SCRL, KC_CAPS, KC_PSCR, KC_NO,                       KC_F11, KC_F5, KC_F4, KC_F3, KC_F2, KC_NO,
    KC_NO, KC_F1, LALT_T(KC_F2), LCTL_T(KC_F3), LSFT_T(KC_F4), KC_F11,      KC_F12, LSFT_T(KC_F7), LCTL_T(KC_F8), LALT_T(KC_F9), KC_F10,
    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F5,                               KC_NO, KC_NO, KC_F6, KC_NO, KC_NO, KC_NO, KC_NO,
    KC_APP, KC_NO, KC_NO,                                                   KC_NO, KC_NO, KC_NO
  ) 

      
};