
#include QMK_KEYBOARD_H
#include "version.h"
#include "keymap_german.h"
#include "keymap_nordic.h"
#include "keymap_french.h"
#include "keymap_spanish.h"
#include "keymap_hungarian.h"
#include "keymap_swedish.h"
#include "keymap_br_abnt2.h"
#include "keymap_canadian_multilingual.h"
#include "keymap_german_ch.h"
#include "keymap_jp.h"
#include "keymap_korean.h"
#include "keymap_bepo.h"
#include "keymap_italian.h"
#include "keymap_slovenian.h"
#include "keymap_lithuanian_azerty.h"
#include "keymap_danish.h"
#include "keymap_norwegian.h"
#include "keymap_portuguese.h"
#include "keymap_contributions.h"
#include "keymap_czech.h"
#include "keymap_romanian.h"
#include "keymap_russian.h"
#include "keymap_uk.h"
#include "keymap_estonian.h"
#include "keymap_belgian.h"
#include "keymap_us_international.h"
#include "keymap_croatian.h"
#include "keymap_turkish_q.h"
#include "keymap_slovak.h"

#define KC_MAC_UNDO LGUI(KC_Z)
#define KC_MAC_CUT LGUI(KC_X)
#define KC_MAC_COPY LGUI(KC_C)
#define KC_MAC_PASTE LGUI(KC_V)
#define KC_PC_UNDO LCTL(KC_Z)
#define KC_PC_CUT LCTL(KC_X)
#define KC_PC_COPY LCTL(KC_C)
#define KC_PC_PASTE LCTL(KC_V)
#define ES_LESS_MAC KC_GRAVE
#define ES_GRTR_MAC LSFT(KC_GRAVE)
#define ES_BSLS_MAC ALGR(KC_6)
#define NO_PIPE_ALT KC_GRAVE
#define NO_BSLS_ALT KC_EQUAL
#define LSA_T(kc) MT(MOD_LSFT | MOD_LALT, kc)
#define BP_NDSH_MAC ALGR(KC_8)
#define SE_SECT_MAC ALGR(KC_6)
#define MOON_LED_LEVEL LED_LEVEL

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
  BR_LSPO,
  BR_RSPC,
};


