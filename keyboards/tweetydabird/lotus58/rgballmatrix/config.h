#pragma once

#undef RGBLIGHT_ENABLE
// #undef RGB_MATRIX_LED_COUNT
// #undef RGB_MATRIX_SPLIT
// #undef RGBLED_NUM

// #define RGBLED_NUM 70
#define RGB_MATRIX_LED_COUNT 70
#define RGB_MATRIX_SPLIT { 35, 35 }
#define RGB_DISABLE_WHEN_USB_SUSPENDED
#define RGB_MATRIX_KEYPRESSES
#define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#define RGB_MATRIX_MAXIMUM_BRIGHTNESS 175
#define RGB_MATRIX_DEFAULT_VAL (RGB_MATRIX_MAXIMUM_BRIGHTNESS / 2)
#define DRIVER_LED_TOTAL 70

#define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE
#define ENABLE_RGB_MATRIX_SOLID_REACTIVE
#define ENABLE_RGB_MATRIX_SPLASH
#define ENABLE_RGB_MATRIX_MULTISPLASH

#define I2C_DRIVER I2CD1
#define I2C0_SDA_PIN GP16
#define I2C0_SCL_PIN GP17

// #define ENCODERS_PAD_A { }
// #define ENCODERS_PAD_B { }
// #define ENCODERS_RESOLUTIONS { }
// #define ENCODERS_PAD_A_RIGHT { F5 }
// #define ENCODERS_PAD_B_RIGHT { F4 }
// #define ENCODER_RESOLUTIONS_RIGHT { 4 }
