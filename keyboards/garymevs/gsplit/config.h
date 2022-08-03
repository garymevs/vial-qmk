#ifndef CONFIG_H 
#define CONFIG_H 

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x676D
#define PRODUCT_ID 0x0004
#define DEVICE_VER 0x0001
#define MANUFACTURER garymevs
#define PRODUCT g-split
#define DESCRIPTION g-split
//TODO: VIAL stuff
#define VIAL_KEYBOARD_UID {0xF3, 0x03, 0x6B, 0xFD, 0x4B, 0x83, 0x87, 0xCC}
#define VIAL_UNLOCK_COMBO_ROWS {0, 4}
#define VIAL_UNLOCK_COMBO_COLS {0, 5}

#define SOFT_SERIAL_PIN D2
#define MASTER_LEFT

/* key matrix size */
//Rows are doubled up for splits apparently? 
#define MATRIX_ROWS 10
#define MATRIX_COLS 7

/* key matrix pins */
#define MATRIX_ROW_PINS {B2, B3, B1, F7, F6}
#define MATRIX_COL_PINS {B5, B4, E6, D7, C6, D4, B6}
#define UNUSED_PINS

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* Set 0 if debouncing isn't needed */
#define DEBOUNCING_DELAY 5

/* key combination for command */
#define IS_COMMAND() ( \
    keyboard_report->mods == (MOD_BIT(KC_LSHIFT) | MOD_BIT(KC_RSHIFT)) \
)

/* prevent stuck modifiers */
#define PREVENT_STUCK_MODIFIERS

#endif