#include QMK_KEYBOARD_H

enum corne_layers {
    _DEFAULT,
    _BASIC,
    _STENO,
    _DATA,
    _EDIT,
    _PROGRAM,
    _SYMBOL,
    _MOUSE,
    _UTILITY,
    _NUMPAD,
    _TOUHOU,
};


enum custom_keycodes {
    SELECT = SAFE_RANGE,
    MUTE,
    CS_COLN,
    CS_UNDS,
    CS_PIPE,
    CS_LT,
    CS_GT,
    CS_PERC,
    CS_ASTR,
    CS_DLR,
    CS_AMPR,
    CS_CIRC,
    CS_EXLM,
    CS_TILD,
    CS_PLUS,
    CS_HASH,
    CS_SLSH,
    CS_EQL,

    CS_AT,
    CS_DQUO,
    CS_POUN,
    CS_BSLS,
    
    CS_MINS,
    CS_DOT,
    CS_COMM,
    CS_QUES,
    CS_SCLN,
    
    COM_DOT,
    QUE_EXL,

    CS_END,
    CS_HOME,
    
    CM_MOUSE,

    REP,
    CS_TAB,

    NEWSENT,
    // OSM_LSFT,

    CM_ASTR,
    CM_COMM,
    CM_EQL,
    CM_PLUS,
    CM_UNDS,
    CM_MINS,
    CM_DOT,
    CM_COLON,
    CM_SLSH,
    
    ALTTAB,

    CS_VOLD,
    CS_VOLU,

    CS_VALU,
    CS_VALD,
    CS_RGBN,
    CS_RGBT,
    
    // Home block mods
    CS_RBRC,
    CS_RPRN,
    CS_LPRN,

    CLOCKUP,
    CLOCKDN,
    CLOCKNX,
    OLEDSAV,
};



// Home block mods
#define MT_S LGUI_T(KC_S)
#define MT_D LALT_T(KC_D)
#define MT_F LSFT_T(KC_F)
#define MT_C LCTL_T(KC_C)

#define MT_N RCTL_T(KC_N)
#define MT_J RSFT_T(KC_J)
#define MT_K LALT_T(KC_K)
#define MT_L RGUI_T(KC_L)

#define MT_RBRC RCTL_T(KC_RBRC)
#define MT_RPRN LT(0,CS_RPRN)
#define MT_LPRN LT(0,CS_LPRN)
#define MT_EXLM LT(0,CS_EXLM)



// Layer keys
#define CS_LT3 LT(_UTILITY,KC_ESC)
#define CS_LT2 LT(_EDIT,NEWSENT)
// #define CS_LT2 MO(_EDIT)
// #define CS_LT2 LT(_EDIT,OSM_LSFT)
#define CS_LT1 LT(_DATA,KC_SPC)

#define CS_RT1 LT(_SYMBOL,KC_BSPC)
#define CS_RT2 LT(_PROGRAM,REP)
#define CS_RT3 LT(_UTILITY,KC_SLSH)

#define CS_AL1 LT(_EDIT,KC_0)
#define CS_AL2 LT(_PROGRAM,KC_0)

// #define UNDO LCTL(KC_Z)
// #define REDO LCTL(KC_Y)
// #define CUT LCTL(KC_X)
// #define COPY LCTL(KC_C)
// #define PASTE LCTL(KC_V)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_DEFAULT] = LAYOUT( //0
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, CS_HASH,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LSFT,    KC_A,    MT_S,    MT_D,    MT_F,    KC_G,                         KC_H,    MT_J,    MT_K,    MT_L, KC_SCLN,  KC_TAB,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LCTL, CS_BSLS,    KC_Z,    KC_X,    MT_C,    KC_V,                         KC_B,    MT_N,    KC_M, COM_DOT, QUE_EXL, KC_QUOT,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                               CS_LT3,  CS_LT2,  CS_LT1,     CS_RT1,  CS_RT2,  CS_RT3
                                          //`--------------------------'  `--------------------------'
    ),

    [_BASIC] = LAYOUT( //1
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           KC_ESC,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                         KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, CS_HASH,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LSFT,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                         KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN,  KC_TAB,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LCTL, CS_BSLS,    KC_Z,    KC_X,    KC_C,    KC_V,                         KC_B,    KC_N,    KC_M, COM_DOT, QUE_EXL, KC_QUOT,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              _______, _______,  KC_SPC,    _______, _______, _______
                                          //`--------------------------'  `--------------------------'
    ),

    [_STENO] = LAYOUT( //2
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           KC_ESC,  STN_S1,  STN_TL,  STN_PL,  STN_HL, STN_ST1,                      STN_ST3,  STN_FR,  STN_PR,  STN_LR,  STN_TR,  STN_DR,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LSFT,  STN_S2,  STN_KL,  STN_WL,  STN_RL, STN_ST2,                      STN_ST4,  STN_RR,  STN_BR,  STN_GR,  STN_SR,  STN_ZR,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LCTL,  STN_N1,  STN_N2,  STN_N3,  STN_N4,  STN_N5,                       STN_N6,  STN_N7,  STN_N8,  STN_N9,  STN_NA,  KC_ENT,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                               STN_FN,   STN_A,   STN_O,      STN_E,   STN_U, STN_PWR
                                          //`--------------------------'  `--------------------------'
    ),
    
    [_DATA] = LAYOUT( //3
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           KC_TAB,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,                       CS_EQL,    KC_7,    KC_8,    KC_9, CS_UNDS,  KC_DEL,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LSFT, CS_CIRC, CS_PLUS, CS_MINS,  CS_EQL, CS_PIPE,                        CS_LT,    KC_1,    KC_2,    KC_3, CS_SCLN,  KC_TAB,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LCTL, CS_TILD, CS_ASTR,  CS_DOT, CS_COMM, CS_POUN,                        CS_GT,    KC_4,    KC_5,    KC_6, CS_QUES,  KC_ENT,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              _______, _______, _______,    KC_BSPC,  CS_AL1, CS_SLSH
                                          //`--------------------------'  `--------------------------'
    ),

    [_EDIT] = LAYOUT( //4
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           KC_TAB, KC_PAUS, CS_HOME,   KC_UP,  CS_END,  KC_ENT,                       CS_EQL, KC_RCBR, KC_LCBR, CS_CIRC, CS_UNDS,  KC_DEL,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LSFT, KC_PSCR, KC_LEFT, KC_DOWN, KC_RGHT,  KC_DEL,                        CS_LT, MT_RPRN, MT_LPRN, MT_EXLM, CS_SCLN,  KC_TAB,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LCTL, CS_BSLS, KC_PGUP, KC_PGDN,  KC_INS,  SELECT,                        CS_GT, MT_RBRC, KC_LBRC, CS_TILD, CS_QUES,  KC_ENT,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              _______, _______, _______,    _______,  CS_AL2,  KC_SPC
                                          //`--------------------------'  `--------------------------'
    ),

    [_SYMBOL] = LAYOUT( //6
      //,-----------------------------------------------------.                    ,---------------------------------------------------.
           KC_GRV, CS_PERC, CS_ASTR, CS_SLSH, CS_AMPR, CS_CIRC,                       CS_EQL, KC_RCBR, KC_LCBR, CS_CIRC, CS_UNDS,  KC_DEL,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LSFT, CS_PIPE,   CS_LT, CS_MINS,   CS_GT,  CS_EQL,                        CS_LT, KC_RPRN, KC_LPRN, CS_EXLM, CS_SCLN,  KC_TAB,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LCTL, CS_TILD, CS_COLN,  CS_DOT, CS_COMM,  CS_DLR,                        CS_GT, KC_RBRC, KC_LBRC, CS_TILD, CS_QUES,  KC_ENT,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              CS_UNDS, CS_BSLS,  KC_SPC,    _______, _______, _______
                                          //`--------------------------'  `--------------------------'
    ),

    [_PROGRAM] = LAYOUT( //5
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           KC_GRV, CS_PERC, CS_EXLM, CS_DQUO,  CS_DLR, CS_COLN,                       CS_EQL, KC_RCBR, KC_LCBR, CS_CIRC, CS_UNDS,  KC_DEL,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LSFT, CS_CIRC, CS_PLUS, CS_MINS,  CS_EQL, CS_PIPE,                        CS_LT, KC_RPRN, KC_LPRN, CS_EXLM, CS_SCLN,  KC_TAB,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LCTL, CS_TILD, CS_ASTR, CS_SLSH, CS_COLN, CS_AMPR,                        CS_GT, KC_RBRC, KC_LBRC, CS_TILD, CS_QUES,  KC_ENT,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              CS_UNDS, CS_SCLN,  KC_SPC,    _______, _______, _______
                                          //`--------------------------'  `--------------------------'
    ),

    [_MOUSE] = LAYOUT( //7
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           KC_ESC, XXXXXXX, KC_BTN4, KC_MS_U, KC_BTN5,  KC_TAB,                      _______, _______, _______, _______, _______, _______,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LSFT, XXXXXXX, KC_MS_L, KC_MS_D, KC_MS_R,  KC_DEL,                      _______, _______, _______, _______, _______, _______,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LCTL, KC_WH_L, KC_WH_U, KC_WH_D, KC_WH_R,  SELECT,                      _______, _______, _______, _______, _______, _______,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              KC_BTN3, KC_BTN2, KC_BTN1,    KC_ACL0, KC_ACL1, KC_ACL2
                                          //`--------------------------'  `--------------------------'
    ),

    [_UTILITY] = LAYOUT( //8
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
           ALTTAB, CLOCKUP, CS_VALD, CS_VOLU, CS_VALU, KC_SCRL,                      QK_BOOT,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_DEL,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LSFT, CLOCKDN, KC_MPRV, CS_VOLD, KC_MNXT, KC_CAPS,                       QK_RBT,   KC_F1,   KC_F2,   KC_F3,  KC_F11,  KC_TAB,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          KC_LCTL, CLOCKNX, OLEDSAV,    MUTE, CS_RGBN, CS_RGBT,                      DB_TOGG,   KC_F4,   KC_F5,   KC_F6,  KC_F12,  KC_ENT,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              KC_MSTP,    MUTE, KC_MPLY,    KC_MPLY,    MUTE, KC_MSTP
                                          //`--------------------------'  `--------------------------'
    ),

    [_NUMPAD] = LAYOUT( //9
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          _______, _______, _______, _______, _______, _______,                       KC_NUM,   KC_P7,   KC_P8,   KC_P9, KC_CIRC,  KC_DEL,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          _______, _______, _______, _______, _______, _______,                      KC_PLUS,   KC_P4,   KC_P5,   KC_P6, KC_ASTR,  KC_TAB,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          _______, _______, _______, _______, _______, _______,                      KC_MINS,   KC_P1,   KC_P2,   KC_P3, KC_UNDS,  KC_ENT,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              _______, _______, _______,    _______,   KC_P0, _______
                                          //`--------------------------'  `--------------------------'
    ),

    [_TOUHOU] = LAYOUT( //10
      //,-----------------------------------------------------.                    ,-----------------------------------------------------.
          _______, _______, _______,   KC_UP, _______, _______,                      _______, _______, _______, _______, _______,  KC_DEL,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          _______, _______, KC_LEFT, KC_DOWN, KC_RGHT, _______,                      _______,    KC_Z,    KC_X, _______, _______,  KC_TAB,
      //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
          _______, _______, _______, _______, _______, _______,                      _______, _______, _______, _______, _______,  KC_ENT,
      //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                              _______, _______, _______,    _______, _______, _______
                                          //`--------------------------'  `--------------------------'
    ),
};

