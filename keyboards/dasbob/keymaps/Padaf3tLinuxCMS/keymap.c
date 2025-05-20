#include QMK_KEYBOARD_H
#include "padafet_keymap.h"

#define BASE 0
#define CIRC 1
#define TREM 2
#define NUM 3
#define SYM 4
#define FUN 5
#define NAV 6

#define HRM_COM     LT(NUM, CA_COMM)
#define HRM_U       LT(SYM, CA_U)   
#define HRM_E       LSFT_T(CA_E)
#define HRM_I       LT(NUM, CA_I)
#define HRM_K       LGUI_T(CA_K)
#define HRM_Y       LALT_T(CA_Y)
#define HRM_DOT     LCTL_T(CA_DOT)
#define HRM_BSP     LT(FUN, KC_BSPC)
#define HRM_DEL     LT(NAV, KC_DEL)

#define HRM_P       LT(TREM, CA_P)
#define HRM_T       LT(SYM, CA_T)
#define HRM_S       RSFT_T(CA_S)
#define HRM_R       LT(NUM, CA_R)
#define HRM_N       LT(CIRC, CA_N)
#define HRM_C       LCTL_T(CA_C)
#define HRM_H       LALT_T(CA_H)
#define HRM_V       LGUI_T(CA_V)
#define HRM_LEA     LT(NAV, QK_LEAD)
#define HRM_LCK     LT(NAV, QK_LLCK)

#define HRM_0       LT(SYM, CA_0)
#define HRM_2       LSFT_T(CA_2)
#define HRM_1       LT(SYM, CA_1)
#define HRM_3       RSFT_T(CA_3)

