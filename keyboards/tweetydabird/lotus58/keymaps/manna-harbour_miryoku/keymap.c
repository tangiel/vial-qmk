// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

#include "manna-harbour_miryoku.h"

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][2] = {
#define MIRYOKU_X(LAYER, STRING) \
    [U_##LAYER] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
MIRYOKU_LAYER_LIST
#undef MIRYOKU_X
};
#endif

#ifdef OLED_ENABLE

static void print_status_narrow(void) {
    oled_clear();
    // Create OLED content
    oled_write_P(PSTR("\n"), false);
    oled_write_P(PSTR(""), false);
    oled_write_P(PSTR("Lotus -58-"), false);
    oled_write_P(PSTR("\n"), false);

    // Print current layer
    switch (get_highest_layer(layer_state)) {
#define MIRYOKU_X(LAYER, STRING) \
        case U_##LAYER: \
            oled_write_P(PSTR(STRING "\n"), false); \
            break;
MIRYOKU_LAYER_LIST
#undef MIRYOKU_X
        default:
            oled_write_P(PSTR("Undef\n"), false);
    }

    // Display capslock
    oled_write_P(PSTR("\n"), false);
    led_t led_usb_state = host_keyboard_led_state();
    oled_write_ln_P(PSTR("Caps- lock"), led_usb_state.caps_lock);

#if defined(AUTO_SHIFT_ENABLE)
    bool autoshift = get_autoshift_state();
    oled_write_P(PSTR("\n"), false);
    oled_write_P(PSTR("Auto-Shift"), autoshift);
#endif
#ifdef UNICODEMAP_ENABLE
    oled_write_P(PSTR("\n"), false);
    switch (get_unicode_input_mode()) {
        case UC_LNX:
        oled_write_P(PSTR("Linux"), false);
        break;
        case UC_OSX:
        oled_write_P(PSTR("macOS"), false);
        break;
        case UC_WIN:
        case UC_WINC:
        oled_write_P(PSTR("Win"), false);
        break;
    }
#endif
    oled_write_P(PSTR("\n"), false);
}

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
    if (is_keyboard_left()) {
        return OLED_ROTATION_270;
    } else {
        return OLED_ROTATION_90;
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

#ifdef UNICODEMAP_ENABLE
enum unicode_names {
    EN_DASH,
    EM_DASH,
};

const uint32_t unicode_map[] PROGMEM = {
    [EN_DASH] = 0x2013,
    [EM_DASH] = 0x2014,
};
#endif