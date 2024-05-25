#include QMK_KEYBOARD_H
#include keymap_canadian_multilingual.h

enum dasbob_layers {
  _OPTIMOT,
  _CIRC,
  _TREMA,
  _NUMBER,
  _SYM,
  _FUN,
};

//COMBO
const uint16_t PROGMEM combo_agrv[] =       {CA_O, CA_EACU, COMBO_END};
const uint16_t PROGMEM combo_underline[] =  {CA_Y, CA_EGRV, COMBO_END};
const uint16_t PROGMEM combo_dash[] =       {CA_EGRV, CA_COMM, COMBO_END};
const uint16_t PROGMEM combo_cced[] =       {CA_M, CA_H, COMBO_END};
const uint16_t PROGMEM combo_ugrv[] =       {CA_C, CA_M, COMBO_END};
const uint16_t PROGMEM combo_capsworld[] =  {CA_L, CA_Q, COMBO_END};
combo_t key_combos[] = {
    COMBO(combo_agrv, CA_AGRV),
    COMBO(combo_underline, CA_UNDS),
    COMBO(combo_dash, CA_MINS),
    COMBO(combo_cced, CA_CCED),
    COMBO(combo_ugrv, CA_UGRV),
    COMBO(combo_capsworld, CW_TOGG)
};

//MACRO
enum custom_keycodes {
    //CIRC
    ACIRC = SAFE_RANGE
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
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    mod_state = get_mods();

    switch (keycode) {
    //CIRC
    case ACIRC:
        if (record->event.pressed) {
            if(mod_state & MOD_MASK_SHIFT){
                clear_mod();
                tap_code16(CA_CIRC);
                tap_code16(S(CA_A));
                set_mods(mod_state);
            }else{
                tap_code16(CA_CIRC);
                tap_code16(CA_A);
            }
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
            
        }
        break;
    //SYMBOL
    case TILDE:
        if (record->event.pressed) {
            tap_code16(CA_DTIL);
            tap_code16(KC_SPACE);
        }
        break;

    case CIRCON:
        if (record->event.pressed) {
            tap_code16(CA_CIRC);
            tap_code16(KC_SPACE);
        }
        break;
    }
    return true;
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_OPTIMOT] = LAYOUT_split_3x5_3(
        CA_Z,       CA_J,      CA_O,            CA_EACU,         CA_B,               CA_F,          CA_D,              CA_L,              CA_Q,           CA_X,
        CA_A,       CA_I,      LALT_T(CA_E),    LGUI_T(CA_U),    CA_COMM,            CA_P,          LGUI_T(CA_T),      LALT_T(CA_S),      CA_R,           CA_N,
        CA_K,       CA_Y,      CA_EGRV,         CA_DOT,          CA_W,               CA_G,          CA_C,              CA_M,              CA_H,           CA_V,
                               TG(1),           MEH_T(CA_SPC),   KC_LSFT,            KC_LCTL,       TG(3),             KC_BSPC
    ),

    [_CIRC] = LAYOUT_split_3x5_3(
        _______,    _______,   _______,         _______,         _______,            _______,       _______,           _______,           _______,        _______,
        ACIRC,      ICIRC,     ECIRC,           UCIRC,           _______,            _______,       _______,           _______,           _______,        _______, 
        _______,    YCIRC,     _______,         _______,         _______,            _______,       _______,           _______,           _______,        _______,
                               TG(2),           TG(0),           _______,            _______,       TG(3),             _______,
    ),

    [_TREMA] = LAYOUT_split_3x5_3(
        _______,    _______,   _______,         _______,         _______,            _______,       _______,           _______,           _______,        _______,
        ATREM,      ITREM,     ETREM,           UTREM,           _______,            _______,       _______,           _______,           _______,        _______, 
        _______,    YTREM,     _______,         _______,         _______,            _______,       _______,           _______,           _______,        _______,
                               TG(1),           TG(0),           _______,            _______,       TG(3),             _______,
    ),

    [_SYM] = LAYOUT_split_3x5_3(
        CA_QUOT,    CA_LABK,   CA_RABK,         CA_DQUO,         CA_DOT,             CA_AMPR,       CA_SCLN,           CA_LBRC,           CA_RBRC,        CA_PERC,
        CA_EXLM,    CA_MINS,   CA_PLUS,         CA_EQL,          CA_HASH,            CA_PIPE,       CA_COLN,           CA_LPRN,           CA_RPRN,        CA_QUES,
        CIRCON,     CA_SLSH,   CA_ASTR,         CA_BSLS,         XXXXXXX,            TILDE,         CA_DLR,            CA_LCBR,           CA_RCBR,        CA_AT,
                               TG(5),           TG(0),           KC_TAB,             KC_ENT,        TG(4),             KC_BSPC
    ),

    [_NUMBER] = LAYOUT_split_3x5_3(
       KC_ESC,      CA_DLR,    CA_COMM,         CA_8,            CA_SLSH,            CA_ASTR,       CA_9,              CA_DOT,            CA_HASH,        KC_PSCR,
       CA_6,        CA_4,      CA_2,            CA_0,            CA_MINS,            CA_PLUS,       CA_1,              CA_3,              CA_5,           CA_7,
       KC_F12,      XXXXXXX,   XXXXXXX,         CA_LPRN,         CA_UNDS,            CA_UNDS,       CA_RPRN,           XXXXXXX,           XXXXXXX,        KC_F11,
                               TG(5),           TG(0),           CA_COLN,            LALT_T(CA_EQL),TG(3),             KC_BSPC
    ),

    [_FUN] = LAYOUT_split_3x5_3(
        KC_F1,      KC_F2,     KC_F3,           KC_F4,           KC_F5,              KC_F6,         KC_F7,             KC_F8,             KC_F9,          KC_F10,
        KC_HOME,    KC_PGUP,   KC_PGDN,         KC_END,          KC_ENT,             KC_APP,        KC_LEFT,           KC_DOWN,           KC_UP,          KC_RGHT,
        CA_UNDO,    CA_CUT,    CA_COPY,         CA_PSTE,         CA_REDO,            CA_SLTA,       KC_BSPC,           KC_LALT,           KC_INS,         KC_DEL,
                               LGUI_T(KC_ESC),  TG(0),           LSFT_T(KC_TAB),     LCTL_T(KC_TAB),TG(3),             LCA_T(KC_NO)
    )



};
