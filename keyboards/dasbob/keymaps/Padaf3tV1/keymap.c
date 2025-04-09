#include QMK_KEYBOARD_H
#include "padafet_keymap.h"

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
            //layer_move(0);
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
            //layer_move(0);
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
            //layer_move(0);
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
            //layer_move(0);
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
            //layer_move(0);
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
            //layer_move(0);
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
            //layer_move(0);
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
            //layer_move(0);
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
            //layer_move(0);
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
            //layer_move(0);
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
            //layer_move(0);
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
    }


    return true;
};

//COMBO
//Layer 0
const uint16_t PROGMEM combo_esc[] =        {CA_Z, CA_J, COMBO_END};
const uint16_t PROGMEM combo_tab[] =        {CA_J, CA_O, COMBO_END};
const uint16_t PROGMEM combo_agrv[] =       {CA_O, CA_EACU, COMBO_END};
const uint16_t PROGMEM combo_underline[] =  {CA_Y, CA_EGRV, COMBO_END};
const uint16_t PROGMEM combo_dash[] =       {CA_EGRV, CA_DOT, COMBO_END};
const uint16_t PROGMEM combo_cced[] =       {CA_C, CA_M, COMBO_END};
const uint16_t PROGMEM combo_ugrv[] =       {CA_M, CA_H, COMBO_END};
const uint16_t PROGMEM combo_q[] =          {CA_D, CA_L, COMBO_END};
const uint16_t PROGMEM combo_enter[] =      {CA_L, CA_QUOT, COMBO_END};
const uint16_t PROGMEM combo_capsworld[] =  {CA_QUOT, CA_X, COMBO_END};
const uint16_t PROGMEM combo_oe1[] =        {ECIRC, UCIRC, COMBO_END};
const uint16_t PROGMEM combo_oe2[] =        {ETREM, UTREM, COMBO_END};
const uint16_t PROGMEM combo_ae1[] =        {ACIRC, ICIRC, COMBO_END};
const uint16_t PROGMEM combo_ae2[] =        {ATREM, ITREM, COMBO_END};
//layer1-2
const uint16_t PROGMEM combo_tab1[] =        {CA_J, OCIRC, COMBO_END};
const uint16_t PROGMEM combo_tab2[] =        {CA_J, OTREM, COMBO_END};