enum tap_dance_codes {
  DANCE_0,
  DANCE_1,
  DANCE_2,
  DANCE_3,
  DANCE_4,
  DANCE_5,
  DANCE_6,
  DANCE_7,
  DANCE_8,
  DANCE_9,
  DANCE_10,
  DANCE_11,
  DANCE_12,
  DANCE_13,
  DANCE_14,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_moonlander(
    ST_MACRO_0,     KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TO(8),                                          CAPS_WORD,      KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_EQUAL,       
    KC_TAB,         KC_Q,           KC_W,           KC_F,           KC_P,           KC_B,           KC_BSPACE,                                      KC_TRANSPARENT, KC_J,           KC_L,           KC_U,           KC_Y,           KC_SCOLON,      KC_BSLASH,      
    MO(9),          MT(MOD_LGUI, KC_A),MT(MOD_LALT, KC_R),MT(MOD_LCTL, KC_S),MT(MOD_LSFT, KC_T),KC_G,           KC_ENTER,                                                                       KC_TRANSPARENT, KC_M,           MT(MOD_RSFT, KC_N),MT(MOD_RCTL, KC_E),MT(MOD_LALT, KC_I),TD(DANCE_1),    KC_QUOTE,       
    KC_LSHIFT,      MT(MOD_LCTL, KC_Z),KC_X,           KC_C,           KC_D,           TD(DANCE_0),                                    KC_K,           KC_H,           KC_COMMA,       KC_DOT,         KC_SLASH,       KC_RSHIFT,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_LALT,        LT(5,KC_ESCAPE),LT(11,KC_BSPACE),                                                                                                OSL(7),         LT(6,KC_DELETE),TD(DANCE_2),    TD(DANCE_3),    TD(DANCE_4),    TD(DANCE_5),    
    LT(1,KC_SPACE), LT(3,KC_TAB),   MO(10),                         KC_TRANSPARENT, LT(4,KC_ENTER), LT(2,KC_BSPACE)
  ),
  [1] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_EXLM,        KC_AT,          KC_HASH,        KC_DLR,         KC_PERC,        KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_CIRC,        KC_AMPR,        KC_ASTR,        KC_LPRN,        KC_RPRN,        KC_TRANSPARENT, 
    KC_TRANSPARENT, MT(MOD_LGUI, KC_1),MT(MOD_LALT, KC_2),MT(MOD_LCTL, KC_3),MT(MOD_LSFT, KC_4),KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_EQUAL,       MT(MOD_RSFT, KC_7),MT(MOD_RCTL, KC_8),MT(MOD_LALT, KC_9),MT(MOD_RGUI, KC_0),KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_COMMA,       KC_TRANSPARENT, KC_5,           KC_TRANSPARENT,                                 KC_PLUS,        KC_6,           KC_MINUS,       KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [2] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_PIPE,        KC_LCBR,        KC_RCBR,        KC_MINUS,       KC_UNDS,        KC_TRANSPARENT, 
    KC_LCTRL,       KC_TILD,        KC_GRAVE,       KC_QUOTE,       KC_DQUO,        KC_CIRC,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_EQUAL,       KC_LPRN,        KC_RPRN,        KC_PLUS,        KC_SCOLON,      KC_RCTRL,       
    KC_LSHIFT,      ST_MACRO_1,     ST_MACRO_2,     ST_MACRO_3,     KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_BSLASH,      KC_LBRACKET,    KC_RBRACKET,    KC_LABK,        KC_RABK,        KC_RSHIFT,      
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [3] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, LALT(KC_F4),    LCTL(KC_F4),    KC_UP,          KC_F5,          LALT(KC_GRAVE), KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_NO,          TD(DANCE_6),    KC_UP,          TD(DANCE_7),    KC_PGUP,        KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_LGUI,        MT(MOD_LALT, KC_LEFT),MT(MOD_LCTL, KC_DOWN),MT(MOD_LSFT, KC_RIGHT),LALT(KC_TAB),   KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_NO,          TD(DANCE_8),    KC_DOWN,        TD(DANCE_9),    KC_PGDOWN,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PC_UNDO,     KC_PC_CUT,      KC_PC_COPY,     KC_PC_PASTE,    LCTL(KC_Y),                                     LCTL(KC_Y),     KC_PC_PASTE,    KC_PC_COPY,     KC_PC_CUT,      KC_PC_UNDO,     KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_4,     KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_5,     
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, LCTL(LSFT(KC_TAB)),LCTL(KC_TAB)
  ),
  [4] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_WH_UP,    KC_TRANSPARENT, KC_MS_UP,       KC_WWW_REFRESH, KC_MS_WH_LEFT,  KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_WH_UP,    KC_UP,          KC_MS_WH_DOWN,  KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_MS_WH_DOWN,  KC_MS_LEFT,     KC_MS_DOWN,     KC_MS_RIGHT,    KC_MS_WH_RIGHT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_LEFT,        KC_DOWN,        KC_RIGHT,       KC_NO,          KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_WWW_BACK,    KC_WWW_FORWARD, KC_PC_COPY,     KC_PC_PASTE,    KC_TRANSPARENT,                                 KC_NO,          KC_PC_PASTE,    KC_PC_COPY,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_MS_BTN3,     KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_MS_BTN1,     KC_MS_BTN2,     KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [5] = LAYOUT_moonlander(
    KC_SYSTEM_SLEEP,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_SYSTEM_WAKE, 
    KC_TRANSPARENT, RGB_HUI,        RGB_VAI,        RGB_SAI,        RGB_SPI,        TOGGLE_LAYER_COLOR,KC_TRANSPARENT,                                 KC_TRANSPARENT, LCTL(LSFT(KC_S)),LGUI(LSFT(KC_N)),KC_TRANSPARENT, KC_TRANSPARENT, LCTL(LSFT(KC_H)),KC_TRANSPARENT, 
    KC_TRANSPARENT, RGB_HUD,        RGB_VAD,        RGB_SAD,        RGB_SPD,        RGB_MOD,        KC_TRANSPARENT,                                                                 KC_TRANSPARENT, TD(DANCE_10),   KC_AUDIO_VOL_DOWN,KC_AUDIO_VOL_UP,TD(DANCE_11),   KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, RGB_TOG,                                        KC_TRANSPARENT, LGUI(LSFT(KC_H)),ST_MACRO_6,     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_AUDIO_MUTE,  KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_MEDIA_STOP,  KC_MEDIA_PLAY_PAUSE
  ),
  [6] = LAYOUT_moonlander(
    KC_ASTG,        KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, DYN_REC_START1, DYN_REC_STOP,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_PAUSE,       KC_SCROLLLOCK,  KC_CAPSLOCK,    TD(DANCE_12),   CAPS_WORD,      KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_F11,         KC_F5,          KC_F4,          KC_F3,          KC_F2,          KC_NO,          
    KC_TRANSPARENT, KC_F1,          MT(MOD_LALT, KC_F2),MT(MOD_LCTL, KC_F3),MT(MOD_LSFT, KC_F4),KC_F11,         KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_F12,         MT(MOD_RSFT, KC_F7),MT(MOD_RCTL, KC_F8),MT(MOD_LALT, KC_F9),KC_F10,         KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, TD(DANCE_13),   KC_NO,                                          KC_F1,          KC_F6,          KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_QUOTE), KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_APPLICATION, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [7] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, DYN_REC_START1,                                 DYN_REC_START2, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_Y,           KC_TRANSPARENT, DYN_REC_STOP,                                   DYN_REC_STOP,   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_7,     ST_MACRO_8,     KC_TRANSPARENT, DYN_MACRO_PLAY1,                                                                DYN_MACRO_PLAY2,KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 LALT(LSFT(KC_F)),KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, LCTL(KC_SLASH),                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [8] = LAYOUT_moonlander(
    KC_ESCAPE,      KC_1,           KC_2,           KC_3,           KC_4,           KC_5,           TO(0),                                          KC_TRANSPARENT, KC_6,           KC_7,           KC_8,           KC_9,           KC_0,           KC_F11,         
    KC_TRANSPARENT, KC_TRANSPARENT, KC_W,           KC_E,           KC_R,           KC_T,           KC_NO,                                          KC_TRANSPARENT, KC_Y,           KC_U,           KC_I,           KC_O,           KC_P,           KC_F12,         
    KC_LCTRL,       KC_A,           KC_S,           KC_D,           KC_F,           KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_H,           KC_J,           KC_K,           KC_L,           KC_SCOLON,      KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_Z,           KC_X,           KC_C,           KC_V,           KC_B,                                           KC_N,           KC_M,           KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_NO,          KC_TRANSPARENT, KC_TRANSPARENT, KC_LALT,        KC_ESCAPE,      KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_SPACE,       KC_MS_BTN1,     KC_MS_BTN2,                     KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [9] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_9,     ST_MACRO_10,    KC_TRANSPARENT, KC_NO,                                          KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, ST_MACRO_11,    ST_MACRO_12,    ST_MACRO_13,    KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    TO(0),          KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [10] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SCOLON,      KC_Y,           KC_U,           KC_L,           KC_J,           KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_B,           KC_P,           KC_F,           KC_W,           KC_Q,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_O,           KC_I,           KC_E,           KC_N,           KC_M,           KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_G,           KC_T,           KC_S,           KC_R,           KC_A,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_SLASH,       KC_DOT,         KC_COMMA,       KC_H,           KC_K,                                           KC_V,           KC_D,           KC_C,           KC_X,           KC_Z,           KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
  [11] = LAYOUT_moonlander(
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, TD(DANCE_14),   KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                                                                                                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT, 
    KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT,                 KC_TRANSPARENT, KC_TRANSPARENT, KC_TRANSPARENT
  ),
};

