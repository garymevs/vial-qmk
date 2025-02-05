#ifndef CONFIG_H
#define CONFIG_H

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID       0x676D
#define PRODUCT_ID      0x0002
#define DEVICE_VER      0x0001
#define MANUFACTURER    garymevs
#define PRODUCT         accessmatrix
#define DESCRIPTION     accessmatrix

/* key matrix size */
#define MATRIX_ROWS 15
#define MATRIX_COLS 8

/* key matrix pins */
#define MATRIX_ROW_PINS { C7, C6, C5, C4, C3, C2, C1, C0, E1, E0, D7, D6, D5, D4, D3 }
#define MATRIX_COL_PINS { F0, F1, F2, F3, F4, F5, F6, F7 }
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* number of backlight levels */

#ifdef BACKLIGHT_PIN
#define BACKLIGHT_LEVELS 0
#endif

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE

/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS


#ifdef RGB_DI_PIN
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 0
#define RGBLIGHT_HUE_STEP 8
#define RGBLIGHT_SAT_STEP 8
#define RGBLIGHT_VAL_STEP 8
#endif

#endif