#include "features/achordion.h"

//==============================================================================
// Variables
//==============================================================================

static uint8_t time_setting = 0;
static uint8_t min = 0;
static uint8_t hrs = 0;
static uint8_t sec = 0;

static bool wave_on = false;

uint16_t lastkey = KC_NO;
bool muted = false;




bool no_ctrl(void) {
    return !((get_mods() & MOD_BIT(KC_LCTL)) == MOD_BIT(KC_LCTL) || (get_mods() & MOD_BIT(KC_RCTL)) == MOD_BIT(KC_RCTL));
}

bool shifted(void) {
    return ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT));
}

//==============================================================================
// Timers
//==============================================================================

#define IDLE_TIMEOUT 10000

static bool alt_tab_active = false;
static bool oled_timeout = false;

void matrix_scan_user(void) {
    achordion_task();

    if (get_highest_layer(layer_state) == _NUMPAD) {
        if (last_input_activity_elapsed() > IDLE_TIMEOUT) {
            layer_off(_NUMPAD);
        }
    }
    if (get_highest_layer(layer_state) == _TOUHOU) {
        if (last_input_activity_elapsed() > 900000) { //15 minute time out
            layer_off(_TOUHOU);
        }
    }
    if (alt_tab_active) {
        if (IS_LAYER_OFF(_UTILITY)) {
            unregister_code(KC_LALT);
            alt_tab_active = false;
        }
    }
    if (last_input_activity_elapsed() > 15000) {
        time_setting = 0;
        oled_timeout = true;
    }
    else {
        oled_timeout = false;
    }
}

//==============================================================================
// Tap/hold
//==============================================================================

uint16_t get_quick_tap_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CS_LT3:
        case CS_LT2:
        case CS_LT1:

        case CS_RT1:
        case CS_RT2:
        case CS_RT3:
        
        case CS_AL1:
        case CS_AL2:
        
        case MT_S:
        case MT_D:
        case MT_F:
        case MT_C:
        case MT_N:
        case MT_J:
        case MT_K:
        case MT_L:
        case MT_RBRC:
        case MT_RPRN:
        case MT_LPRN:
        case MT_EXLM:
            return 0;
        default:
            return TAPPING_TERM;
    }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CS_LT3:
        case CS_LT1:
        case CS_RT1:
        case CS_RT2:
        case CS_RT3:
            return 150;
        case CS_LT2:
            return 75;
        default:
            return TAPPING_TERM;
    }
}

bool get_hold_on_other_key_press(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case CS_LT3:
        case CS_LT2:

        case CS_RT1:
        case CS_RT3:
 
        case CS_AL1:
        case CS_AL2:
            // Immediately select the hold action when another key is pressed.
            return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}


uint16_t achordion_timeout(uint16_t tap_hold_keycode) {
    switch (tap_hold_keycode) {
        case CS_LT3:
        case CS_LT2:
        case CS_LT1:
        case CS_RT1:
        case CS_RT3:
        case CS_AL1:
        case CS_AL2:
            return 0;
        default:
            return TAPPING_TERM;
    }
}

bool achordion_chord(uint16_t tap_hold_keycode, keyrecord_t* tap_hold_record,
                     uint16_t other_keycode, keyrecord_t* other_record) {
    switch (tap_hold_keycode) {
        case CS_RT2:
            return achordion_opposite_hands(tap_hold_record, other_record);
        default:
            return true;
    }
}

//==============================================================================
// Modifier+key overrides
//==============================================================================


// const key_override_t redo = ko_make_basic(MOD_MASK_CS, KC_Z, C(KC_Y));
// const key_override_t **key_overrides = (const key_override_t *[]){
//     &redo, // Shift + Undo   ->   Redo
//     NULL
// };


//==============================================================================
// Combos
//==============================================================================



enum combo_events {
    NOMODS,
    TOUHOU,
    STENO,
    MOUSE,
    NUMPAD,
    
    // LESSTHAN,
    // GREATERTHAN,
    AT,
    SLASH,

    // LEFTPAREN,
    // RIGHTPAREN,
    COLON,
    SEMICOLON,
    
    L_EXPONENT,
    L_ASTERISK,
    L_COMMA,
    L_PLUS,
    L_EQUALS,
    L_MINUS,
    L_UNDERSCORE,
    L_DOT,

    R_EXPONENT,
    R_ASTERISK,
    R_COMMA,
    R_PLUS,
    R_EQUALS,
    R_MINUS,
    R_UNDERSCORE,
    R_DOT,

    COMBO_LENGTH
};
uint16_t COMBO_LEN = COMBO_LENGTH;

const uint16_t PROGMEM nomods[]         = {KC_P, CS_HASH, COMBO_END};
const uint16_t PROGMEM touhou[]         = {KC_P, CS_HASH, KC_ESC, COMBO_END};
const uint16_t PROGMEM steno[]          = {KC_P, CS_HASH, KC_SCLN, KC_TAB, COMBO_END};
const uint16_t PROGMEM numpad[]         = {KC_O, KC_P, CS_HASH, COMBO_END};
const uint16_t PROGMEM mouse[]          = {KC_TAB, KC_QUOT, COMBO_END};

// const uint16_t PROGMEM leftparen[]      = {MT_S, KC_E, COMBO_END};
// const uint16_t PROGMEM rightparen[]     = {KC_E, MT_F, COMBO_END};
const uint16_t PROGMEM l_exponent[]     = {MT_S, KC_E, MT_F, COMBO_END};
const uint16_t PROGMEM l_asterisk[]     = {MT_D, MT_C, COMBO_END};
const uint16_t PROGMEM l_comma[]        = {MT_F, KC_V, COMBO_END};