extern rgb_config_t rgb_matrix_config;

void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}

const uint8_t PROGMEM ledmap[][DRIVER_LED_TOTAL][3] = {
    [0] = { {0,0,255}, {0,0,255}, {132,234,219}, {0,0,255}, {0,0,0}, {172,36,7}, {0,0,255}, {0,0,255}, {0,0,255}, {172,36,7}, {172,36,7}, {0,0,255}, {0,0,255}, {0,0,255}, {172,36,7}, {172,36,7}, {0,0,255}, {0,0,255}, {0,0,255}, {172,36,7}, {172,36,7}, {0,0,255}, {0,0,255}, {0,0,255}, {22,255,255}, {172,36,7}, {0,0,255}, {0,0,255}, {0,0,255}, {187,249,240}, {0,31,8}, {172,36,7}, {4,237,221}, {52,255,255}, {0,0,255}, {132,234,219}, {172,36,7}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {172,36,7}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {172,36,7}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {172,36,7}, {0,0,255}, {0,0,255}, {0,0,255}, {0,0,255}, {172,36,7}, {0,0,255}, {0,0,255}, {0,0,255}, {159,255,255}, {172,36,7}, {0,0,255}, {0,0,255}, {0,0,255}, {172,36,7}, {172,36,7}, {172,36,7}, {88,255,255}, {193,255,255}, {0,31,8}, {132,234,219} },

    [1] = { {0,31,8}, {0,0,0}, {0,31,8}, {0,31,8}, {0,31,8}, {0,31,8}, {0,235,245}, {0,235,245}, {0,31,8}, {0,31,8}, {0,31,8}, {0,235,245}, {0,235,245}, {0,235,245}, {0,31,8}, {0,31,8}, {0,235,245}, {0,235,245}, {0,31,8}, {0,31,8}, {0,31,8}, {0,235,245}, {0,235,245}, {0,235,245}, {0,31,8}, {0,31,8}, {0,235,245}, {0,235,245}, {0,235,245}, {0,31,8}, {0,31,8}, {0,31,8}, {0,235,245}, {0,235,245}, {0,31,8}, {0,31,8}, {0,31,8}, {0,0,0}, {0,31,8}, {0,0,0}, {0,31,8}, {0,31,8}, {0,235,245}, {0,235,245}, {0,235,245}, {0,31,8}, {0,31,8}, {0,235,245}, {0,235,245}, {0,235,245}, {0,31,8}, {0,31,8}, {0,235,245}, {0,235,245}, {0,235,245}, {0,31,8}, {0,31,8}, {0,235,245}, {0,235,245}, {0,235,245}, {0,235,245}, {0,31,8}, {0,235,245}, {0,235,245}, {0,235,245}, {0,31,8}, {0,0,0}, {0,31,8}, {0,255,255}, {0,255,255}, {0,31,8}, {0,31,8} },

    [2] = { {0,0,0}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0}, {0,0,0}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0}, {0,0,0}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0}, {0,0,0}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0}, {0,0,0}, {88,255,255}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {88,255,255}, {88,255,255}, {0,0,0}, {88,255,255}, {0,0,0}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0}, {0,0,0}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0}, {0,0,0}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0}, {0,0,0}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0}, {0,0,0}, {88,255,255}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0}, {88,255,255}, {88,255,255}, {88,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {88,255,255}, {88,255,255}, {0,0,0}, {0,0,0} },

    [3] = { {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223}, {44,244,223} },

    [4] = { {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {18,218,200}, {216,242,216}, {216,242,216}, {216,242,216}, {18,218,200}, {18,218,200}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {18,218,200}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216}, {216,242,216} },

    [5] = { {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255}, {22,255,255} },

    [6] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {159,255,255}, {159,255,255}, {112,250,114}, {0,0,0}, {0,0,0}, {159,255,255}, {159,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {159,255,255}, {159,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {159,255,255}, {159,255,255}, {159,255,255}, {159,255,255}, {0,0,0}, {159,255,255}, {112,250,114}, {159,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {159,255,255}, {159,255,255}, {0,0,0}, {0,0,0}, {112,250,114}, {159,255,255}, {159,255,255}, {0,0,0}, {112,250,114}, {0,0,0}, {159,255,255}, {159,255,255}, {0,0,0}, {112,250,114}, {0,0,0}, {159,255,255}, {159,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {159,255,255}, {159,255,255}, {0,0,0}, {112,250,114}, {159,255,255}, {159,255,255}, {159,255,255}, {159,255,255}, {159,255,255}, {159,255,255}, {159,255,255}, {112,250,114}, {159,255,255}, {0,0,0}, {0,0,0}, {0,0,0}, {112,250,114}, {0,0,0}, {0,0,0}, {0,0,0} },

    [7] = { {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245}, {112,162,245} },

    [8] = { {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,218,204}, {187,218,204}, {187,218,204}, {187,249,240}, {187,249,240}, {187,249,240}, {187,218,204}, {112,213,219}, {187,218,204}, {187,249,240}, {187,218,204}, {112,213,219}, {112,213,219}, {187,249,240}, {187,249,240}, {187,218,204}, {187,218,204}, {112,213,219}, {187,218,204}, {187,249,240}, {187,249,240}, {187,249,240}, {187,218,204}, {187,249,240}, {187,249,240}, {187,249,240}, {187,218,204}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,218,204}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240}, {187,249,240} },

    [9] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0} },

    [10] = { {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {27,218,204}, {40,218,204}, {3,218,204}, {0,0,0}, {0,0,0}, {27,218,204}, {40,218,204}, {3,218,204}, {0,0,0}, {0,0,0}, {27,218,204}, {40,218,204}, {3,218,204}, {0,0,0}, {0,0,0}, {27,218,204}, {40,218,204}, {3,218,204}, {3,218,204}, {0,0,0}, {27,218,204}, {40,218,204}, {3,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {3,218,204}, {3,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {0,0,0}, {27,218,204}, {40,218,204}, {3,218,204}, {0,0,0}, {0,0,0}, {27,218,204}, {40,218,204}, {3,218,204}, {0,0,0}, {0,0,0}, {27,218,204}, {40,218,204}, {3,218,204}, {0,0,0}, {0,0,0}, {27,218,204}, {40,218,204}, {3,218,204}, {3,218,204}, {0,0,0}, {27,218,204}, {40,218,204}, {3,218,204}, {0,0,0}, {0,0,0}, {0,0,0}, {3,218,204}, {3,218,204}, {0,0,0}, {0,0,0} },

};

void set_layer_color(int layer) {
  for (int i = 0; i < DRIVER_LED_TOTAL; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color( i, 0, 0, 0 );
    } else {
        RGB rgb = hsv_to_rgb( hsv );
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color( i, f * rgb.r, f * rgb.g, f * rgb.b );
    }
  }
}

void rgb_matrix_indicators_user(void) {
  if (keyboard_config.disable_layer_led) { return; }
  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
    case 4:
      set_layer_color(4);
      break;
    case 5:
      set_layer_color(5);
      break;
    case 6:
      set_layer_color(6);
      break;
    case 7:
      set_layer_color(7);
      break;
    case 8:
      set_layer_color(8);
      break;
    case 9:
      set_layer_color(9);
      break;
    case 10:
      set_layer_color(10);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LALT(SS_TAP(X_GRAVE)));

    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_GRAVE)) SS_DELAY(100) SS_TAP(X_A));

    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_GRAVE)) SS_DELAY(100) SS_TAP(X_O));

    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_C));

    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W)) SS_DELAY(100) SS_TAP(X_H));

    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_W)) SS_DELAY(100) SS_TAP(X_L));

    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_LCTRL)));

    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_S));

    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_SPACE) SS_DELAY(100) SS_TAP(X_F));

    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_B) SS_DELAY(100) SS_TAP(X_H) SS_DELAY(100) SS_TAP(X_P) SS_DELAY(100) SS_TAP(X_E) SS_DELAY(100) SS_TAP(X_TAB));

    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_C) SS_DELAY(100) SS_TAP(X_L) SS_DELAY(100) SS_TAP(X_A) SS_DELAY(100) SS_TAP(X_S) SS_DELAY(100) SS_TAP(X_S));

    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_H)) SS_DELAY(100) SS_LSFT(SS_TAP(X_P)) SS_DELAY(100) SS_TAP(X_P) SS_DELAY(100) SS_TAP(X_L)  SS_DELAY(100) SS_TAP(X_ENTER));

    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_2)) SS_DELAY(100) SS_TAP(X_7) SS_DELAY(100) SS_TAP(X_3) SS_DELAY(100) SS_TAP(X_8));

    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_T) SS_DELAY(100) SS_TAP(X_T) SS_DELAY(100) SS_LSFT(SS_TAP(X_M)) SS_DELAY(100) SS_LSFT(SS_TAP(X_H)));

    }
    break;
    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}

typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[15];

uint8_t dance_step(qk_tap_dance_state_t *state);

uint8_t dance_step(qk_tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(qk_tap_dance_state_t *state, void *user_data);
void dance_0_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_0_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_0(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_V);
        tap_code16(KC_V);
        tap_code16(KC_V);
    }
    if(state->count > 3) {
        tap_code16(KC_V);
    }
}

void dance_0_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_V); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_V)); break;
        case DOUBLE_TAP: register_code16(KC_V); register_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_V); register_code16(KC_V);
    }
}

void dance_0_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_V); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_V)); break;
        case DOUBLE_TAP: unregister_code16(KC_V); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_V); break;
    }
    dance_state[0].step = 0;
}
void on_dance_1(qk_tap_dance_state_t *state, void *user_data);
void dance_1_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_1_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_1(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_O);
        tap_code16(KC_O);
        tap_code16(KC_O);
    }
    if(state->count > 3) {
        tap_code16(KC_O);
    }
}

void dance_1_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[1].step = dance_step(state);
    switch (dance_state[1].step) {
        case SINGLE_TAP: register_code16(KC_O); break;
        case DOUBLE_TAP: register_code16(KC_O); register_code16(KC_O); break;
        case DOUBLE_HOLD: register_code16(KC_RGUI); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_O); register_code16(KC_O);
    }
}

