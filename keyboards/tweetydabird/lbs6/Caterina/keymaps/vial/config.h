// Copyright 2022 Markus Knutsson (@TweetyDaBird)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define VIAL_KEYBOARD_UID {0x74, 0x05, 0x9C, 0x91, 0xD1, 0x15, 0xB2, 0x59}

#define VIAL_UNLOCK_COMBO_ROWS { 1, 2 }
#define VIAL_UNLOCK_COMBO_COLS { 0, 2 }

// RGB options not yet fully implemented in VIAL info.json
// Static glow is ALWAYS on with RGBLIGHT
#define RGBLIGHT_EFFECT_BREATHING
#define RGBLIGHT_EFFECT_RAINBOW_MOOD

#define RGBLIGHT_LIMIT_VAL 175
#define RGBLIGHT_DEFAULT_VAL ( RGBLIGHT_LIMIT_VAL / 2 )
#define RGBLIGHT_DEFAULT_MODE RGBLIGHT_MODE_RAINBOW_MOOD
#define RGBLIGHT_SLEEP

#undef LOCKING_SUPPORT_ENABLE
#undef LOCKING_RESYNC_ENABLE
#define LAYER_STATE_8BIT

// VIAL specific reduce memory
#define VIAL_COMBO_ENTRIES 4
#define VIAL_TAP_DANCE_ENTRIES 4
#define VIAL_KEY_OVERRIDE_ENTRIES 4