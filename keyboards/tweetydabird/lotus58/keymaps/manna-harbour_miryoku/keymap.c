// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "manna-harbour_miryoku.h"

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
#define MIRYOKU_X(LAYER, STRING) \
{ ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
MIRYOKU_LAYER_LIST
#undef MIRYOKU_X
};
#endif

#ifdef OLED_ENABLE

static void print_status_narrow(void) {
    // Create OLED content
    oled_write_P(PSTR("\n"), false);
    oled_write_P(PSTR(""), false);
    oled_write_P(PSTR("Lotus -58-"), false);
    oled_write_P(PSTR("\n"), false);

    // Print current layer
    oled_write_P(PSTR("Layer"), false);
    switch (get_highest_layer(layer_state)) {
#define MIRYOKU_X(LAYER, STRING) \
        case U_##LAYER: \
            oled_write_P(PSTR("-##STRING\n"), false); \
            break;
MIRYOKU_LAYER_LIST
#undef MIRYOKU_X
        default:
            oled_write_P(PSTR("Undef"), false);
    }

    // Display capslock
    oled_write_P(PSTR("\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("Caps- lock"), led_usb_state.caps_lock);

#if defined(AUTO_SHIFT_ENABLE)
    bool autoshift = get_autoshift_state();
    oled_write_P(PSTR("\n"), false);
    oled_write_P(PSTR("Auto-Shift"), autoshift);
    oled_write_P(PSTR("\n"), false);
#endif
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_left()) {
        return OLED_ROTATION_90;
    } else {
        return OLED_ROTATION_270;
    }
    return rotation;
}

bool oled_task_user(void) {
    if (is_keyboard_master()) {
        print_status_narrow();
    } else {
        print_status_narrow();
    }
    return false;
}

#endif