void dance_1_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[1].step) {
        case SINGLE_TAP: unregister_code16(KC_O); break;
        case DOUBLE_TAP: unregister_code16(KC_O); break;
        case DOUBLE_HOLD: unregister_code16(KC_RGUI); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_O); break;
    }
    dance_state[1].step = 0;
}
void on_dance_2(qk_tap_dance_state_t *state, void *user_data);
void dance_2_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_2_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_2(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT);
    }
}

void dance_2_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[2].step = dance_step(state);
    switch (dance_state[2].step) {
        case SINGLE_TAP: register_code16(KC_LEFT); break;
        case DOUBLE_TAP: register_code16(KC_LEFT); register_code16(KC_LEFT); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_LEFT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT); register_code16(KC_LEFT);
    }
}

void dance_2_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[2].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_LEFT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT); break;
    }
    dance_state[2].step = 0;
}
void on_dance_3(qk_tap_dance_state_t *state, void *user_data);
void dance_3_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_3_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_3(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
        tap_code16(KC_DOWN);
    }
    if(state->count > 3) {
        tap_code16(KC_DOWN);
    }
}

void dance_3_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[3].step = dance_step(state);
    switch (dance_state[3].step) {
        case SINGLE_TAP: register_code16(KC_DOWN); break;
        case DOUBLE_TAP: register_code16(KC_DOWN); register_code16(KC_DOWN); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_DOWN)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DOWN); register_code16(KC_DOWN);
    }
}

