#include QMK_KEYBOARD_H
#include "padafet_keymap.h"

#define BASE 0
#define CIRC 1
#define TREM 2
#define SYM 3
#define NUM 4
#define FUN 5
#define NAV 6
#define WIN 7

#define HRM_E       LSFT_T(CA_E)   
#define HRM_U       LT(SYM, CA_U)   
#define HRM_K       LGUI_T(CA_K)
#define HRM_Y       LALT_T(CA_Y)
#define HRM_DOT     LCTL_T(CA_DOT)
#define HRM_BSPC    LT(NAV, KC_BSPC)

#define HRM_T       LT(SYM, CA_T)
#define HRM_S       LSFT_T(CA_S)
#define HRM_R       LT(TREM, CA_R)
#define HRM_N       LT(CIRC, CA_N)
#define HRM_C       LCTL_T(CA_C)
#define HRM_H       LALT_T(CA_H)
#define HRM_V       LGUI_T(CA_V)

#define HRM_2       LSFT_T(CA_2)
#define HRM_SPC     LCTL_T(KC_SPC)
#define HRM_3       LSFT_T(CA_3)

#define HRM_F2      LSFT_T(KC_F2)
#define HRM_F3      LSFT_T(KC_F3)
#define TSK_MAN     C(S(KC_ESC))

#define PRV_APP     S(A(KC_TAB))
#define NXT_APP     A(KC_TAB)

//MACRO
enum custom_keycodes {
    //CIRC
    ACIRC = SAFE_RANGE,
    ECIRC,
    ICIRC,
    OCIRC,
    UCIRC,
    YCIRC,

    //TREMA
    ATREM,
    ETREM,
    UTREM,
    ITREM,
    YTREM,
    OTREM,

    //SYMBOL
    TILDE,
    CIRCON,
    BACKDIR,
    GRAVE,
    FATARR,
    SKINARR,

    CTRLSHFT,
    DBLCLICK,
    TPLCLICK,
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    uint8_t mod_state = get_mods();

