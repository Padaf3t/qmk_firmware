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
    switch (keycode) {
    //CIRC
    case ACIRC:
        if (record->event.pressed) {
            if((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT  ){
                clear_mod();
                clear_oneshot_mods();
                tap_code(CA_CIRC);
                tap_code(S(CA_A));
            }else{
                tap_code(CA_CIRC);
                tap_code(CA_A);
            }
        }
        break;

    case ECIRC:
        if (record->event.pressed) {
            if((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT){
                clear_mod();
                clear_oneshot_mods();
                tap_code(CA_CIRC);
                tap_code(S(CA_E));
            }else{
                tap_code(CA_CIRC);
                tap_code(CA_E);
            }
        }
        break;

    case ICIRC:
        if (record->event.pressed) {
           if((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT){
                clear_mod();
                clear_oneshot_mods();
                tap_code(CA_CIRC);
                tap_code(S(CA_I));
            }else{
                tap_code(CA_CIRC);
                tap_code(CA_I);
            }
        }
        break;
    
    case OCIRC:
        if (record->event.pressed) {
            if((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT){
                clear_mod();
                clear_oneshot_mods();
                tap_code(CA_CIRC);
                tap_code(S(CA_O));
            }else{
                tap_code(CA_CIRC);
                tap_code(CA_O);
            }
        }
        break;

    case UCIRC:
        if (record->event.pressed) {
            if((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT){
                clear_mod();
                clear_oneshot_mods();
                tap_code(CA_CIRC);
                tap_code(S(CA_U));
            }else{
                tap_code(CA_CIRC);
                tap_code(CA_U);
            }
        }
        break;

    case YCIRC:
        if (record->event.pressed) {
            if((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT){
                clear_mod();
                clear_oneshot_mods();
                tap_code(CA_CIRC);
                tap_code(S(CA_Y));
            }else{
                tap_code(CA_CIRC);
                tap_code(CA_Y);
            }
        }
        break;

    //TREMA
    case ATREM:
        if (record->event.pressed) {
            if((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT){
                clear_mod();
                clear_oneshot_mods();
                tap_code(CA_DIAE);
                tap_code(S(CA_A));
            }else{
                tap_code(CA_DIAE);
                tap_code(CA_A);
            }
        }
        break;

    case ETREM:
        if (record->event.pressed) {
            if((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT){
                clear_mod();
                clear_oneshot_mods();
                tap_code(CA_DIAE);
                tap_code(S(CA_E));
            }else{
                tap_code(CA_DIAE);
                tap_code(CA_E);
            }
        }
        break;

    case ITREM:
        if (record->event.pressed) {
           if((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT){
                clear_mod();
                clear_oneshot_mods();
                tap_code(CA_DIAE);
                tap_code(S(CA_I));
            }else{
                tap_code(CA_DIAE);
                tap_code(CA_I);
            }
        }
        break;
    
    case OTREM:
        if (record->event.pressed) {
            if((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT){
                clear_mod();
                clear_oneshot_mods();
                tap_code(CA_DIAE);
                tap_code(S(CA_O));
            }else{
                tap_code(CA_DIAE);
                tap_code(CA_O);
            }
        }
        break;

    case UTREM:
        if (record->event.pressed) {
            if((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT){
                clear_mod();
                clear_oneshot_mods();
                tap_code(CA_DIAE);
                tap_code(S(CA_U));
            }else{
                tap_code(CA_DIAE);
                tap_code(CA_U);
            }
        }
        break;

    case YTREM:
        if (record->event.pressed) {
            if((get_mods() | get_oneshot_mods()) & MOD_MASK_SHIFT){
                clear_mod();
                clear_oneshot_mods();
                tap_code(CA_DIAE);
                tap_code(S(CA_Y));
            }else{
                tap_code(CA_DIAE);
                tap_code(CA_Y);
            }
            
        }
        break;
    //SYMBOL
    case TILDE:
        if (record->event.pressed) {
            tap_code(CA_DTIL);
            tap_code(KC_SPACE);
        }
        break;

    case CIRCON:
        if (record->event.pressed) {
            tap_code(CA_CIRC);
            tap_code(KC_SPACE);
        }
        break;
    }
    return true;
};




const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_OPTIMOT] = LAYOUT_split_3x5_3(
        CA_Z,       CA_J,      CA_O,            CA_EACU,         CA_B,               CA_F,          CA_D,              CA_L,              CA_Q,           CA_X,
        CA_A,       CA_I,      LALT_T(CA_E),    LGUI_T(CA_U),    CA_COMM,            CA_P,          RGUI_T(CA_T),      RALT_T(CA_S),      CA_R,           CA_N,
        CA_K,       CA_Y,      CA_EGRV,         CA_DOT,          CA_W,               CA_G,          CA_C,              CA_M,              CA_H,           CA_V,
                               TG(1),           CA_SPC,          OSM(MOD_LSFT),      OSM(MOD_LCTL), TG(3),             KC_BSPC
    ),

    [_CIRC] = LAYOUT_split_3x5_3(
        CA_Z,       CA_J,      CA_O,            CA_EACU,         CA_B,               CA_F,          CA_D,              CA_L,              CA_Q,           CA_X,
        ACIRC,      ICIRC,     LALT_T(ECIRC)    LGUI_T(UCIRC),   CA_COMM,            CA_P,          RGUI_T(CA_T),      RALT_T(CA_S),      CA_R,           CA_N,
        CA_K,       YCIRC,     CA_EGRV,         CA_DOT,          CA_W,               CA_G,          CA_C,              CA_M,              CA_H,           CA_V,
                               TG(2),           TG(0),           OSM(MOD_LSFT),      OSM(MOD_LCTL), TG(3),             KC_BSPC
    ),

    [_TREMA] = LAYOUT_split_3x5_3(
        CA_Z,       CA_J,      CA_O,            CA_EACU,         CA_B,               CA_F,          CA_D,              CA_L,              CA_Q,           CA_X,
        ATREM,      ITREM,     LALT_T(ETREM),   LGUI_T(UTREM),   CA_COMM,            CA_P,          RGUI_T(CA_T),      RALT_T(CA_S),      CA_R,           CA_N,
        CA_K,       YTREM,     CA_EGRV,         CA_DOT,          CA_W,               CA_G,          CA_C,              CA_M,              CA_H,           CA_V,
                               TG(1),           TG(0),           OSM(MOD_LSFT),      OSM(MOD_LCTL), TG(3),             KC_BSPC
    ),

    [_SYM] = LAYOUT_split_3x5_3(
        CA_QUOT,    CA_LABK,   CA_RABK,         CA_DQUO,         CA_DOT,             CA_AMPR,       CA_SCLN,           CA_LBRC,           CA_RBRC,        CA_PERC,
        CA_EXLM,    CA_MINS,   CA_PLUS,         CA_EQL,          CA_HASH,            CA_PIPE,       CA_COLN,           CA_LPRN,           CA_RPRN,        CA_QUES,
        CIRCON,     CA_SLSH,   CA_ASTR,         CA_BSLS,         XXXXXXX,            TILDE,         CA_DLR,            CA_LCBR,           CA_RCBR,        CA_AT,
                               TG(5),           TG(0),           KC_TAB,             KC_ENT,        TG(4),             KC_BSPC
    ),

    [_NUMBER] = LAYOUT_split_3x5_3(
       KC_ESC,      XXXXXXX,   CA_COMM,         CA_8,            CA_SLSH,            CA_ASTR,       CA_9,             CA_DOT,            XXXXXXX,        XXXXXXX,
       CA_6,        CA_4,      CA_2,            CA_0,            CA_MINS,            CA_PLUS,       CA_1,             CA_3,              CA_5,           CA_7,
       XXXXXXX,     XXXXXXX,   XXXXXXX,         CA_UNDS,         CA_LPRN,            CA_RPRN,       CA_UNDS,          XXXXXXX,           XXXXXXX,        XXXXXXX,
                               TG(5),           TG(0),           LGUI_T(CA_COLN),    LGUI_T(CA_EQL),TG(3),            KC_BSPC
    ),

    [_FUN] = LAYOUT_split_3x5_3(
        KC_F1,      KC_F2,     KC_F3,           KC_F4,           KC_F5,              KC_F6,         KC_F7,             KC_F8,             KC_F9,          KC_F10,
        KC_HOME,    KC_PGUP,   KC_PGDN,         KC_END,          KC_INS,             KC_VOLU,       KC_LEFT,           KC_DOWN,           KC_UP,          KC_RGHT,
        KC_UNDO,    KC_CUT,    KC_COPY,         KC_PSTE,         KC_MPLY,            KC_VOLD,       KC_BSPC,           KC_DEL,            KC_F11,         KC_F12,
                               KC_LGUI,         TG(0),           KC_LSFT,            KC_LCTL,       TG(3),             KC_RALT
    )




};