combo_t key_combos[] = {
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
    COMBO(combo_oe1, CA_OE),
    COMBO(combo_oe2, CA_OE),
    COMBO(combo_ae1, CA_AE),
    COMBO(combo_ae2, CA_AE),
    //Layer1-2
    COMBO(combo_tab1, KC_TAB),
    COMBO(combo_tab2, KC_TAB),
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT_split_3x5_3(
        CA_Z,         CA_J,         CA_O,         CA_EACU,      CA_B,           CA_F,          CA_D,          CA_L,         CA_QUOT,           CA_X,
        LGUI_T(CA_A), LALT_T(CA_I), LCTL_T(CA_E), LSFT_T(CA_U), CA_COMM,        CA_P,          LSFT_T(CA_T),  LCTL_T(CA_S), LALT_T(CA_R),   LGUI_T(CA_N),
        LT(5, CA_K),  CA_Y,         CA_EGRV,      CA_DOT,       CA_W,           CA_G,          CA_C,          CA_M,         CA_H,           LT(5, CA_V),
                                    MO(4),        LT(6, KC_BSPC),LT(3, KC_DEL), MO(1),         KC_SPC,        MO(2)
    ),

    [1] = LAYOUT_split_3x5_3(
        _______,      _______,      OCIRC,        _______,      _______,        _______,       _______,       _______,      _______,        _______,
        ACIRC,        ICIRC,        ECIRC,        UCIRC,        _______,        _______,       _______,       _______,      _______,        _______, 
        _______,      YCIRC,        _______,      _______,      _______,        _______,       _______,       _______,      _______,        _______,
                                    _______,      _______,      _______,        _______,       _______,       _______
    ), 

    [2] = LAYOUT_split_3x5_3(
        _______,      _______,      OTREM,        _______,      _______,        _______,       _______,       _______,      _______,        _______,
        ATREM,        ITREM,        ETREM,        UTREM,        _______,        _______,       _______,       _______,      _______,        _______, 
        _______,      YTREM,        _______,      _______,      _______,        _______,       _______,       _______,      _______,        _______,
                                    _______,      _______,      _______,        _______,       _______,       _______
    ),

    [3] = LAYOUT_split_3x5_3(
        CA_QUOT,      CA_LABK,      CA_RABK,      CA_DQUO,      CA_DOT,         CA_AMPR,       CA_SCLN,       CA_LBRC,      CA_RBRC,        CA_PERC,
        CA_EXLM,      CA_MINS,      CA_PLUS,      CA_EQL,       CA_HASH,        CA_PIPE,       CA_COLN,       CA_LPRN,      CA_RPRN,        CA_QUES,
        CIRCON,       CA_SLSH,      CA_ASTR,      CA_BSLS,      GRAVE,          TILDE,         CA_DLR,        CA_LCBR,      CA_RCBR,        CA_AT,
                                    _______,      _______,      _______,        FATARR,        _______,       SKINARR
    ),

    [4] = LAYOUT_split_3x5_3(
        XXXXXXX,      XXXXXXX,      CA_COMM,      CA_8,         CA_SLSH,        CA_ASTR,       CA_9,          CA_DOT,       XXXXXXX,        XXXXXXX,
        LGUI_T(CA_6), LALT_T(CA_4), LCTL_T(CA_2), LSFT_T(CA_0), CA_MINS,        CA_PLUS,       LSFT_T(CA_1),  LCTL_T(CA_3), LALT_T(CA_5),   LGUI_T(CA_7),
        XXXXXXX,      XXXXXXX,      XXXXXXX,      CA_LPRN,      CA_UNDS,        CA_UNDS,       CA_RPRN,       XXXXXXX,      XXXXXXX,        XXXXXXX,
                                    _______,      _______,      XXXXXXX,        QK_REP,        _______,       _______
    ),

    [5] = LAYOUT_split_3x5_3(
        C(A(KC_DEL)), XXXXXXX,      KC_F12,       KC_F8,         KC_INS,        XXXXXXX,       KC_F9,         KC_F11,       XXXXXXX,        XXXXXXX,
        LGUI_T(KC_F6),LALT_T(KC_F4),LCTL_T(KC_F2),LSFT_T(KC_F10),KC_PSCR,       KC_APP,        LSFT_T(KC_F1), LCTL_T(KC_F3),LALT_T(KC_F5),  LGUI_T(KC_F7),
        XXXXXXX,      XXXXXXX,      XXXXXXX,      XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,       XXXXXXX,      XXXXXXX,        XXXXXXX,
                                    _______,      _______,       _______,       _______,       _______,       _______
    ),

    [6] = LAYOUT_split_3x5_3(
        KC_HOME,        KC_PGDN,        KC_PGUP,        KC_END,         PF_SLTA,            XXXXXXX,       XXXXXXX,           XXXXXXX,           XXXXXXX,        XXXXXXX,
        KC_LEFT,        KC_DOWN,        KC_UP,          KC_RGHT,        QK_LLCK,            XXXXXXX,       KC_LSFT,           KC_LCTL,           KC_LALT,        KC_LGUI, 
        PF_UNDO,        PF_CUT,         PF_COPY,        PF_PSTE,        PF_REDO,            XXXXXXX,       XXXXXXX,           XXXXXXX,           XXXXXXX,        XXXXXXX,
                                        CTRLSHFT,       _______,        KC_LCTL,            QK_REP,        TO(0),             XXXXXXX
    ) 



};