const uint16_t PROGMEM l_equals[]       = {KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM l_plus[]         = {MT_D, MT_F, COMBO_END};
const uint16_t PROGMEM l_underscore[]   = {KC_X, MT_C, COMBO_END};
const uint16_t PROGMEM l_minus[]        = {MT_F, KC_G, COMBO_END};
const uint16_t PROGMEM l_dot[]          = {MT_C, KC_V, COMBO_END};

const uint16_t PROGMEM at[]             = {KC_R, KC_T, COMBO_END};
const uint16_t PROGMEM slash[]          = {KC_R, KC_G, COMBO_END};

// const uint16_t PROGMEM lessthan[]       = {MT_J, KC_I, COMBO_END};
// const uint16_t PROGMEM greaterthan[]    = {KC_I, MT_L, COMBO_END};
const uint16_t PROGMEM r_exponent[]     = {MT_J, KC_I, MT_L, COMBO_END};
const uint16_t PROGMEM r_asterisk[]     = {MT_N, MT_K, COMBO_END};
const uint16_t PROGMEM r_comma[]        = {KC_B, MT_J, COMBO_END};

const uint16_t PROGMEM r_equals[]       = {KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM r_plus[]         = {MT_J, MT_K, COMBO_END};
const uint16_t PROGMEM r_underscore[]   = {MT_N, KC_M, COMBO_END};
const uint16_t PROGMEM r_minus[]        = {KC_H, MT_J, COMBO_END};
const uint16_t PROGMEM r_dot[]          = {KC_B, MT_N, COMBO_END};

const uint16_t PROGMEM colon[]          = {KC_Y, KC_U, COMBO_END};
const uint16_t PROGMEM semicolon[]      = {KC_H, KC_U, COMBO_END};

combo_t key_combos[] = {
    [NOMODS]        = COMBO_ACTION(nomods),
    [TOUHOU]        = COMBO_ACTION(touhou),
    [STENO]         = COMBO_ACTION(steno),
    [NUMPAD]        = COMBO_ACTION(numpad),

    [MOUSE]         = COMBO(mouse,         CM_MOUSE),
    
    [L_ASTERISK]    = COMBO(l_asterisk,    CM_ASTR),
    [L_COMMA]       = COMBO(l_comma,       CM_COMM),
    [L_EQUALS]      = COMBO(l_equals,      CM_EQL),
    [L_PLUS]        = COMBO(l_plus,        CM_PLUS),
    [L_UNDERSCORE]  = COMBO(l_underscore,  CM_UNDS),
    [L_MINUS]       = COMBO(l_minus,       CM_MINS),
    [L_DOT]         = COMBO(l_dot,         CM_DOT),
    [R_ASTERISK]    = COMBO(r_asterisk,    CM_ASTR),
    [R_COMMA]       = COMBO(r_comma,       CM_COMM),
    [R_EQUALS]      = COMBO(r_equals,      CM_EQL),
    [R_PLUS]        = COMBO(r_plus,        CM_PLUS),
    [R_UNDERSCORE]  = COMBO(r_underscore,  CM_UNDS),
    [R_MINUS]       = COMBO(r_minus,       CM_MINS),
    [R_DOT]         = COMBO(r_dot,         CM_DOT),
    [COLON]         = COMBO(colon,         CM_COLON),

    // Basic key combos
    // [LEFTPAREN]     = COMBO(leftparen, KC_LPRN),
    // [RIGHTPAREN]    = COMBO(rightparen, KC_RPRN),
    [L_EXPONENT]    = COMBO(l_exponent, KC_CIRC),
    [AT]            = COMBO(at, S(KC_QUOT)),
    [SLASH]         = COMBO(slash, CM_SLSH),
    // [LESSTHAN]      = COMBO(lessthan, KC_LT),
    // [GREATERTHAN]   = COMBO(greaterthan, KC_GT),
    [R_EXPONENT]    = COMBO(r_exponent, KC_CIRC),
    [SEMICOLON]     = COMBO(semicolon, KC_SCLN),

};


void process_combo_event(uint16_t combo_index, bool pressed) {
    switch(combo_index) {
        case NOMODS:
            if (pressed) {
                if (layer_state_is(_BASIC) || layer_state_is(_TOUHOU)) {
                    layer_move(_DEFAULT);
                }
                else if (layer_state_is(_DEFAULT)) {
                    layer_move(_BASIC);
                }
            }
            break;
        case TOUHOU:
            if (pressed) {
                if (layer_state_is(_BASIC) || layer_state_is(_DEFAULT)) {
                    layer_move(_TOUHOU);
                }
                else if (layer_state_is(_TOUHOU)) {
                    layer_move(_DEFAULT);
                }
            }
            break;
        case NUMPAD:
            if (pressed) {
                if (layer_state_is(_BASIC) || layer_state_is(_DEFAULT)) {
                    layer_on(_NUMPAD);
                }
                else {
                    layer_off(_NUMPAD);
                }
            }
            break;
        case STENO:
            if (pressed) {
                if (layer_state_is(_BASIC) || layer_state_is(_DEFAULT)) {
                    layer_move(_STENO);
                }
                else if (layer_state_is(_STENO)) {
                    layer_move(_DEFAULT);
                }
            }
            break;
        case MOUSE:
            if (pressed) {
                
            }
            break;
    }
}

// 50ms default
uint16_t get_combo_term(uint16_t index, combo_t *combo) {
    switch (index) {
        case L_EXPONENT:
        case R_EXPONENT:
        case L_UNDERSCORE:
        case R_UNDERSCORE:
        case COLON:
        case AT:
            return 50;
            break;
        case MOUSE:
            return 100;
        default:
            return 30;
    }
}

bool get_combo_must_tap(uint16_t index, combo_t *combo) {
    switch (index) {
        case MOUSE:
            return false;
        default:
            return true;

    }
}

// bool get_combo_must_press_in_order(uint16_t combo_index, combo_t *combo) {
//     switch (combo->keycode) {
//         case REP:
//             return true;
//             break;
//         default:
//             return false;
//     }
// }

bool combo_should_trigger(uint16_t combo_index, combo_t *combo, uint16_t keycode, keyrecord_t *record) {
    switch (combo_index) {
        case NOMODS:
        case TOUHOU:
        case MOUSE:
        case STENO:
        case NUMPAD:
            return true;
            break;

        default:
            if (!(layer_state_is(_BASIC) || layer_state_is(_TOUHOU) || layer_state_is(_MOUSE) || layer_state_is(_STENO))) {
                return true;
            }
            break;
    }
    return false;
}





//==============================================================================
// Select word
//==============================================================================

enum { STATE_NONE, STATE_SELECTED, STATE_WORD, STATE_FIRST_LINE, STATE_LINE };
bool process_select_word(uint16_t keycode, keyrecord_t* record, uint16_t sel_keycode) {
    static uint8_t state = STATE_NONE;

    if (keycode == KC_LSFT || keycode == KC_RSFT || keycode == MO(2)) {
        return true;
    }

    if (keycode == sel_keycode && record->event.pressed) {  // On key press.
        const uint8_t mods = get_mods();
        const uint8_t all_mods = mods;
        if ((all_mods & MOD_MASK_SHIFT) == 0) {  // Select word.
            register_code(KC_LCTL);
            if (state == STATE_NONE) {
                SEND_STRING(SS_TAP(X_RGHT) SS_TAP(X_LEFT));
            }
            register_code(KC_LSFT);
            register_code(KC_RGHT);
            state = STATE_WORD;
        } else {  // Select line.
            if (state == STATE_NONE) {
                clear_mods();
                SEND_STRING(SS_TAP(X_HOME) SS_LSFT(SS_TAP(X_END)));
                set_mods(mods);
                state = STATE_FIRST_LINE;
            } else {
                register_code(KC_DOWN);
                state = STATE_LINE;
            }
        }
        return false;
    }

    // `sel_keycode` was released, or another key was pressed.
    switch (state) {
        case STATE_WORD:
            unregister_code(KC_RGHT);
            unregister_code(KC_LSFT);
            unregister_code(KC_LCTL);
            state = STATE_SELECTED;
            break;

        case STATE_FIRST_LINE:
            state = STATE_SELECTED;
            break;

        case STATE_LINE:
            unregister_code(KC_DOWN);
            state = STATE_SELECTED;
            break;

        case STATE_SELECTED:
        default:
        state = STATE_NONE;
    }
    return true;
}

//==============================================================================
// Deferred Executions
//==============================================================================

static bool VOLD_active = false;
static bool VOLU_active = false;
static deferred_token VOLD_token = INVALID_DEFERRED_TOKEN;
static deferred_token VOLU_token = INVALID_DEFERRED_TOKEN;

#define interval 15

static uint32_t VOLD_callback(uint32_t trigger_time, void* cb_arg) {
    if (!VOLD_active) {
        register_code16(KC_VOLD);
        VOLD_active = true;
    }
    else {
        unregister_code16(KC_VOLD);
        VOLD_active = false;
    }
    return interval;
}
static uint32_t VOLU_callback(uint32_t trigger_time, void* cb_arg) {
    if (!VOLU_active) {
        register_code16(KC_VOLU);
        VOLU_active = true;
    }
    else {
        unregister_code16(KC_VOLU);
        VOLU_active = false;
    }
    return interval * 1.5;
}

static void VOLD_start(void) {
    if (VOLD_token == INVALID_DEFERRED_TOKEN) {
        uint32_t delay = VOLD_callback(0, NULL);
        VOLD_token = defer_exec(delay, VOLD_callback, NULL);
    }
}
static void VOLU_start(void) {
    if (VOLU_token == INVALID_DEFERRED_TOKEN) {
        uint32_t delay = VOLU_callback(0, NULL);
        VOLU_token = defer_exec(delay, VOLU_callback, NULL);
    }
}

static void VOLD_stop(void) {
    if (VOLD_token != INVALID_DEFERRED_TOKEN) {
        cancel_deferred_exec(VOLD_token);
        VOLD_token = INVALID_DEFERRED_TOKEN;
        if (VOLD_active) {
            unregister_code16(KC_VOLD);
            VOLD_active = false;
        }
    }
}
static void VOLU_stop(void) {
    if (VOLU_token != INVALID_DEFERRED_TOKEN) {
        cancel_deferred_exec(VOLU_token);
        VOLU_token = INVALID_DEFERRED_TOKEN;
        if (VOLU_active) {
            unregister_code16(KC_VOLU);
            VOLU_active = false;
        }
    }
}

bool process_vol_repeat(uint16_t keycode, keyrecord_t* record) {
    if (keycode == CS_VOLD) {
        if (record->event.pressed) {
            muted = false;
            if (shifted()) {
                register_code16(KC_VOLD);
            }
            else {
                VOLD_start();
            }
        }
        else {
            VOLD_stop();
            unregister_code16(KC_VOLD);
        }
        return false;
    }
    if (keycode == CS_VOLU) {
        if (record->event.pressed) {
            muted = false;
            if (shifted()) {
                register_code16(KC_VOLU);
            }
            else {
                VOLU_start();
            }
        }
        else {
            VOLU_stop();
            unregister_code16(KC_VOLU);
        }
        return false;
    }
    return true;
}









uint32_t timer_callback(uint32_t trigger_time, void* cb_arg) {
    sec++;
    if (sec >= 60) {
        sec = 0;
        min++;
    }
    if (min >= 60) {
        min = 0;
        hrs++;
    }
    if (hrs >= 24) {
        hrs = 0;
    }
    return 1000;
}


bool process_clock(uint16_t keycode, keyrecord_t* record) {
    if (keycode == CLOCKUP) {
        if (record->event.pressed) {
            if (time_setting == 1) {
                if (hrs == 24) {
                    hrs = 0;
                } else {
                    hrs++;
                }
            }
            else if (time_setting == 2) {
                if (min == 60) {
                    min = 0;
                } else {
                    min++;
                }
            }
            else if (time_setting == 3) {
                if (sec == 60) {
                    sec = 0;
                } else {
                    sec++;
                }
            }
            // tick = timer_read();
        }
        return false;
    }
    if (keycode == CLOCKDN) {
        if (record->event.pressed) {
            if (time_setting == 1) {
                if (hrs == 0) {
                    hrs = 23;
                } else {
                    hrs--;
                }
            }
            else if (time_setting == 2) {
                if (min == 0) {
                    min = 59;
                } else {
                    min--;
                }
            }
            else if (time_setting == 3) {
                if (sec == 0) {
                    sec = 59;
                } else {
                    sec--;
                }
            }
            // tick = timer_read();
        }
        return false;
    }
    if (keycode == CLOCKNX) {
        if (record->event.pressed) {
            if (shifted()) {
                if (time_setting == 0) {
                    time_setting = 3;
                }
                else {
                    time_setting--;
                }
            }
            else {
                if (time_setting == 3) {
                    time_setting = 0;
                }
                else {
                    time_setting++;
                }
            }
        }
        return false;
    }
    return true;
}



void render_clock(uint8_t shift, uint8_t line) {
    // char time_str[11];
    char time_str[8];



    // time_str[8] = '\0';
    time_str[7] = '0' + sec % 10;
    time_str[6] = '0' + sec / 10;
    time_str[5] = ':';
    time_str[4] = '0' + min % 10;
    time_str[3] = '0' + min / 10;
    time_str[2] = ':';
    time_str[1] = '0' + hrs % 10;
    time_str[0] = '0' + hrs / 10;

    if (time_setting == 1) {
        oled_set_cursor(shift,line-1);
        oled_write_char(148,false);
        oled_write_char(149,false);
        oled_set_cursor(shift,line+1);
        oled_write_char(180,false);
        oled_write_char(181,false);
    }
    else if (time_setting == 2) {
        oled_set_cursor(shift+3,line-1);
        oled_write_char(148,false);
        oled_write_char(149,false);
        oled_set_cursor(shift+3,line+1);
        oled_write_char(180,false);
        oled_write_char(181,false);
    }
    else if (time_setting == 3) {
        oled_set_cursor(shift+6,line-1);
        oled_write_char(148,false);
        oled_write_char(149,false);
        oled_set_cursor(shift+6,line+1);
        oled_write_char(180,false);
        oled_write_char(181,false);
    }

    oled_set_cursor(shift,line);
    oled_write(time_str, false);
}








//==============================================================================
// Data Sync
//==============================================================================

#include "transactions.h"

typedef struct _master_to_slave_t {
    bool wave_on_sync :1;
    bool oled_timeout_sync :1;
} master_to_slave_t;

master_to_slave_t sync_data;

void user_config_sync_handler(uint8_t initiator2target_buffer_size, const void* initiator2target_buffer,
                      uint8_t target2initiator_buffer_size, void* target2initiator_buffer) {
    if (initiator2target_buffer_size == sizeof(master_to_slave_t)) {
        memcpy(&sync_data, initiator2target_buffer, initiator2target_buffer_size);
    }
}

//==============================================================================
// Events
//==============================================================================

bool process_record_user(uint16_t keycode, keyrecord_t* record) {
    if (!process_achordion(keycode, record)) { return false; }
    if (!process_select_word(keycode, record, SELECT)) { return false; }
    if (!process_vol_repeat(keycode, record)) { return false; }
    if (!process_clock(keycode, record)) { return false; }
    
    switch (keycode) {

        case CS_RT2:
        {
            if (!record->tap.count && record->event.pressed) { // Intercept holds only
                layer_on(_PROGRAM);
            } else { // On keyup
                layer_off(_PROGRAM);
            }
            if (record->tap.count && record->event.pressed) { // Intercept taps
                register_code(lastkey);
            } else {
                unregister_code(lastkey);
            }
            return false; // Return true for normal processing of key
        }

        case CS_LT2:
        {
            if (!record->tap.count && record->event.pressed) {
                layer_on(_EDIT);
            } else { // On keyup
                layer_off(_EDIT);
            }

            // if (record->tap.count && record->event.pressed) { // OSM Shift
            //     add_oneshot_mods(MOD_BIT(KC_LSFT));
            // }
            if (record->tap.count && record->event.pressed) { // New sentence
               SEND_STRING(". ");
               add_oneshot_mods(MOD_BIT(KC_LSFT));
            }

            return false; // Return true for normal processing of key
        }

        // =====================================================================
        // Misc control
        // =====================================================================

        case MUTE:
            if (record->event.pressed) {
                register_code(KC_MUTE);
                muted = !muted;
            } else {
                unregister_code(KC_MUTE);
            }
            break;

        case CS_VALU:
            if (record->event.pressed) {
                rgb_matrix_increase_val_noeeprom();
            }
            break;

        case CS_VALD:
            if (record->event.pressed) {
                rgb_matrix_decrease_val_noeeprom();
            }
            break;

        case CS_RGBN:
            if (record->event.pressed) {
                static uint8_t set_mode = 2;
                if (shifted()) {
                    if (set_mode < 6) {
                        set_mode += 1;
                    } else {
                        set_mode = 2;
                    }
                } else {
                    if (set_mode > 2) {
                        set_mode -= 1;
                    } else {
                        set_mode = 6;
                    }
                }
                rgb_matrix_mode(set_mode);
            }
            break;

        case CS_RGBT:
            if (record->event.pressed) {
                rgb_matrix_toggle_noeeprom();
            }
            break;

        case ALTTAB:
            if (!alt_tab_active) {
                alt_tab_active = true;
                register_code(KC_LALT);
            }
            // alt_tab_timer = timer_read();
            if (record->event.pressed) {
                tap_code16(KC_TAB);
            }
            break;

        case OLEDSAV:
            if (record->event.pressed) {
                wave_on = !wave_on;
                if (!wave_on) {
                    oled_clear();
                }
            }
            break;

        // =====================================================================
        // Combos
        // =====================================================================

        case CM_MOUSE:
            if (record->event.pressed) {
                layer_on(_MOUSE);
            } else {
                layer_off(_MOUSE);
            }
            break;

        // Combo actions
        case CM_ASTR:
            if (record->event.pressed) {
                tap_code16(KC_ASTR);
            }
            break;
        case CM_COMM:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_COMM);
                set_mods(mods);
            }
            break;
        case CM_EQL:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_EQL);
                set_mods(mods);
            }
            break;
        case CM_PLUS:
            if (record->event.pressed) {
                tap_code16(KC_PLUS);
            }
            break;
        case CM_UNDS:
            if (record->event.pressed) {
                tap_code16(KC_UNDS);
            }
            break;
        case CM_MINS:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_MINS);
                set_mods(mods);
            }
            break;
        case CM_DOT:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_DOT);
                set_mods(mods);
            }
            break;
        case CM_COLON:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_COLN);
                set_mods(mods);
            }
            break;
        case CM_SLSH:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_SLSH);
                set_mods(mods);
            }
            break;

        // =====================================================================
        // Edit layer mod-taps
        // =====================================================================

        // Edit layer mod-taps
        case MT_RPRN:
        {
            if (!record->tap.count && record->event.pressed) { // Intercept holds only
                register_mods(MOD_MASK_SHIFT);
            } else { // On keyup
                unregister_mods(MOD_MASK_SHIFT);
            }
            if (record->tap.count && record->event.pressed) { // Intercept taps
                tap_code16(KC_RPRN);
                unregister_mods(MOD_MASK_SHIFT);
            } else {
                /* intentionally empty */;
            }
            return false; // Return true for normal processing of key
        }
            break;

        case MT_LPRN:
        {
            if (!record->tap.count && record->event.pressed) { // Intercept holds only
                register_mods(MOD_BIT(KC_LALT));
            } else { // On keyup
                unregister_mods(MOD_BIT(KC_LALT));
            }
            if (record->tap.count && record->event.pressed) { // Intercept taps
                tap_code16(KC_LPRN);
                unregister_mods(MOD_MASK_SHIFT);
            } else {
                /* intentionally empty */;
            }
            return false; // Return true for normal processing of key
        }
            break;

        case MT_EXLM:
        {
            if (!record->tap.count && record->event.pressed) { // Intercept holds only
                register_mods(MOD_MASK_GUI);
            } else { // On keyup
                unregister_mods(MOD_MASK_GUI);
            }
            if (record->tap.count && record->event.pressed) { // Intercept taps
                tap_code16(KC_EXLM);
                unregister_mods(MOD_MASK_SHIFT);
            } else {
                /* intentionally empty */;
            }
            return false; // Return true for normal processing of key
        }
            break;

        // =====================================================================
        // Repeat key
        // =====================================================================

        case KC_A:
        // case MT_A:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_A;
            }
            break;
        case KC_B:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_B;
            }
            break;
        case KC_C:
        case MT_C:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_C;
            }
            break;
        case KC_D:
        case MT_D:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_D;
            }
            break;
        case KC_E:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_E;
            }
            break;
        case KC_F:
        case MT_F:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_F;
            }
            break;
        case KC_G:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_G;
            }
            break;
        case KC_H:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_H;
            }
            break;
        case KC_I:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_I;
            }
            break;
        case KC_J:
        case MT_J:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_J;
            }
            break;
        case KC_K:
        case MT_K:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_K;
            }
            break;
        case KC_L:
        case MT_L:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_L;
            }
            break;
        case KC_M:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_M;
            }
            break;
        case KC_N:
        case MT_N:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_N;
            }
            break;
        case KC_O:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_O;
            }
            break;
        case KC_P:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_P;
            }
            break;
        case KC_Q:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_Q;
            }
            break;
        case KC_R:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_R;
            }
            break;
        case KC_S:
        case MT_S:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_S;
            }
            break;
        case KC_T:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_T;
            }
            break;
        case KC_U:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_U;
            }
            break;
        case KC_V:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_V;
            }
            break;
        case KC_W:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_W;
            }
            break;
        case KC_X:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_X;
            }
            break;
        case KC_Y:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_Y;
            }
            break;
        case KC_Z:
            if (record->event.pressed && no_ctrl()) {
                lastkey = KC_Z;
            }
            break;


        // =====================================================================
        // Custom symbol handling
        // =====================================================================

        case CS_COLN:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_COLN);
                set_mods(mods);
            }
            break;
        case CS_UNDS:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_UNDS);
                set_mods(mods);
            }
            break;
        case CS_PIPE:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(LSFT(KC_NUBS));
                set_mods(mods);
            }
            break;
        case CS_LT:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_LT);
                set_mods(mods);
            }
            break;
        case CS_GT:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_GT);
                set_mods(mods);
            }
            break;
        case CS_PERC:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_PERC);
                set_mods(mods);
            }
            break;
        case CS_ASTR:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_ASTR);
                set_mods(mods);
            }
            break;
        case CS_DLR:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_DLR);
                set_mods(mods);
            }
            break;
        case CS_AMPR:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_AMPR);
                set_mods(mods);
            }
            break;
        case CS_CIRC:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_CIRC);
                set_mods(mods);
            }
            break;
        case CS_EXLM:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_EXLM);
                set_mods(mods);
            }
            break;
        case CS_TILD:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(S(KC_NUHS));
                set_mods(mods);
            }
            break;
        case CS_PLUS:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_PLUS);
                set_mods(mods);
            }
            break;
        case CS_HASH:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_NUHS);
                set_mods(mods);
            }
            break;
        case CS_SLSH:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_SLSH);
                set_mods(mods);
            }
            break;
        case CS_EQL:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_EQL);
                set_mods(mods);
            }
            break;
        case CS_AT:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_DQUO);
                set_mods(mods);
            }
            break;
        case CS_DQUO:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_AT);
                set_mods(mods);
            }
            break;
        case CS_POUN:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_HASH);
                set_mods(mods);
            }
            break;
        case CS_BSLS:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_NUBS);
                set_mods(mods);
            }
            break;

        case CS_MINS:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_MINS);
                set_mods(mods);
            }
            break;
        case CS_DOT:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_DOT);
                set_mods(mods);
            }
            break;
        case CS_COMM:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_COMM);
                set_mods(mods);
            }
            break;
        case CS_QUES:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code16(KC_QUES);
                set_mods(mods);
            }
            break;
        case CS_SCLN:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_SHIFT);
                tap_code(KC_SCLN);
                set_mods(mods);
            }
            break;

        case COM_DOT:
            if (record->event.pressed) {
                if (shifted()) {
                    const uint8_t mods = get_mods();
                    del_mods(MOD_MASK_SHIFT);
                    tap_code(KC_DOT);
                    set_mods(mods);
                }
                else {
                    const uint8_t mods = get_mods();
                    del_mods(MOD_MASK_SHIFT);
                    tap_code(KC_COMM);
                    set_mods(mods);
                }
            }
            break;

        case QUE_EXL:
            if (record->event.pressed) {
                if (shifted()) {
                    const uint8_t mods = get_mods();
                    del_mods(MOD_MASK_SHIFT);
                    tap_code16(KC_EXLM);
                    set_mods(mods);
                }
                else {
                    const uint8_t mods = get_mods();
                    del_mods(MOD_MASK_SHIFT);
                    tap_code16(KC_QUES);
                    set_mods(mods);
                }
            }
            break;

        case CS_END:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_CTRL);
                tap_code(KC_END);
                set_mods(mods);
            }
            break;
        case CS_HOME:
            if (record->event.pressed) {
                const uint8_t mods = get_mods();
                del_mods(MOD_MASK_CTRL);
                tap_code(KC_HOME);
                set_mods(mods);
            }
            break;
    }
    return true;
}

