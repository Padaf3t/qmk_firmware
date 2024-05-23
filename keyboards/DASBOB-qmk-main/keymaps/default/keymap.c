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
const uint16_t PROGMEM combo_agrv[] = {CA_O, CA_EACU, COMBO_END};
const uint16_t PROGMEM combo_underline[] = {CA_Y, CA_EGRV, COMBO_END};
const uint16_t PROGMEM combo_dash[] = {CA_EGRV, CA_COMM, COMBO_END};
const uint16_t PROGMEM combo_cced[] = {CA_M, CA_H, COMBO_END};
const uint16_t PROGMEM combo_ugrv[] = {CA_C, CA_M, COMBO_END};
combo_t key_combos[] = {
    COMBO(combo_agrv, CA_AGRV),
    COMBO(combo_underline, CA_UNDS),
    COMBO(combo_dash, CA_MINS),
    COMBO(combo_cced, CA_CCED),
    COMBO(combo_ugrv, CA_UGRV)
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
            if(MOD_MASK_SHIFT){
                clear_mod();
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
            if(MOD_MASK_SHIFT){
                clear_mod();
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
           if(MOD_MASK_SHIFT){
                clear_mod();
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
            if(MOD_MASK_SHIFT){
                clear_mod();
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
            if(MOD_MASK_SHIFT){
                clear_mod();
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
            if(MOD_MASK_SHIFT){
                clear_mod();
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
            if(MOD_MASK_SHIFT){
                clear_mod();
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
            if(MOD_MASK_SHIFT){
                clear_mod();
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
           if(MOD_MASK_SHIFT){
                clear_mod();
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
            if(MOD_MASK_SHIFT){
                clear_mod();
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
            if(MOD_MASK_SHIFT){
                clear_mod();
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
            
            if(MOD_MASK_SHIFT){
                clear_mod();
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
       KC_ESC,      XXXXXXX,   CA_COMM,         CA_8,            CA_SLSH,            CA_ASTR,        CA_9,             CA_DOT,            XXXXXXX,        XXXXXXX,
       CA_6,        CA_4,      CA_2,            CA_0,            CA_MINS,            CA_PLUS,        CA_1,             CA_3,              CA_5,           CA_7,
       XXXXXXX,     XXXXXXX,   XXXXXXX,         CA_UNDS,         XXXXXXX,            XXXXXXX,        CA_UNDS,          XXXXXXX,           XXXXXXX,        XXXXXXX,
                               TG(5),           TG(0),           CA_COLN,            CA_EQL,         TG(3),            KC_BSPC
    ),

    [_FUN] = LAYOUT_split_3x5_3(
        XXXXXXX,    XXXXXXX,   XXXXXXX,         XXXXXXX,         XXXXXXX,            XXXXXXX,       XXXXXXX,           XXXXXXX,           XXXXXXX,        XXXXXXX,
        XXXXXXX,    XXXXXXX,   XXXXXXX,         XXXXXXX,         XXXXXXX,            XXXXXXX,       XXXXXXX,           XXXXXXX,           XXXXXXX,        XXXXXXX,
        XXXXXXX,    XXXXXXX,   XXXXXXX,         XXXXXXX,         XXXXXXX,            XXXXXXX,       XXXXXXX,           XXXXXXX,           XXXXXXX,        XXXXXXX,
                               KC_RALT,         TG(0),           KC_LGUI,            OSM(MOD_LCTL), TG(3),             KC_BSPC
    )




};
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) { return OLED_ROTATION_0; }
bool oled_task_user(void) {
    if (is_keyboard_master()) {
        static const char PROGMEM runqmk_logo[] = {0,0,0,0,152,152,152,152,152,152,24,24,24,
        152,152,24,24,24,152,152,24,24,152,152,24,24,24,152,152,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,127,127,13,13,29,63,103,64,0,63,127,96,96,96,127,63,0,0,127,127,7,12,56,
        127,127,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,120,252,134,198,198,252,120,0,0,254,254,
        60,224,224,60,254,254,0,254,254,16,24,124,230,130,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,24,24,25,25,25,25,27,24,24,25,25,24,25,25,24,25,25,24,25,25,24,24,24,24,25,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
        0,0,0,0,0,0,0,0,0,0};


        oled_write_raw_P(runqmk_logo, sizeof(runqmk_logo));

        led_t led_usb_state = host_keyboard_led_state();
        oled_set_cursor(6, 3);
        oled_write_P(led_usb_state.num_lock    ? PSTR("NUM") : PSTR(""), false);
        oled_set_cursor(6, 2);
        oled_write_P(PSTR("WPM: "), false);
        oled_write(get_u8_str(get_current_wpm(), '0'), false);
        oled_set_cursor(6, 0);
        oled_write_P(PSTR("by GroooveBob"), false);
            oled_set_cursor(6, 1);
            oled_write_P(PSTR("Layer: "), false);

    switch (get_highest_layer(layer_state)) {
        case _QWERTY:
        oled_set_cursor(12, 1);
            oled_write_P(PSTR("Default\n"), false);
            break;
        case _LOWER:
        oled_set_cursor(12, 1);
            oled_write_P(PSTR("Lower\n"), false);
            break;
        case _RAISE:
        oled_set_cursor(12, 1);
            oled_write_P(PSTR("Raise\n"), false);
            break;
        default:
            // Or use the write_ln shortcut over adding '\n' to the end of your string
        oled_set_cursor(6, 1);
        oled_write_ln_P(PSTR("Undefined"), false);
    }
    } else {
        static const char PROGMEM dasbob_logo[] = {
        0,  0,  0,  0,  0,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,  0,  0,  0,  0,  0,128,128,128,192,192,192,192,192,192,192,192,192,192,192,128,128,  0,  0,  0,  0,  0,  0,  0,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,  0,  0,  0,  0,  0,128,128,128,128,128,128,128,128,128,128,128,128,128,  0,  0,  0,128,128,128,128,128,192,192,192,192,192,  0,  0,  0,128,128,128,128,128,128,128,128,128,  0,  0,  0,  0,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,128,  0,  0,
        0,  0,126,127,255,255,255,255,255,255,255,199,247,255,255,255,255,255,255,255,255,127,252,255,255,255,255,255,255,255,255,255, 15,127,255,255,255,255,255,255,255,255,254,248,  0,126,127,255,255,255,255,255,255,255,199,247,255,255,255,255,255,255,255,255,127,126,255,255,255,255,255,255,255,255,239,239,239,239,207,223,223,223,159, 63,  0,  7, 63,255,255,255,255,255,255,255,254, 14,254,255,255,255,255,255,255,255, 63,241,252,254,255,255,255,255,255,255,255, 31,255,255,255,255,255,255,255,255,255,255,128,  0,
        0,  0,126,255,255,255,255,255,255,255,255,227,255,255,255,255,255,255,255,255,255,  0, 15, 63,127,255,255,255,255,255,255,255,248,255,255,255,255,255,255,255,255,127, 63,  7,  0,126,255,255,255,255,255,255,255,255,227,255,255,255,255,255,255,255,255,255,128,252,253,249,249,251,251,251,251,251,255,255,255,255,255,255,255,255,127, 30,  0,  0,  0,  3, 31,255,255,255,255,255,255,255,255,255,255,255,255,255,255,  7,  0, 63,255,255,255,255,255,255,255,255,255,248,255,255,255,255,255,255,255,255,255,255,255,  0,
        0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,  0,  0,  0,  0,  0,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  1,  0,
        };
        oled_write_raw_P(dasbob_logo, sizeof(dasbob_logo));
    }
    return false;
}
#endif