    switch (keycode) {

    //CIRC
    case ACIRC:
        if (record->event.pressed) {
            if(mod_state & MOD_MASK_SHIFT){
                del_mods(MOD_MASK_SHIFT);
                tap_code16(CA_CIRC);
                tap_code16(S(CA_A));
                set_mods(mod_state);
            }else{
                tap_code16(CA_CIRC);
                tap_code16(CA_A);
            }
            return false;
        }
        break;

    case ECIRC:
        if (record->event.pressed) {
            if(mod_state & MOD_MASK_SHIFT){
                del_mods(MOD_MASK_SHIFT);
                tap_code16(CA_CIRC);
                tap_code16(S(CA_E));
                set_mods(mod_state);
            }else{
                tap_code16(CA_CIRC);
                tap_code16(CA_E);
            }
            return false;
        }
        break;

    case ICIRC:
        if (record->event.pressed) {
           if(mod_state & MOD_MASK_SHIFT){
                del_mods(MOD_MASK_SHIFT);
                tap_code16(CA_CIRC);
                tap_code16(S(CA_I));
                set_mods(mod_state);
            }else{
                tap_code16(CA_CIRC);
                tap_code16(CA_I);
            }
            return false;
        }
        break;
    
    case OCIRC:
        if (record->event.pressed) {
            if(mod_state & MOD_MASK_SHIFT){
                del_mods(MOD_MASK_SHIFT);
                tap_code16(CA_CIRC);
                tap_code16(S(CA_O));
                set_mods(mod_state);
            }else{
                tap_code16(CA_CIRC);
                tap_code16(CA_O);
            }
            return false;
        }
        break;

    case UCIRC:
        if (record->event.pressed) {
            if(mod_state & MOD_MASK_SHIFT){
                del_mods(MOD_MASK_SHIFT);
                tap_code16(CA_CIRC);
                tap_code16(S(CA_U));
                set_mods(mod_state);
            }else{
                tap_code16(CA_CIRC);
                tap_code16(CA_U);
            }
            return false;
        }
        break;

    case YCIRC:
        if (record->event.pressed) {
            if(mod_state & MOD_MASK_SHIFT){
                del_mods(MOD_MASK_SHIFT);
                tap_code16(CA_CIRC);
                tap_code16(S(CA_Y));
                set_mods(mod_state);
            }else{
                tap_code16(CA_CIRC);
                tap_code16(CA_Y);
            }
            return false;
        }
        break;

    //TREMA
    case ATREM:
        if (record->event.pressed) {
            if(mod_state & MOD_MASK_SHIFT){
                del_mods(MOD_MASK_SHIFT);
                tap_code16(CA_DIAE);
                tap_code16(S(CA_A));
                set_mods(mod_state);
            }else{
                tap_code16(CA_DIAE);
                tap_code16(CA_A);
            }
            return false;
        }
        break;

    case ETREM:
        if (record->event.pressed) {
            if(mod_state & MOD_MASK_SHIFT){
                del_mods(MOD_MASK_SHIFT);
                tap_code16(CA_DIAE);
                tap_code16(S(CA_E));
                set_mods(mod_state);
            }else{
                tap_code16(CA_DIAE);
                tap_code16(CA_E);
            }
            return false;
        }
        break;

    case ITREM:
        if (record->event.pressed) {
           if(mod_state & MOD_MASK_SHIFT){
                del_mods(MOD_MASK_SHIFT);
                tap_code16(CA_DIAE);
                tap_code16(S(CA_I));
                set_mods(mod_state);
            }else{
                tap_code16(CA_DIAE);
                tap_code16(CA_I);
            }
            return false;
        }
        break;
    
    case OTREM:
        if (record->event.pressed) {
            if(mod_state & MOD_MASK_SHIFT){
                del_mods(MOD_MASK_SHIFT);
                tap_code16(CA_DIAE);
                tap_code16(S(CA_O));
                set_mods(mod_state);
            }else{
                tap_code16(CA_DIAE);
                tap_code16(CA_O);
            }
            return false;
        }
        break;

    case UTREM:
        if (record->event.pressed) {
            if(mod_state & MOD_MASK_SHIFT){
                del_mods(MOD_MASK_SHIFT);
                tap_code16(CA_DIAE);
                tap_code16(S(CA_U));
                set_mods(mod_state);
            }else{
                tap_code16(CA_DIAE);
                tap_code16(CA_U);
            }
            return false;
        }
        break;

    case YTREM:
        if (record->event.pressed) {
            if(mod_state & MOD_MASK_SHIFT){
                del_mods(MOD_MASK_SHIFT);
                tap_code16(CA_DIAE);
                tap_code16(S(CA_Y));
                set_mods(mod_state);
            }else{
                tap_code16(CA_DIAE);
                tap_code16(CA_Y);
            }
            //layer_move(0);
            return false;
        }
        break;
    //SYMBOL
    case TILDE:
        if (record->event.pressed) {
            tap_code16(CA_DTIL);
            tap_code16(KC_SPACE);
            return false;
        }
        break;

    case CIRCON:
        if (record->event.pressed) {
            tap_code16(CA_CIRC);
            tap_code16(KC_SPACE);
            return false;
        }
        break;
    
    case BACKDIR:
        if(record->event.pressed) {
            tap_code16(CA_DOT);
            tap_code16(CA_DOT);
            tap_code16(CA_SLSH);
            return false;
        }
        break;

    case GRAVE:
        if(record->event.pressed) {
            tap_code16(C(A(CA_CIRC)));
            tap_code16(KC_SPACE);
            return false;
        }
        break;

    case FATARR:
        if(record->event.pressed) {
            tap_code16(CA_EQL);
            tap_code16(CA_RABK);
            return false;
        }
        break;

    case SKINARR:
        if(record->event.pressed) {
            tap_code16(CA_MINS);
            tap_code16(CA_RABK);
            return false;
        }
        break;

    case CTRLSHFT:  
        if (record->event.pressed) {  
            register_code(KC_LCTL);
            register_code(KC_LSFT);
        } else {
            unregister_code(KC_LSFT);
            unregister_code(KC_LCTL);
        }
        break;

    //NAV
    case DBLCLICK:
        if(record->event.pressed) {
            SEND_STRING(SS_TAP(X_BTN1) SS_DELAY(15) SS_TAP(X_BTN1));
            return false;
        }
        break;
    
    case TPLCLICK:
        if(record->event.pressed) {
            SEND_STRING(SS_TAP(X_BTN1) SS_DELAY(15) SS_TAP(X_BTN1) SS_DELAY(15) SS_TAP(X_BTN1));
            return false;
        }
        break;
    }