//==============================================================================
// OSM
//==============================================================================

// bool ONESHOT_SHIFT = false;
// void oneshot_mods_changed_user(uint8_t mods) {
//     if (mods & MOD_MASK_SHIFT) {
//         ONESHOT_SHIFT = true;
//     }
//     if (!mods) {
//         ONESHOT_SHIFT = false;
//     }
// }


//==============================================================================
// OLED
//==============================================================================
#ifdef OLED_ENABLE

void render_wpm(void) {
    uint8_t n = get_current_wpm();
    char render_str[3];

    // render_str[3] = '\0';
    render_str[2] = '0' + n % 10;
    render_str[1] = '0' + (n /= 10) % 10;
    render_str[0] = '0' + n / 10;
    
    oled_write_P(PSTR("WPM: "), false);
    oled_write(render_str, false);
}

//------------
// Animation
//------------

static bool minor = true;
static bool major = false;
static uint8_t frame_count = 15;
static uint16_t render_timer;
static uint16_t anim_timer = 0;
static bool show_text = true;

#include "frames.c"

static uint8_t clean_frame = 0;

void render_stats(void) {
    oled_set_cursor(0,14);
    render_wpm();
    render_clock(0,15);
}

void render_text_clean(void) {
    oled_write_raw_P(text_clean[clean_frame], frame_size);
}