void dance_3_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[3].step) {
        case SINGLE_TAP: unregister_code16(KC_DOWN); break;
        case DOUBLE_TAP: unregister_code16(KC_DOWN); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_DOWN)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DOWN); break;
    }
    dance_state[3].step = 0;
}
void on_dance_4(qk_tap_dance_state_t *state, void *user_data);
void dance_4_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_4_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_4(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_UP);
        tap_code16(KC_UP);
        tap_code16(KC_UP);
    }
    if(state->count > 3) {
        tap_code16(KC_UP);
    }
}

void dance_4_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[4].step = dance_step(state);
    switch (dance_state[4].step) {
        case SINGLE_TAP: register_code16(KC_UP); break;
        case DOUBLE_TAP: register_code16(KC_UP); register_code16(KC_UP); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_UP)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_UP); register_code16(KC_UP);
    }
}

void dance_4_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[4].step) {
        case SINGLE_TAP: unregister_code16(KC_UP); break;
        case DOUBLE_TAP: unregister_code16(KC_UP); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_UP)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_UP); break;
    }
    dance_state[4].step = 0;
}
void on_dance_5(qk_tap_dance_state_t *state, void *user_data);
void dance_5_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_5_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_5(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT);
    }
}

void dance_5_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[5].step = dance_step(state);
    switch (dance_state[5].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT); break;
        case DOUBLE_TAP: register_code16(KC_RIGHT); register_code16(KC_RIGHT); break;
        case DOUBLE_HOLD: register_code16(LGUI(KC_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
    }
}

void dance_5_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[5].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
        case DOUBLE_TAP: unregister_code16(KC_RIGHT); break;
        case DOUBLE_HOLD: unregister_code16(LGUI(KC_RIGHT)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    }
    dance_state[5].step = 0;
}
void on_dance_6(qk_tap_dance_state_t *state, void *user_data);
void dance_6_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_6_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_6(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
        tap_code16(KC_HOME);
    }
    if(state->count > 3) {
        tap_code16(KC_HOME);
    }
}

void dance_6_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[6].step = dance_step(state);
    switch (dance_state[6].step) {
        case SINGLE_TAP: register_code16(KC_HOME); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_HOME)); break;
        case DOUBLE_TAP: register_code16(KC_HOME); register_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_HOME); register_code16(KC_HOME);
    }
}

void dance_6_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[6].step) {
        case SINGLE_TAP: unregister_code16(KC_HOME); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_HOME)); break;
        case DOUBLE_TAP: unregister_code16(KC_HOME); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_HOME); break;
    }
    dance_state[6].step = 0;
}
void on_dance_7(qk_tap_dance_state_t *state, void *user_data);
void dance_7_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_7_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_7(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_END);
        tap_code16(KC_END);
        tap_code16(KC_END);
    }
    if(state->count > 3) {
        tap_code16(KC_END);
    }
}

void dance_7_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[7].step = dance_step(state);
    switch (dance_state[7].step) {
        case SINGLE_TAP: register_code16(KC_END); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_END)); break;
        case DOUBLE_TAP: register_code16(KC_END); register_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_END); register_code16(KC_END);
    }
}