#define HRM_F2      LSFT_T(KC_F2)
#define HRM_F3      RSFT_T(KC_F3)
#define TSK_MAN     C(S(KC_ESC))
#define CTAL_DE     C(A(KC_DEL))

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
    DBLANGB,

    //SYMBOL
    TILDE,
    CIRCON,
    BACKDIR,
    GRAVE,
    FATARR,
    SKINARR,
    ANGLEB,
    PARANTESIS,
    SQAREB,
    CURLYB,
    DBLQTE,
    SGLQTE,

    CTLSHFT,
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
            return false;
        }
        break;
    case DBLANGB:
        if(record->event.pressed) {
            tap_code16(CA_LDAQ);
            tap_code16(CA_RDAQ);
            tap_code16(KC_LEFT);
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
    
    case ANGLEB:
        if(record->event.pressed) {
            tap_code16(CA_LABK);
            tap_code16(CA_RABK);
            tap_code16(KC_LEFT);
            return false;
        }
        break;

    case PARANTESIS:
        if(record->event.pressed) {
            tap_code16(CA_LPRN);
            tap_code16(CA_RPRN);
            tap_code16(KC_LEFT);
            return false;
        }
        break;

    case SQAREB:
        if(record->event.pressed) {
            tap_code16(CA_LBRC);
            tap_code16(CA_RBRC);
            tap_code16(KC_LEFT);
            return false;
        }
        break;

    case CURLYB:
        if(record->event.pressed) {
            tap_code16(CA_LCBR);
            tap_code16(CA_RCBR);
            tap_code16(KC_LEFT);
            return false;
        }
        break;

    case DBLQTE:
        if(record->event.pressed) {
            tap_code16(CA_DQUO);
            tap_code16(CA_DQUO);
            tap_code16(KC_LEFT);
            return false;
        }
        break;

    case SGLQTE:
        if(record->event.pressed) {
            tap_code16(CA_QUOT);
            tap_code16(CA_QUOT);
            tap_code16(KC_LEFT);
            return false;
        }
        break;

    case CTLSHFT:  
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
//Layer base
const uint16_t PROGMEM combo_esc[] =        {CA_J, CA_O, CA_EACU, COMBO_END};
const uint16_t PROGMEM combo_tab[] =        {CA_J, CA_O, COMBO_END};
const uint16_t PROGMEM combo_agrv[] =       {CA_O, CA_EACU, COMBO_END};
const uint16_t PROGMEM combo_underline[] =  {HRM_Y, CA_EGRV, COMBO_END};
const uint16_t PROGMEM combo_dash[] =       {CA_EGRV, HRM_DOT, COMBO_END};
const uint16_t PROGMEM combo_cced[] =       {HRM_C, CA_M, COMBO_END};
const uint16_t PROGMEM combo_ugrv[] =       {CA_M, HRM_H, COMBO_END};
const uint16_t PROGMEM combo_q[] =          {CA_D, CA_L, COMBO_END};
const uint16_t PROGMEM combo_enter[] =      {CA_L, CA_QUOT, COMBO_END};
const uint16_t PROGMEM combo_capsworld[] =  {CA_D, CA_L, CA_QUOT, COMBO_END};
//layer circ - trem
const uint16_t PROGMEM combo_oe1[] =        {ECIRC, UCIRC, COMBO_END};
const uint16_t PROGMEM combo_oe2[] =        {ETREM, UTREM, COMBO_END};
const uint16_t PROGMEM combo_ae1[] =        {ACIRC, ICIRC, COMBO_END};
const uint16_t PROGMEM combo_ae2[] =        {ATREM, ITREM, COMBO_END};
const uint16_t PROGMEM combo_tab1[] =       {CA_J, OCIRC, COMBO_END};
const uint16_t PROGMEM combo_tab2[] =       {CA_J, OTREM, COMBO_END};
const uint16_t PROGMEM combo_dab[] =        {CA_LDAQ, CA_RDAQ, COMBO_END};
//Layer sym
const uint16_t PROGMEM combo_fatarrow[] =   {CA_SCLN, CA_LBRC, COMBO_END};
const uint16_t PROGMEM combo_skinarrow[] =  {CA_DLR, CA_LCBR, COMBO_END};
const uint16_t PROGMEM combo_angleb[] =     {CA_LABK, CA_RABK, COMBO_END};
const uint16_t PROGMEM combo_parentesis[] = {CA_LPRN, CA_RPRN, COMBO_END};
const uint16_t PROGMEM combo_squareb[] =    {CA_LBRC, CA_RBRC, COMBO_END};
const uint16_t PROGMEM combo_curlyb[] =     {CA_LCBR, CA_RCBR, COMBO_END};
const uint16_t PROGMEM combo_dblqte[] =     {CA_RABK, CA_DQUO, COMBO_END};
const uint16_t PROGMEM combo_sglqte[] =     {CA_RABK, CA_QUOT, COMBO_END};

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
    COMBO(combo_dab, DBLANGB),
//Layer sym
    COMBO(combo_fatarrow, FATARR),
    COMBO(combo_skinarrow, SKINARR),
    COMBO(combo_angleb, ANGLEB),
    COMBO(combo_parentesis, PARANTESIS),
    COMBO(combo_squareb, SQAREB),
    COMBO(combo_curlyb, CURLYB),
    COMBO(combo_dblqte, DBLQTE),
    COMBO(combo_sglqte, SGLQTE)
};