void render_text_major(void) {
    oled_write_raw_P(text_major[rand() % text_major_count], frame_size);
}


#define BIAS 2
void render_text_minor(bool can_be_major) {
    clean_frame = rand() % 2;
    uint8_t frame = can_be_major ? rand() % (BIAS*text_minor_count + text_major_count) : rand() % text_minor_count;
    if (frame < BIAS*text_minor_count) {
        oled_write_raw_P(text_minor[frame % text_minor_count], frame_size);
        return;
    }

    render_text_major();
}

void render_logo_clean(void) {
    oled_write_raw_P(logo_clean, frame_size);
    render_stats();
}

void render_logo_major(void) {
    oled_write_raw_P(logo_major[rand() % logo_major_count], frame_size);
}

void render_logo_minor(bool can_be_major) {
    uint8_t frame = can_be_major ? rand() % (logo_minor_count + logo_major_count) : rand() % logo_minor_count;
    if (frame < logo_minor_count) {
        oled_write_raw_P(logo_minor[frame], frame_size);

        return;
    }

    render_logo_major();
}


void render_draw(void) {
    if (sync_data.oled_timeout_sync) {
        return;
    }
    
    anim_timer = timer_elapsed(render_timer);
    if (anim_timer < 150) {
        show_text ? render_text_major() : render_logo_major();
        return;
    }
    if (anim_timer < 250) {
        show_text ? render_text_minor(true) : render_logo_minor(true);
        return;
    }
    if (anim_timer > 9750 && anim_timer < 9850) {
        show_text ? render_text_minor(true) : render_logo_minor(true);
        return;
    }
    if (anim_timer > 9850 && anim_timer < 10000) {
        show_text ? render_text_major() : render_logo_major();
        return;
    }
    if (anim_timer > 10000) {
        show_text = !show_text;
        render_timer = timer_read();
    }

    if (minor && 0 != frame_count) {
        frame_count--;
        show_text ? render_text_minor(true) : render_logo_minor(true);

        return;
    }

    minor = false;
    major = false;

    show_text ? render_text_clean() : render_logo_clean();

    if (1 == rand() % 60) {
        minor = true;
        frame_count = 1 + rand() % 4;

        return;
    }

    if (1 == rand() % 60) {
        minor = true;
        frame_count = 1 + rand() % 10;
        major = frame_count > 5;
    }
}