void dance_7_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[7].step) {
        case SINGLE_TAP: unregister_code16(KC_END); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_END)); break;
        case DOUBLE_TAP: unregister_code16(KC_END); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_END); break;
    }
    dance_state[7].step = 0;
}
void on_dance_8(qk_tap_dance_state_t *state, void *user_data);
void dance_8_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_8_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_8(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
        tap_code16(KC_LEFT);
    }
    if(state->count > 3) {
        tap_code16(KC_LEFT);
    }
}

void dance_8_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[8].step = dance_step(state);
    switch (dance_state[8].step) {
        case SINGLE_TAP: register_code16(KC_LEFT); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_LEFT)); break;
        case DOUBLE_TAP: register_code16(KC_LEFT); register_code16(KC_LEFT); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_LEFT))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_LEFT); register_code16(KC_LEFT);
    }
}

void dance_8_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[8].step) {
        case SINGLE_TAP: unregister_code16(KC_LEFT); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_LEFT)); break;
        case DOUBLE_TAP: unregister_code16(KC_LEFT); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_LEFT))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_LEFT); break;
    }
    dance_state[8].step = 0;
}
void on_dance_9(qk_tap_dance_state_t *state, void *user_data);
void dance_9_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_9_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_9(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
        tap_code16(KC_RIGHT);
    }
    if(state->count > 3) {
        tap_code16(KC_RIGHT);
    }
}

void dance_9_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[9].step = dance_step(state);
    switch (dance_state[9].step) {
        case SINGLE_TAP: register_code16(KC_RIGHT); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_RIGHT)); break;
        case DOUBLE_TAP: register_code16(KC_RIGHT); register_code16(KC_RIGHT); break;
        case DOUBLE_HOLD: register_code16(LCTL(LSFT(KC_RIGHT))); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_RIGHT); register_code16(KC_RIGHT);
    }
}

void dance_9_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[9].step) {
        case SINGLE_TAP: unregister_code16(KC_RIGHT); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_RIGHT)); break;
        case DOUBLE_TAP: unregister_code16(KC_RIGHT); break;
        case DOUBLE_HOLD: unregister_code16(LCTL(LSFT(KC_RIGHT))); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_RIGHT); break;
    }
    dance_state[9].step = 0;
}
void on_dance_10(qk_tap_dance_state_t *state, void *user_data);
void dance_10_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_10_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_10(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_REWIND);
        tap_code16(KC_MEDIA_REWIND);
        tap_code16(KC_MEDIA_REWIND);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_REWIND);
    }
}

void dance_10_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[10].step = dance_step(state);
    switch (dance_state[10].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_REWIND); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_REWIND); register_code16(KC_MEDIA_REWIND); break;
        case DOUBLE_HOLD: register_code16(KC_MEDIA_PREV_TRACK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_REWIND); register_code16(KC_MEDIA_REWIND);
    }
}

void dance_10_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[10].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_REWIND); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_REWIND); break;
        case DOUBLE_HOLD: unregister_code16(KC_MEDIA_PREV_TRACK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_REWIND); break;
    }
    dance_state[10].step = 0;
}
void on_dance_11(qk_tap_dance_state_t *state, void *user_data);
void dance_11_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_11_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_11(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_MEDIA_FAST_FORWARD);
        tap_code16(KC_MEDIA_FAST_FORWARD);
        tap_code16(KC_MEDIA_FAST_FORWARD);
    }
    if(state->count > 3) {
        tap_code16(KC_MEDIA_FAST_FORWARD);
    }
}

void dance_11_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[11].step = dance_step(state);
    switch (dance_state[11].step) {
        case SINGLE_TAP: register_code16(KC_MEDIA_FAST_FORWARD); break;
        case DOUBLE_TAP: register_code16(KC_MEDIA_FAST_FORWARD); register_code16(KC_MEDIA_FAST_FORWARD); break;
        case DOUBLE_HOLD: register_code16(KC_MEDIA_NEXT_TRACK); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_MEDIA_FAST_FORWARD); register_code16(KC_MEDIA_FAST_FORWARD);
    }
}

