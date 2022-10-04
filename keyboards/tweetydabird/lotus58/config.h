// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once
#include "config_common.h"

// USB Device descriptor parameter
#define VENDOR_ID    0xFEED
#define PRODUCT_ID   0x23B0
#define DEVICE_VER   0x0123
#define MANUFACTURER TweetyDaBird
#define PRODUCT      Lotus 58 Glow

// Keyboard Matrix (Rows are doubled)
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

#define MATRIX_ROW_PINS { D4, C6, D7, E6, B4 }
#define MATRIX_COL_PINS { B1, B2, B3, B6, F7, F6 }
#define DIODE_DIRECTION COL2ROW

#define SPLIT_HAND_PIN B5

// Encoder support
#define ENCODERS_PAD_A { F5 }
#define ENCODERS_PAD_B { F4 }
#define ENCODERS_PAD_A_RIGHT { F4 }
#define ENCODERS_PAD_B_RIGHT { F5 }
#define ENCODER_RESOLUTION 2

// Define Communication
#define SOFT_SERIAL_PIN D2
#define USE_SERIAL

#define SPLIT_MODS_ENABLE
#define SPLIT_TRANSPORT_MIRROR

// Basic RGB configuration
#define RGB_DI_PIN D3

// Full backlight
#define RGBLED_SPLIT { 29, 29 }
#define RGBLED_NUM 58

#define RGBLIGHT_EFFECT_RAINBOW_MOOD

#define RGBLIGHT_LIMIT_VAL 175
#define RGBLIGHT_DEFAULT_VAL ( RGBLIGHT_LIMIT_VAL / 2 )

#define TAPPING_TERM 175
#define TAPPING_TOGGLE 2
#define TAP_CODE_DELAY 10

// Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed
#define DEBOUNCE 5

// Bootmagic Lite key configuration
#define BOOTMAGIC_LITE_ROW 0
#define BOOTMAGIC_LITE_COLUMN 0

// reduce memory
#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define NO_ACTION_ONESHOT
#define LAYER_STATE_8BIT

// VIAL specific reduce memory
#define VIAL_COMBO_ENTRIES 4
#define VIAL_TAP_DANCE_ENTRIES 4
#define VIAL_KEY_OVERRIDE_ENTRIES 4