static const char PROGMEM wave_left[frame_size] = {
    0x87, 0xa4, 0x41, 0x89, 0xad, 0x2f, 0xb9, 0xff, 0x14, 0x3d, 0xff, 0xff, 0xc2, 0x10, 0x3b, 0x7f, 
    0x79, 0xef, 0xeb, 0xaf, 0x3f, 0xff, 0x0f, 0x07, 0x8f, 0xfe, 0xf8, 0xe0, 0x80, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x03, 0x03, 0x0a, 0x2f, 0x3f, 0x12, 0x1a, 0x3e, 0x02, 0x08, 0x0f, 0x05, 0x40, 0x44, 0x74, 
    0xbf, 0xed, 0xea, 0x3f, 0x13, 0x01, 0x03, 0x8f, 0x6f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xfe, 0xf8, 
    0xf0, 0xe0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x20, 0x20, 0x38, 0x60, 0xac, 0x50, 
    0xa2, 0xa1, 0xe0, 0x70, 0x94, 0x0b, 0x1c, 0x1f, 0xbf, 0x8c, 0xf1, 0xd1, 0xc3, 0x8f, 0x9f, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 0xf0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0x50, 0xe2, 0x22, 0x61, 0xfb, 
    0xcc, 0x9f, 0xfb, 0x91, 0x1d, 0x5f, 0xb3, 0xfa, 0xfb, 0x13, 0xfb, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0x7f, 0x3f, 0x1f, 0x5f, 0x9f, 0xbf, 0xff, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0xfe, 0xfc, 0xf8, 
    0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xff, 0xff, 0xfe, 0xf8, 0xf0, 0xf0, 0xd0, 0x80, 0x80, 0x02, 0x02, 0x09, 0x09, 0x05, 0x27, 0x2b, 
    0x17, 0x8b, 0x46, 0x80, 0xd1, 0xb1, 0x87, 0xf3, 0xbe, 0xfe, 0xff, 0x1f, 0x57, 0x37, 0x9f, 0x7f, 
    0x04, 0x00, 0x00, 0x00, 0x00, 0x04, 0x24, 0x23, 0x9b, 0x5c, 0x05, 0x97, 0xef, 0xb7, 0xb3, 0xff, 
    0xff, 0xff, 0xfe, 0xfc, 0xf0, 0xc0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xe3, 0xc7, 0xcf, 0xcf, 0xef, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x3c, 0x18, 0x00, 0x00, 0x00, 
    0x00, 0x13, 0x13, 0x0f, 0x1f, 0x8e, 0x5c, 0x3f, 0xfb, 0x03, 0x1b, 0x05, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x24, 0x14, 0x0d, 0x44, 0x72, 0x33, 0xc9, 0xaf, 
    0xbf, 0xff, 0x7f, 0x7f, 0xff, 0xff, 0xf8, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x7f, 0x3f, 0x3f, 0xdf, 0x4f, 0x4f, 0x3f, 0x1f, 0x8f, 0x87, 0x43, 0x20, 0xa0, 0xd0, 0xd0, 0x28, 
    0x28, 0x68, 0x84, 0x04, 0x04, 0x04, 0x04, 0x09, 0x08, 0x08, 0x08, 0x08, 0x08, 0x10, 0x20, 0xc0, 
    0x40, 0xc0, 0x00, 0x80, 0x20, 0x4c, 0x3a, 0xf0, 0xd2, 0x7c, 0xf2, 0x22, 0xcf, 0xa3, 0xf9, 0x78, 
    0x73, 0x1f, 0xb2, 0xf2, 0xf9, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x7e, 0x1f, 0x13, 0x08, 0x04, 0x02, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x81, 
    0x42, 0x34, 0x08, 0x13, 0x14, 0xa4, 0x68, 0x30, 0x20, 0x00, 0x20, 0x48, 0x50, 0x70, 0x64, 0xe8, 
    0x6d, 0x27, 0xfb, 0x3b, 0x06, 0xc5, 0xd7, 0xd1, 0x7d, 0xa2, 0x4c, 0x57, 0xf3, 0x7b, 0xf4, 0xf0, 
    0x3e, 0x0e, 0x07, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x44, 0x82, 0x81, 
    0x40, 0x20, 0x18, 0x04, 0x03, 0x00, 0x80, 0x30, 0x20, 0xb8, 0xf0, 0xb4, 0x99, 0xfe, 0xcf, 0xef, 
    0x7e, 0x35, 0xe9, 0xef, 0xfd, 0x54, 0x87, 0xef, 0x16, 0x09, 0x07, 0x01, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xe0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x28, 0x10, 0x09, 
    0x8a, 0x4a, 0x24, 0x14, 0x08, 0x00, 0x00, 0x01, 0x01, 0x00, 0x04, 0x04, 0x02, 0x01, 0x00, 0x00, 
    0x09, 0x09, 0x07, 0x01, 0x03, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x0f, 0x07, 0x03, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x64, 0x98, 0x86, 
    0x09, 0x10, 0x20, 0x20, 0x40, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0x00, 
    0xe0, 0xe0, 0x00, 0xf0, 0xf0, 0xf0, 0xf0, 0xe0, 0xe0, 0xe0, 0xc0, 0xc0, 0x80, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x24, 0x14, 0x08, 
    0x11, 0x12, 0x22, 0x24, 0x28, 0x50, 0x8b, 0x04, 0x08, 0x10, 0x14, 0x2e, 0xc0, 0x3f, 0xff, 0x00, 
    0xff, 0xff, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfe, 0xfc, 
    0xf8, 0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x08, 0x08, 0x04, 
    0x04, 0x02, 0x04, 0x0a, 0x11, 0x11, 0x20, 0x21, 0x42, 0x84, 0x88, 0x48, 0x48, 0x51, 0x22, 0xa4, 
    0xa5, 0x4b, 0x30, 0xaf, 0xdf, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0x7f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x9f, 0x7f, 0x3e, 0xfc, 0xf8, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0xff, 0x80, 0x80, 0x40, 
    0x40, 0x20, 0x10, 0x08, 0x84, 0x44, 0x22, 0x12, 0x09, 0x04, 0x04, 0x02, 0x02, 0x1d, 0x3d, 0x00, 
    0x7e, 0x7f, 0x00, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x7f, 0x7f, 0x3f, 0x3f, 0x1f, 0x0f, 0x07, 0x03, 
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x82, 0x0a, 0x06, 0x0f, 0x9f, 0x8f, 0x5f, 0x7f, 0xff, 0xff, 0xfe, 0xfc, 0xfd, 0xfa, 0xf4, 0xe8, 
    0xe8, 0xc4, 0x82, 0x81, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0xf1, 0xe3, 0xcc, 0xb0, 0xc0, 0x00, 0x12, 0x11, 0x0f, 0x01, 0x09, 0x1d, 0x4f, 0x23, 0x13, 0x1f, 
    0x3f, 0x0f, 0x4f, 0x3f, 0x7f, 0xfe, 0x7c, 0xf8, 0xf0, 0xe0, 0xc0, 0x80, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static const char PROGMEM wave_right[frame_size] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3e, 0x7f, 0xfe, 0xfc, 0xf2, 0xf0, 0xfc, 
    0xf8, 0xc8, 0xc4, 0xf2, 0xb8, 0x90, 0x80, 0xf0, 0x88, 0x48, 0x00, 0x03, 0x0d, 0x33, 0xc7, 0x8f, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, 0x41, 0x23, 0x17, 
    0x17, 0x2f, 0x5f, 0xbf, 0x3f, 0x7f, 0xff, 0xff, 0xfe, 0xfa, 0xf1, 0xf9, 0xf0, 0x60, 0x50, 0x41, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 
    0xc0, 0xe0, 0xf0, 0xf8, 0xfc, 0xfc, 0xfe, 0xfe, 0xfe, 0xff, 0xff, 0xff, 0xff, 0x00, 0xfe, 0x7e, 
    0x00, 0xbc, 0xb8, 0x40, 0x40, 0x20, 0x20, 0x90, 0x48, 0x44, 0x22, 0x21, 0x10, 0x08, 0x04, 0x02, 
    0x02, 0x01, 0x01, 0xff, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x7c, 0xfe, 0xf9, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0xfe, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfb, 0xf5, 0x0c, 0xd2, 0xa5, 
    0x25, 0x44, 0x8a, 0x12, 0x12, 0x11, 0x21, 0x42, 0x84, 0x04, 0x88, 0x88, 0x50, 0x20, 0x40, 0x20, 
    0x20, 0x10, 0x10, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x1f, 
    0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 
    0x00, 0xff, 0xfc, 0x03, 0x74, 0x28, 0x08, 0x10, 0x20, 0xd1, 0x0a, 0x14, 0x24, 0x44, 0x48, 0x88, 
    0x10, 0x28, 0x24, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x01, 0x03, 0x03, 0x07, 0x07, 0x07, 0x0f, 0x0f, 0x0f, 0x0f, 0x00, 0x07, 0x07, 
    0x00, 0x03, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x04, 0x04, 0x08, 0x90, 
    0x61, 0x19, 0x26, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x40, 0xc0, 0xe0, 0xf0, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x00, 0xc0, 0x80, 0xe0, 0x90, 0x90, 
    0x00, 0x00, 0x80, 0x40, 0x20, 0x20, 0x00, 0x80, 0x80, 0x00, 0x00, 0x10, 0x28, 0x24, 0x52, 0x51, 
    0x90, 0x08, 0x14, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x80, 0xe0, 0x90, 0x68, 0xf7, 0xe1, 0x2a, 0xbf, 0xf7, 0x97, 0xac, 0x7e, 
    0xf7, 0xf3, 0x7f, 0x99, 0x2d, 0x0f, 0x1d, 0x04, 0x0c, 0x01, 0x00, 0xc0, 0x20, 0x18, 0x04, 0x02, 
    0x81, 0x41, 0x22, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xc0, 0xe0, 0x70, 0x7c, 
    0x0f, 0x2f, 0xde, 0xcf, 0xea, 0x32, 0x45, 0xbe, 0x8b, 0xeb, 0xa3, 0x60, 0xdc, 0xdf, 0xe4, 0xb6, 
    0x17, 0x26, 0x0e, 0x0a, 0x12, 0x04, 0x00, 0x04, 0x0c, 0x16, 0x25, 0x28, 0xc8, 0x10, 0x2c, 0x42, 
    0x81, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x80, 0x80, 0x40, 0x20, 0x10, 0xc8, 0xf8, 0x7e, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0xff, 0x9f, 0x4f, 0x4d, 0xf8, 0xce, 
    0x1e, 0x9f, 0xc5, 0xf3, 0x44, 0x4f, 0x3e, 0x4b, 0x0f, 0x5c, 0x32, 0x04, 0x01, 0x00, 0x03, 0x02, 
    0x03, 0x04, 0x08, 0x10, 0x10, 0x10, 0x10, 0x10, 0x90, 0x20, 0x20, 0x20, 0x20, 0x21, 0x16, 0x14, 
    0x14, 0x0b, 0x0b, 0x05, 0x04, 0xc2, 0xe1, 0xf1, 0xf8, 0xfc, 0xf2, 0xf2, 0xfb, 0xfc, 0xfc, 0xfe, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xfd, 
    0xf5, 0x93, 0xcc, 0x4e, 0x22, 0xb0, 0x28, 0x24, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0xa0, 0xd8, 0xc0, 0xdf, 0xfc, 0x3a, 0x71, 0xf8, 0xf0, 0xc8, 0xc8, 0x00, 
    0x00, 0x00, 0x00, 0x18, 0x3c, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xf7, 0xf3, 0xf3, 0xe3, 0xc7, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x0f, 0x3f, 0x7f, 0xff, 0xff, 
    0xff, 0xcd, 0xed, 0xf7, 0xe9, 0xa0, 0x3a, 0xd9, 0xc4, 0x24, 0x20, 0x00, 0x00, 0x00, 0x00, 0x20, 
    0xfe, 0xf9, 0xec, 0xea, 0xf8, 0xff, 0x7f, 0x7d, 0xcf, 0xe1, 0x8d, 0x8b, 0x01, 0x62, 0xd1, 0xe8, 
    0xd4, 0xe4, 0xa0, 0x90, 0x90, 0x40, 0x40, 0x01, 0x01, 0x0b, 0x0f, 0x0f, 0x1f, 0x7f, 0xff, 0xff, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x07, 
    0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xfe, 0xfe, 0xff, 0xff, 0xfd, 0xf9, 0xfa, 0xf8, 0xfc, 0xfe, 0xff, 
    0xff, 0xff, 0xff, 0xff, 0xff, 0xdf, 0xc8, 0xdf, 0x5f, 0xcd, 0xfa, 0xb8, 0x89, 0xdf, 0xf9, 0x33, 
    0xdf, 0x86, 0x44, 0x47, 0x0a, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x0f, 0x1f, 0x3f, 0x7f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 
    0xff, 0xf9, 0xf1, 0xc3, 0x8b, 0x8f, 0x31, 0xfd, 0xf8, 0x38, 0xd0, 0x29, 0x0e, 0x07, 0x85, 0x45, 
    0x0a, 0x35, 0x06, 0x1c, 0x04, 0x04, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x03, 0x07, 0x07, 0x0f, 
    0x1f, 0x7f, 0xff, 0xff, 0xff, 0xfe, 0xfc, 0xf6, 0xf1, 0xc0, 0x80, 0xc8, 0xfc, 0x57, 0xb7, 0xfd, 
    0x2e, 0x22, 0x02, 0xa0, 0xf0, 0x10, 0x40, 0x7c, 0x58, 0x48, 0xfc, 0xf4, 0x50, 0xc0, 0xc0, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
    0x00, 0x00, 0x00, 0x01, 0x07, 0x1f, 0x7f, 0xf1, 0xe0, 0xf0, 0xff, 0xfc, 0xf5, 0xd7, 0xf7, 0x9e, 
    0xfe, 0xdc, 0x08, 0x43, 0xff, 0xff, 0xbc, 0x28, 0xff, 0x9d, 0xf4, 0xb5, 0x91, 0x82, 0x25, 0xe1
};