    return true;
};

//COMBO
//Layer base
const uint16_t PROGMEM combo_esc[] =        {CA_Z, CA_J, COMBO_END};
const uint16_t PROGMEM combo_tab[] =        {CA_J, CA_O, COMBO_END};
const uint16_t PROGMEM combo_agrv[] =       {CA_O, CA_EACU, COMBO_END};
const uint16_t PROGMEM combo_underline[] =  {HRM_Y, CA_EGRV, COMBO_END};
const uint16_t PROGMEM combo_dash[] =       {CA_EGRV, HRM_DOT, COMBO_END};
const uint16_t PROGMEM combo_cced[] =       {HRM_C, CA_M, COMBO_END};
const uint16_t PROGMEM combo_ugrv[] =       {CA_M, HRM_H, COMBO_END};
const uint16_t PROGMEM combo_q[] =          {CA_D, CA_L, COMBO_END};
const uint16_t PROGMEM combo_enter[] =      {CA_L, CA_QUOT, COMBO_END};
const uint16_t PROGMEM combo_capsworld[] =  {CA_QUOT, CA_X, COMBO_END};
const uint16_t PROGMEM combo_oe1[] =        {ECIRC, UCIRC, COMBO_END};
const uint16_t PROGMEM combo_oe2[] =        {ETREM, UTREM, COMBO_END};
const uint16_t PROGMEM combo_ae1[] =        {ACIRC, ICIRC, COMBO_END};
const uint16_t PROGMEM combo_ae2[] =        {ATREM, ITREM, COMBO_END};
//layer circ - trem
const uint16_t PROGMEM combo_tab1[] =        {CA_J, OCIRC, COMBO_END};
const uint16_t PROGMEM combo_tab2[] =        {CA_J, OTREM, COMBO_END};
//Layer sym
const uint16_t PROGMEM combo_fatarrow[] =    {CA_SCLN, CA_LBRC, COMBO_END};
const uint16_t PROGMEM combo_skinarrow[] =   {CA_DLR, CA_LCBR, COMBO_END};

//Layer Number