const custom_shift_key_t custom_shift_keys[] = {
    {HRM_DOT , CA_QUES}, // Shift . is ?
    {CA_COMM, CA_EXLM}, // Shift , is !
    {CA_QUOT, CA_QUOT}, // Shift ' is '
    {CA_DEG, CA_COPY}, // Shift ° is ©
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [BASE] = LAYOUT_split_3x5_3(
        CA_Z,     CA_J,     CA_O,     CA_EACU,  CA_B,           CA_F,     CA_D,     CA_L,     CA_QUOT,  CA_X,
        CA_A,     HRM_I,    HRM_E,    HRM_U,    CA_COMM,        HRM_P,    HRM_T,    HRM_S,    HRM_R,    HRM_N,
        HRM_K,    HRM_Y,    CA_EGRV,  HRM_DOT,  CA_W,           CA_G,     HRM_C,    CA_M,     HRM_H,    HRM_V,
                            QK_REP,   HRM_BSP,  HRM_DEL,        HRM_LEA,  KC_SPC,   QK_REP
    ),

    [CIRC] = LAYOUT_split_3x5_3(
        _______,  _______,  OCIRC,    _______,  _______,        _______,  _______,  _______,  _______,  _______,
        ACIRC,    ICIRC,    ECIRC,    UCIRC,    CA_DEG,         _______,  _______,  _______,  _______,  _______, 
        _______,  YCIRC,    CA_LDAQ,  CA_RDAQ,  _______,        _______,  _______,  _______,  _______,  _______,
                            _______,  _______,  _______,        HRM_LEA,  _______,  _______
    ), 

    [TREM] = LAYOUT_split_3x5_3(
        _______,  _______,  OTREM,    _______,  _______,        _______,  _______,  _______,  _______,  _______,
        ATREM,    ITREM,    ETREM,    UTREM,    CA_DEG,         _______,  _______,  _______,  _______,  _______, 
        _______,  YTREM,    CA_LDAQ,  CA_RDAQ,  _______,        _______,  _______,  _______,  _______,  _______,
                            _______,  _______,  _______,        HRM_LEA,  _______,  _______
    ),

    [NUM] = LAYOUT_split_3x5_3(
        _______,  _______,  _______,  _______,  _______,        _______,  _______,  _______,  _______,  _______,
        CA_6,     CA_4,     HRM_2,    HRM_0,    CA_8,           CA_9,     HRM_1,    HRM_3,    CA_5,     CA_7,
        KC_LGUI,  KC_LALT,  _______,  KC_LCTL,  _______,        _______,  KC_LCTL,  _______,  KC_LALT,  KC_LGUI,
                            _______,  _______,  _______,        HRM_LCK,  _______,  _______
    ),

    [SYM] = LAYOUT_split_3x5_3(
        GRAVE,    CA_LABK,  CA_RABK,  CA_DQUO,  CA_QUOT,        CA_AMPR,  CA_SCLN,  CA_LBRC,  CA_RBRC,  CA_PERC,
        CA_EXLM,  CA_MINS,  CA_PLUS,  CA_EQL,   CA_HASH,        CA_PIPE,  CA_COLN,  CA_LPRN,  CA_RPRN,  CA_QUES,
        CIRCON,   CA_SLSH,  CA_ASTR,  CA_BSLS,  BACKDIR,        TILDE,    CA_DLR,   CA_LCBR,  CA_RCBR,  CA_AT,
                            _______,  _______,  _______,        HRM_LCK,  _______,  _______
    ),

    [FUN] = LAYOUT_split_3x5_3(
        CTAL_DE,  TSK_MAN,  _______,  KC_F12,   _______,        _______,  KC_F11,   _______,  _______,  _______,
        KC_F6,    KC_F4,    HRM_F2,   KC_F10,   KC_F8,          KC_F9,    KC_F1,    HRM_F3,   KC_F5,    KC_F7,
        KC_LGUI,  KC_LALT,  _______,  KC_LCTL,  KC_PSCR,        KC_APP,   KC_LCTL,  _______,  KC_LALT,  KC_LGUI,
                            _______,  _______,  _______,        HRM_LCK,  _______,  _______
    ),

    [NAV] = LAYOUT_split_3x5_3(
        _______,  _______,  _______,  _______,  _______,        _______,  KC_HOME,  KC_PGUP,  KC_PGDN,  KC_END,
        KC_LGUI,  KC_LALT,  KC_LSFT,  KC_LCTL,  CTLSHFT,        _______,  KC_LEFT,  KC_UP,    KC_DOWN,  KC_RGHT,
        PF_UNDO,  PF_CUT,   PF_COPY,  PF_PSTE,  PF_REDO,        PF_SLTA,  SELWBAK,  SELWORD,  SELLINE,  KC_INS,
                            _______,  _______,  _______,        QK_LLCK,  _______,  _______
    ),
};