void render_linebreak(void) {
    oled_write_P(PSTR("__________"), false);
}

void render_mode(void) {
    if (IS_LAYER_ON(_NUMPAD)){
        oled_write_P(PSTR(" Numpad\n"), false);
    }
    else if (IS_LAYER_ON(_BASIC)){
        oled_write_P(PSTR(" Basic\n"), false);
    }
    else if (IS_LAYER_ON(_STENO)){
        oled_write_P(PSTR(" Steno.\n"), false);
    }
    else if (IS_LAYER_ON(_TOUHOU)){
        oled_write_P(PSTR(" Touhou\n"), false);
    }
    else {
        oled_write_P(PSTR(" Standard\n"), false);
    }
}

void render_layer(void) {
    if (IS_LAYER_ON(_DATA)) {
        oled_write_P(PSTR(">Data\n"), false);
    } else {
        oled_write_P(PSTR(" Data\n"), false);
    }
    if (IS_LAYER_ON(_EDIT)) {
        oled_write_P(PSTR(">Edit\n"), false);
    } else {
        oled_write_P(PSTR(" Edit\n"), false);
    }
    if (IS_LAYER_ON(_SYMBOL)) {
        oled_write_P(PSTR(">Symbol\n"), false);
    } else {
        oled_write_P(PSTR(" Symbol\n"), false);
    }
    if (IS_LAYER_ON(_PROGRAM)) {
        oled_write_P(PSTR(">Program\n"), false);
    } else {
        oled_write_P(PSTR(" Program\n"), false);
    }
    if (IS_LAYER_ON(_MOUSE)) {
        oled_write_P(PSTR(">Mouse\n"), false);
    } else {
        oled_write_P(PSTR(" Mouse\n"), false);
    }
    if (IS_LAYER_ON(_UTILITY)) {
        oled_write_P(PSTR(">Utility\n"), false);
    } else {
        oled_write_P(PSTR(" Utility\n"), false);
    }
}


void render_locking_key_state(led_t led_usb_state) {
    if (led_usb_state.caps_lock) {
        oled_write_char(203,false);
        oled_write_char(204,false);
        oled_write_char(205,false);
    } else {
        oled_write_char(193,false);
        oled_write_char(194,false);
        oled_write_char(195,false);
    }

    if (led_usb_state.caps_lock && !led_usb_state.scroll_lock) {
        oled_write_char(206,false);
    }
    else if (led_usb_state.caps_lock && led_usb_state.scroll_lock) {
        oled_write_char(207,false);
    }
    else if (!led_usb_state.caps_lock && led_usb_state.scroll_lock) {
        oled_write_char(208,false);
    }
    else {
        oled_write_char(196,false);
    }
    
    if (led_usb_state.scroll_lock) {
        oled_write_char(209,false);
        oled_write_char(210,false);
    } else {
        oled_write_char(197,false);
        oled_write_char(198,false);
    }

    if (led_usb_state.scroll_lock && !led_usb_state.num_lock) {
        oled_write_char(211,false);
        oled_write_char(200,false);
    }
    else if (led_usb_state.scroll_lock && led_usb_state.num_lock) {
        oled_write_char(212,false);
        oled_write_char(213,false);
    }
    else if (!led_usb_state.scroll_lock && led_usb_state.num_lock) {
        oled_write_char(199,false);
        oled_write_char(214,false);
    }
    else {
        oled_write_char(199,false);
        oled_write_char(200,false);
    }
    
    if (led_usb_state.num_lock) {
        oled_write_char(215,false);
        oled_write_char(216,false);
    } else {
        oled_write_char(201,false);
        oled_write_char(202,false);
    }
}

void render_modifier_state(uint8_t line) {
    oled_set_cursor(0,line);
    if (get_mods() & MOD_MASK_GUI) {
        oled_write_char(137,false);
        oled_write_char(138,false);
        oled_set_cursor(0,line+1);
        oled_write_char(169,false);
        oled_write_char(170,false);

    } else {
        oled_write_char(129,false);
        oled_write_char(130,false);
        oled_set_cursor(0,line+1);
        oled_write_char(161,false);
        oled_write_char(162,false);
    }
    oled_set_cursor(2,line);
    if (get_mods() & MOD_MASK_ALT) {
        oled_write_char(139,false);
        oled_write_char(140,false);
        oled_set_cursor(2,line+1);
        oled_write_char(171,false);
        oled_write_char(172,false);
    } else {
        oled_write_char(131,false);
        oled_write_char(132,false);
        oled_set_cursor(2,line+1);
        oled_write_char(163,false);
        oled_write_char(164,false);
    }
    oled_set_cursor(4,line);
    if (get_mods() & MOD_MASK_SHIFT) {
        oled_write_char(141,false);
        oled_write_char(142,false);
        oled_set_cursor(4,line+1);
        oled_write_char(173,false);
        oled_write_char(174,false);
    } else {
        oled_write_char(133,false);
        oled_write_char(134,false);
        oled_set_cursor(4,line+1);
        oled_write_char(165,false);
        oled_write_char(166,false);
    }
    oled_set_cursor(6,line);
    if (get_mods() & MOD_MASK_CTRL) {
        oled_write_char(143,false);
        oled_write_char(144,false);
        oled_set_cursor(6,line+1);
        oled_write_char(175,false);
        oled_write_char(176,false);
    } else {
        oled_write_char(135,false);
        oled_write_char(136,false);
        oled_set_cursor(6,line+1);
        oled_write_char(167,false);
        oled_write_char(168,false);
    }

    oled_set_cursor(8,line);
    oled_write_char(145,false);
    oled_set_cursor(8,line+1);
    oled_write_char(177,false);
    oled_set_cursor(9,line);
    if (!muted) {
        oled_write_char(146,false);
        oled_set_cursor(9,line+1);
        oled_write_char(178,false);
    } else {
        oled_write_char(147,false);
        oled_set_cursor(9,line+1);
        oled_write_char(179,false);
    }
    oled_advance_page(false);
}

static void render_status(void) {
    oled_write_ln_P(PSTR("Mode:"), false); // 1
    render_mode(); // 1

    render_linebreak(); // 1

    oled_write_ln_P(PSTR("Layer:"), false); // 1
    render_layer(); // 7

    render_linebreak(); // 1
    oled_write_P(PSTR("\n"), false); // 1
    render_linebreak(); // 1

    render_locking_key_state(host_keyboard_led_state()); // 1
    render_modifier_state(14); // 2
    render_clock(1,11); // 1 (3)
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    return OLED_ROTATION_0;
}

bool oled_task_user(void) {
    if (oled_timeout) {
        oled_off();
        return false;
    }
    if (is_keyboard_master()) {
        if (wave_on) {
            oled_write_raw_P(wave_right, frame_size);
        }
        else {
            render_status();
        }
    }
    else {
        if (wave_on || sync_data.wave_on_sync) {
            ;
            // oled_write_raw_P(wave_left, frame_size);
        }
        else {
            render_draw();
        }
    }
    return false;
}

