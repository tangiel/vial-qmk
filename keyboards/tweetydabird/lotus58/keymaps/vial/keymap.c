<<<<<<< Updated upstream
// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later

=======
>>>>>>> Stashed changes
#include QMK_KEYBOARD_H
#define ____ KC_TRNS

/*
void keyboard_post_init_user(void) {
	autoshift_disable();
}*/

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [0] = LAYOUT(
    KC_ESC, 	KC_1,	KC_2,	KC_3,	KC_4,	KC_5,	KC_LGUI,	KC_0,	KC_6,	KC_7,	KC_8,		KC_9,		KC_0,		KC_MINS,
    KC_TAB, 	KC_Q,	KC_W,   KC_E,   KC_R,   KC_T,                       KC_Y, 	KC_U,   KC_I,   	KC_O,   	KC_P,   	KC_LBRC,
	KC_NUHS, 	KC_A, 	KC_S,   KC_D,   KC_F,   KC_G,                       KC_H, 	KC_J,   KC_K,   	KC_L,	   	KC_SCLN,	KC_QUOT,
	KC_LCTRL, 	KC_Z, 	KC_X,   KC_C,   KC_V,   KC_B, 	KC_DOWN,	KC_UP,  KC_N, 	KC_M,   KC_COMM,	KC_DOT, 	KC_SLSH, 	KC_RCTRL,
						KC_DEL, TO(1), 		KC_LALT,	KC_RSPC,    KC_ENT, 	KC_RALT, 		TO(2), 			KC_BSPC
	),
 
    [1] = LAYOUT(
    ____, ____, ____, ____, ____, ____, ____,        ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____,        ____, ____, ____, ____, ____, ____, ____,
					  ____, ____, ____, ____,      	 ____, ____, ____, ____
    ),

    [2] = LAYOUT(
    ____, ____, ____, ____, ____, ____, ____,        ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____,        ____, ____, ____, ____, ____, ____, ____,
					  ____, ____, ____, ____,      	 ____, ____, ____, ____
    ),

    [3] = LAYOUT(
    ____, ____, ____, ____, ____, ____, ____,        ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____,                    ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____,        ____, ____, ____, ____, ____, ____, ____,
					  ____, ____, ____, ____,      	 ____, ____, ____, ____
    ),
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [1] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [2] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [3] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif

#ifdef OLED_ENABLE

<<<<<<< Updated upstream
/*
=======
>>>>>>> Stashed changes
static void render_logo(void) {
    static const char PROGMEM qmk_logo[] = {
        0x80,0x81,0x82,0x83,0x84,0x85,0x86,0x87,0x88,0x89,0x8a,0x8b,0x8c,0x8d,0x8e,0x8f,0x90,0x91,0x92,0x93,0x94,
        0xa0,0xa1,0xa2,0xa3,0xa4,0xa5,0xa6,0xa7,0xa8,0xa9,0xaa,0xab,0xac,0xad,0xae,0xaf,0xb0,0xb1,0xb2,0xb3,0xb4,
        0xc0,0xc1,0xc2,0xc3,0xc4,0xc5,0xc6,0xc7,0xc8,0xc9,0xca,0xcb,0xcc,0xcd,0xce,0xcf,0xd0,0xd1,0xd2,0xd3,0xd4,0
    };
    oled_write_P(qmk_logo, false);
}
*/

static void print_status_narrow(void) {
	// Create OLED content
    oled_write_P(PSTR("\n"), false);
	oled_write_P(PSTR(""), false);
    oled_write_P(PSTR("Lotus -58-"), false);
	oled_write_P(PSTR("\n"), false);

    // Print current layer
    oled_write_P(PSTR("Layer"), false);
    switch (get_highest_layer(layer_state)) {
        case 0:
            oled_write_P(PSTR("-Base\n"), false);
            break;
        case 1:
            oled_write_P(PSTR("-Func\n"), false);
            break;
        case 2:
            oled_write_P(PSTR("-Num \n"), false);
            break;
        case 3:
            oled_write_P(PSTR("-Sys \n"), false);
            break;
        default:
            oled_write_P(PSTR("Undef"), false);
    }
	
	// Display autoshift
    oled_write_P(PSTR("\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("Caps- lock"), led_usb_state.caps_lock);

/*	bool autoshift = get_autoshift_state();
	oled_write_P(PSTR("\n"), false);
	oled_write_P(PSTR("Auto-Shift"), autoshift);
	oled_write_P(PSTR("\n"), false);
	*/
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
	// Rotate OLED to fit
    if (is_keyboard_left()) {
        return OLED_ROTATION_90;
	}
    return OLED_ROTATION_270;
}

bool oled_task_user(void) {
	// Render the OLED
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
		print_status_narrow();    
	}
	return false;
}

<<<<<<< Updated upstream
#endif

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_QWERTY:
            if (record->event.pressed) {
                set_single_persistent_default_layer(_QWERTY);
            }
            return false;
    }
    return true;
}

layer_state_t layer_state_set_user(layer_state_t state) {
   return update_tri_layer_state(state, _NUM, _FN, _SYS);
}

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
    [_QWERTY] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_NUM] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_FN] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_SYS] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) }
};
#endif
=======
#endif
>>>>>>> Stashed changes
