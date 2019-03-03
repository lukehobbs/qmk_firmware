#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#define RGBLIGHT_ANIMATIONS    // Underglow animations.
#define RGB_DI_PIN B0          // The pin your RGB strip is wired to
#define RGBLED_NUM 38         // Number of LEDs
#define RGBLIGHT_HUE_STEP 5    // How much each press of rgb_hue changes hue
#define RGBLIGHT_SAT_STEP 10   // How much each press of rgb_sat changes sat
#define RGBLIGHT_VAL_STEP 10   // How much each press of rgb_val changes val

// Current limiting.
#define USB_MAX_POWER_CONSUMPTION 510     // Limit device max power consumption.
#define RGBSTRIP_CURRENT_LIMIT 400        // Strip current limit in mA.
#define RGBSTRIP_MAX_CURRENT_PER_LIGHT 60 // mA per light when at max brightness.

/* enable/disable LEDs based on layout */
#undef BACKLIGHT_USE_SPLIT_BACKSPACE
#define BACKLIGHT_USE_SPLIT_BACKSPACE 0

#undef BACKLIGHT_USE_SPLIT_LEFT_SHIFT
#define BACKLIGHT_USE_SPLIT_LEFT_SHIFT 0

#undef BACKLIGHT_USE_SPLIT_RIGHT_SHIFT
#define BACKLIGHT_USE_SPLIT_RIGHT_SHIFT 0

#undef BACKLIGHT_USE_7U_SPACEBAR
#define BACKLIGHT_USE_7U_SPACEBAR 1

#undef BACKLIGHT_USE_ISO_ENTER
#define BACKLIGHT_USE_ISO_ENTER 0

#undef BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS
#define BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS 0

#endif //CONFIG_USER_H