#endif


//==============================================================================
// RGB
//==============================================================================

bool rgb_matrix_indicators_advanced_user(uint8_t led_min, uint8_t led_max) {
    // Layers on underglow
    HSV underglow_hsv = (HSV){ 0, 0, 0 };
    RGB underglow_rgb = hsv_to_rgb(underglow_hsv);
    for (uint8_t i = 27; i < 33; i++) {
        switch(get_highest_layer(layer_state|default_layer_state)) {
            case _PROGRAM:
                underglow_hsv = (HSV){ 85, 255, 255 };
                underglow_rgb = hsv_to_rgb(underglow_hsv);
                rgb_matrix_set_color(i, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                rgb_matrix_set_color(i-27, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                break;
            case _DATA:
                underglow_hsv = (HSV){ 127, 255, 255 };
                underglow_rgb = hsv_to_rgb(underglow_hsv);
                rgb_matrix_set_color(i, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                rgb_matrix_set_color(i-27, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                break;
            case _EDIT:
                underglow_hsv = (HSV){ 0, 255, 255 };
                underglow_rgb = hsv_to_rgb(underglow_hsv);
                rgb_matrix_set_color(i, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                rgb_matrix_set_color(i-27, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                break;
            case _SYMBOL:
                underglow_hsv = (HSV){ 169, 255, 255 };
                underglow_rgb = hsv_to_rgb(underglow_hsv);
                rgb_matrix_set_color(i, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                rgb_matrix_set_color(i-27, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                break;
            case _MOUSE:
                underglow_hsv = (HSV){ 222, 255, 255 };
                underglow_rgb = hsv_to_rgb(underglow_hsv);
                rgb_matrix_set_color(i, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                rgb_matrix_set_color(i-27, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                break;
            case _NUMPAD:
                underglow_hsv = (HSV){ 43, 255, 255 };
                underglow_rgb = hsv_to_rgb(underglow_hsv);
                rgb_matrix_set_color(i, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                rgb_matrix_set_color(i-27, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                break;
            case _UTILITY:
                underglow_hsv = (HSV){ 201, 255, 255 };
                underglow_rgb = hsv_to_rgb(underglow_hsv);
                rgb_matrix_set_color(i, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                rgb_matrix_set_color(i-27, underglow_rgb.r, underglow_rgb.g, underglow_rgb.b);
                break;
            case _BASIC:
            case _TOUHOU:
            default:
                break;
        }
    }

    
    // if (get_mods() == 0) {
    //     rgb_matrix_sethsv_noeeprom(255,255,225);
    // } else {
    //     rgb_matrix_sethsv_noeeprom(255,255,255);
    // }

    // Thumbkeys
    // HSV mod_hsv = (HSV){ 0, 0, 0 };
    // RGB mod_rgb = hsv_to_rgb(mod_hsv);
    // int idxs[3] = { 33, 40, 41 };
    // for (uint8_t i = 0; i < 3; i++) {
    //     if ((get_mods() & MOD_BIT(KC_LGUI)) == MOD_BIT(KC_LGUI) || (get_mods() & MOD_BIT(KC_RGUI)) == MOD_BIT(KC_RGUI)) {
    //         mod_hsv = (HSV){ 000, 255, 128 };
    //         mod_rgb = hsv_to_rgb(mod_hsv);
    //         rgb_matrix_set_color(idxs[i], mod_rgb.r, mod_rgb.g, mod_rgb.b);
    //         rgb_matrix_set_color(idxs[i]-27, mod_rgb.r, mod_rgb.g, mod_rgb.b);
    //     }
    //     if ((get_mods() & MOD_BIT(KC_LALT)) == MOD_BIT(KC_LALT) || (get_mods() & MOD_BIT(KC_RALT)) == MOD_BIT(KC_RALT)) {
    //         mod_hsv = (HSV){ 201, 255, 128 };
    //         mod_rgb = hsv_to_rgb(mod_hsv);
    //         rgb_matrix_set_color(idxs[i], mod_rgb.r, mod_rgb.g, mod_rgb.b);
    //         rgb_matrix_set_color(idxs[i]-27, mod_rgb.r, mod_rgb.g, mod_rgb.b);
    //     }
    //     if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT) || (get_mods() & MOD_BIT(KC_RSFT)) == MOD_BIT(KC_RSFT)) {
    //         mod_hsv = (HSV){ 127, 255, 96 };
    //         mod_rgb = hsv_to_rgb(mod_hsv);
    //         rgb_matrix_set_color(idxs[i], mod_rgb.r, mod_rgb.g, mod_rgb.b);
    //         rgb_matrix_set_color(idxs[i]-27, mod_rgb.r, mod_rgb.g, mod_rgb.b);

    //     }
    //     if ((get_mods() & MOD_BIT(KC_LCTL)) == MOD_BIT(KC_LCTL) || (get_mods() & MOD_BIT(KC_RCTL)) == MOD_BIT(KC_RCTL)) {
    //         mod_hsv = (HSV){ 169, 255, 128 };
    //         mod_rgb = hsv_to_rgb(mod_hsv);
    //         rgb_matrix_set_color(idxs[i], mod_rgb.r, mod_rgb.g, mod_rgb.b);
    //         rgb_matrix_set_color(idxs[i]-27, mod_rgb.r, mod_rgb.g, mod_rgb.b);
    //     }
    // }

    // Modifiers
    // if ((get_mods() & MOD_BIT(KC_LGUI)) == MOD_BIT(KC_LGUI) || (get_mods() & MOD_BIT(KC_RGUI)) == MOD_BIT(KC_RGUI)) {
    //     rgb_matrix_set_color(33, RGB_BLUE);
    // }
    // if ((get_mods() & MOD_BIT(KC_LALT)) == MOD_BIT(KC_LALT) || (get_mods() & MOD_BIT(KC_RALT)) == MOD_BIT(KC_RALT)) {
    //     rgb_matrix_set_color(40, RGB_PURPLE);

    // }
    // if ((get_mods() & MOD_BIT(KC_LSFT)) == MOD_BIT(KC_LSFT) || (get_mods() & MOD_BIT(KC_RSFT)) == MOD_BIT(KC_RSFT)) {
    //     rgb_matrix_set_color(41, RGB_PINK);

    // }
    // if ((get_mods() & MOD_BIT(KC_LCTL)) == MOD_BIT(KC_LCTL) || (get_mods() & MOD_BIT(KC_RCTL)) == MOD_BIT(KC_RCTL)) {
    //     rgb_matrix_set_color(41, RGB_PINK);
    // }

    return false;
}
//     ,-----------------------.
//      36, 37, 44, 45, 50, 51, 
//     |---+---+---+---+---+---|
//      35, 38, 43, 46, 49, 52,
//     |---+---+---+---+---+---|
//      34, 39, 42, 47, 48, 53
// |---+---+---+---+---+---+---|
//   33, 40, 41
// `-----------'
// Underglow: 27-32



layer_state_t layer_state_set_user(layer_state_t state) {
    static bool basic = false;
    // static uint8_t mode;
    // mode = rgb_matrix_get_mode();
    if (basic != IS_LAYER_ON_STATE(state, _BASIC) || basic != IS_LAYER_ON_STATE(state, _TOUHOU)) {
        basic = !basic;
        if (basic) {
            // mode = rgb_matrix_get_mode();
            rgb_matrix_set_speed_noeeprom(48);
            rgb_matrix_mode_noeeprom(RGB_MATRIX_RAINBOW_PINWHEELS);
            rgb_matrix_sethsv_noeeprom(255,225,255);
        } else {
            rgb_matrix_set_speed_noeeprom(64);
            rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
            rgb_matrix_sethsv_noeeprom(255,255,255);
        }
    }
    // switch(get_highest_layer(layer_state)) {
    //     case _DEFAULT:
    //         rgb_matrix_set_speed_noeeprom(64);
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    //         rgb_matrix_sethsv_noeeprom(255,255,255);
    //     case _BASIC:
    //         rgb_matrix_set_speed_noeeprom(48);
    //         rgb_matrix_mode_noeeprom(RGB_MATRIX_RAINBOW_PINWHEELS);
    //         rgb_matrix_sethsv_noeeprom(255,225,255);
    //         break;
    //     default:
    //         break;
    // }
    return state;
}

// =============================================================================
// 
// =============================================================================

void keyboard_post_init_user(void) {
    rgb_matrix_set_speed_noeeprom(64);
    rgb_matrix_mode_noeeprom(RGB_MATRIX_SOLID_REACTIVE);
    rgb_matrix_sethsv_noeeprom(255,255,255);

    defer_exec(timer_callback(0,NULL), timer_callback, NULL);

    transaction_register_rpc(USER_SYNC_A, user_config_sync_handler);
}

void housekeeping_task_user(void) {
    if (is_keyboard_master()) {
        static uint32_t last_sync = 0;
        if (timer_elapsed32(last_sync) > 500) { // Interact with slave every 500ms
            // master_to_slave_t m2s = { .wave_on_sync = wave_on };
            master_to_slave_t m2s = { .wave_on_sync = wave_on, .oled_timeout_sync = oled_timeout };
            if (transaction_rpc_send(USER_SYNC_A, sizeof(master_to_slave_t), &m2s)) {
                last_sync = timer_read32();
            } else {
                dprint("Slave sync failed!\n");
            }
        }
    }
    else { // slave side
        if (sync_data.wave_on_sync) { 
            oled_write_raw_P(wave_left, frame_size);
        }
        else {
            // render_draw();
        }
        if (sync_data.oled_timeout_sync) { 
            oled_off();
        }
        else {
            oled_on();
        }
    }
}