combo_t key_combos[] = {
    //layer base
    COMBO(combo_esc, KC_ESC),
    COMBO(combo_tab, KC_TAB),
    COMBO(combo_agrv, CA_AGRV),
    COMBO(combo_underline, CA_UNDS),
    COMBO(combo_dash, CA_MINS),
    COMBO(combo_cced, CA_CCED),
    COMBO(combo_ugrv, CA_UGRV),
    COMBO(combo_q, CA_Q),
    COMBO(combo_enter, KC_ENTER),
    COMBO(combo_capsworld, CW_TOGG),
    //Layer circ - trem
    COMBO(combo_oe1, CA_OE),
    COMBO(combo_oe2, CA_OE),
    COMBO(combo_ae1, CA_AE),
    COMBO(combo_ae2, CA_AE),
    COMBO(combo_tab1, KC_TAB),
    COMBO(combo_tab2, KC_TAB),
    //Layer sym
    COMBO(combo_fatarrow, FATARR),
    COMBO(combo_skinarrow, SKINARR),
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT_split_3x5_3(
        CA_Z,         CA_J,         CA_O,         CA_EACU,      CA_B,           CA_F,        CA_D,          CA_L,         CA_QUOT,      CA_X,
        CA_A,         CA_I,         HRM_E,        HRM_U,        CA_COMM,        CA_P,        HRM_T,         HRM_S,        HRM_R,        HRM_N,
        HRM_K,        HRM_Y,        CA_EGRV,      HRM_DOT,      CA_W,           CA_G,        HRM_C,         CA_M,         HRM_H,        HRM_V,
                                    MO(FUN),      HRM_BSPC,     KC_DEL,         MO(NUM),     KC_SPC,        MO(WIN)
    ),

    [CIRC] = LAYOUT_split_3x5_3(
        _______,      _______,      OCIRC,        _______,      _______,        _______,     _______,       _______,      _______,      _______,
        ACIRC,        ICIRC,        ECIRC,        UCIRC,        _______,        _______,     _______,       _______,      _______,      _______, 
        _______,      YCIRC,        _______,      _______,      _______,        _______,     _______,       _______,      _______,      _______,
                                    _______,      _______,      _______,        _______,     _______,       _______
    ), 

    [TREM] = LAYOUT_split_3x5_3(
        _______,      _______,      OTREM,        _______,      _______,        _______,     _______,       _______,      _______,      _______,
        ATREM,        ITREM,        ETREM,        UTREM,        _______,        _______,     _______,       _______,      _______,      _______, 
        _______,      YTREM,        _______,      _______,      _______,        _______,     _______,       _______,      _______,      _______,
                                    _______,      _______,      _______,        _______,     _______,       _______
    ),

    [SYM] = LAYOUT_split_3x5_3(
        CA_QUOT,      CA_LABK,      CA_RABK,      CA_DQUO,      CA_DOT,         CA_AMPR,     CA_SCLN,       CA_LBRC,      CA_RBRC,      CA_PERC,
        CA_EXLM,      CA_MINS,      CA_PLUS,      CA_EQL,       CA_HASH,        CA_PIPE,     CA_COLN,       CA_LPRN,      CA_RPRN,      CA_QUES,
        CIRCON,       CA_SLSH,      CA_ASTR,      CA_BSLS,      GRAVE,          TILDE,       CA_DLR,        CA_LCBR,      CA_RCBR,      CA_AT,
                                    _______,      _______,      _______,        _______,     _______,       _______
    ),

    [NUM] = LAYOUT_split_3x5_3(
        XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,       XXXXXXX,        XXXXXXX,     XXXXXXX,       XXXXXXX,     XXXXXXX,      XXXXXXX,
        CA_6,         CA_4,         HRM_2,        CA_0,          CA_8,           CA_9,        CA_1,          HRM_3,       CA_5,         CA_7,
        KC_LGUI,      KC_LALT,      XXXXXXX,      HRM_SPC,       XXXXXXX,        XXXXXXX,     HRM_SPC,       XXXXXXX,     KC_LALT,      KC_LGUI,
                                    _______,      _______,       _______,        _______,     _______,       _______
    ),

    [FUN] = LAYOUT_split_3x5_3(
        C(A(KC_DEL)), TSK_MAN,      XXXXXXX,      KC_F12,        KC_INS,        XXXXXXX,      KC_F11,        XXXXXXX,     XXXXXXX,      XXXXXXX,
        KC_F6,        KC_F4,        HRM_F2,       KC_F10,        KC_F8,         KC_F9,        KC_F1,         HRM_F3,      KC_F5,        KC_F7,
        KC_LGUI,      KC_LALT,      XXXXXXX,      KC_LCTL,       KC_PSCR,       KC_APP,       KC_LCTL,       XXXXXXX,     KC_LALT,      KC_LGUI,
                                    _______,      _______,       _______,       _______,      _______,       _______
    ),

    [NAV] = LAYOUT_split_3x5_3(
        KC_HOME,      KC_PGDN,      KC_PGUP,      KC_END,        PF_SLTA,       TPLCLICK,     MS_WHLD,       MS_UP,       MS_WHLU,      XXXXXXX,
        KC_LEFT,      KC_DOWN,      KC_UP,        KC_RGHT,       MS_ACL1,       DBLCLICK,     MS_LEFT,       MS_DOWN,     MS_RGHT,      MS_BTN2, 
        PF_UNDO,      PF_CUT,       PF_COPY,      PF_PSTE,       PF_REDO,       QK_LLCK,      KC_LCTL,       KC_LSFT,     KC_LALT,      KC_LGUI,
                                    CTRLSHFT,     _______,       KC_LCTL,       MS_ACL0,      MS_BTN1,       MS_ACL2
    ),

    [WIN] = LAYOUT_split_3x5_3(
        KC_MUTE,      KC_VOLD,      KC_VOLU,      KC_MPLY,      C(CA_T),        KC_WREF,      KC_WSCH,       KC_WBAK,     KC_WFWD,      KC_WHOM,
        G(CA_D),      G(CA_3),      G(CA_2),      G(CA_1),      G(KC_HOME),     G(KC_I),      PRV_APP,       KC_DOWN,     KC_UP,        NXT_APP,
        C(CA_W),      G(CA_6),      G(CA_5),      G(CA_4),      C(CA_N),        G(KC_X),      C(CA_E),       KC_LSFT,     KC_LALT,      A(KC_F4),
                                    _______,      _______,      _______,        _______,      _______,       _______
    ),
};