void dance_11_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[11].step) {
        case SINGLE_TAP: unregister_code16(KC_MEDIA_FAST_FORWARD); break;
        case DOUBLE_TAP: unregister_code16(KC_MEDIA_FAST_FORWARD); break;
        case DOUBLE_HOLD: unregister_code16(KC_MEDIA_NEXT_TRACK); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_MEDIA_FAST_FORWARD); break;
    }
    dance_state[11].step = 0;
}
void on_dance_12(qk_tap_dance_state_t *state, void *user_data);
void dance_12_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_12_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_12(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
        tap_code16(KC_PSCREEN);
    }
    if(state->count > 3) {
        tap_code16(KC_PSCREEN);
    }
}

void dance_12_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[12].step = dance_step(state);
    switch (dance_state[12].step) {
        case SINGLE_TAP: register_code16(KC_PSCREEN); break;
        case SINGLE_HOLD: register_code16(LSFT(KC_PSCREEN)); break;
        case DOUBLE_TAP: register_code16(KC_PSCREEN); register_code16(KC_PSCREEN); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_PSCREEN); register_code16(KC_PSCREEN);
    }
}

void dance_12_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[12].step) {
        case SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
        case SINGLE_HOLD: unregister_code16(LSFT(KC_PSCREEN)); break;
        case DOUBLE_TAP: unregister_code16(KC_PSCREEN); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_PSCREEN); break;
    }
    dance_state[12].step = 0;
}
void on_dance_13(qk_tap_dance_state_t *state, void *user_data);
void dance_13_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_13_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_13(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F5);
        tap_code16(KC_F5);
        tap_code16(KC_F5);
    }
    if(state->count > 3) {
        tap_code16(KC_F5);
    }
}

void dance_13_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[13].step = dance_step(state);
    switch (dance_state[13].step) {
        case SINGLE_TAP: register_code16(KC_F5); break;
        case SINGLE_HOLD: register_code16(LCTL(LSFT(KC_F5))); break;
        case DOUBLE_TAP: register_code16(LCTL(KC_F5)); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F5); register_code16(KC_F5);
    }
}

void dance_13_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[13].step) {
        case SINGLE_TAP: unregister_code16(KC_F5); break;
        case SINGLE_HOLD: unregister_code16(LCTL(LSFT(KC_F5))); break;
        case DOUBLE_TAP: unregister_code16(LCTL(KC_F5)); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F5); break;
    }
    dance_state[13].step = 0;
}
void on_dance_14(qk_tap_dance_state_t *state, void *user_data);
void dance_14_finished(qk_tap_dance_state_t *state, void *user_data);
void dance_14_reset(qk_tap_dance_state_t *state, void *user_data);

void on_dance_14(qk_tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_F12);
        tap_code16(KC_F12);
        tap_code16(KC_F12);
    }
    if(state->count > 3) {
        tap_code16(KC_F12);
    }
}

void dance_14_finished(qk_tap_dance_state_t *state, void *user_data) {
    dance_state[14].step = dance_step(state);
    switch (dance_state[14].step) {
        case SINGLE_TAP: register_code16(KC_F12); break;
        case SINGLE_HOLD: register_code16(LCTL(KC_F12)); break;
        case DOUBLE_TAP: register_code16(KC_F12); register_code16(KC_F12); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_F12); register_code16(KC_F12);
    }
}

void dance_14_reset(qk_tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[14].step) {
        case SINGLE_TAP: unregister_code16(KC_F12); break;
        case SINGLE_HOLD: unregister_code16(LCTL(KC_F12)); break;
        case DOUBLE_TAP: unregister_code16(KC_F12); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_F12); break;
    }
    dance_state[14].step = 0;
}

qk_tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
        [DANCE_1] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_1, dance_1_finished, dance_1_reset),
        [DANCE_2] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_2, dance_2_finished, dance_2_reset),
        [DANCE_3] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_3, dance_3_finished, dance_3_reset),
        [DANCE_4] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_4, dance_4_finished, dance_4_reset),
        [DANCE_5] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_5, dance_5_finished, dance_5_reset),
        [DANCE_6] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_6, dance_6_finished, dance_6_reset),
        [DANCE_7] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_7, dance_7_finished, dance_7_reset),
        [DANCE_8] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_8, dance_8_finished, dance_8_reset),
        [DANCE_9] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_9, dance_9_finished, dance_9_reset),
        [DANCE_10] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_10, dance_10_finished, dance_10_reset),
        [DANCE_11] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_11, dance_11_finished, dance_11_reset),
        [DANCE_12] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_12, dance_12_finished, dance_12_reset),
        [DANCE_13] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_13, dance_13_finished, dance_13_reset),
        [DANCE_14] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_14, dance_14_finished, dance_14_reset),
};

