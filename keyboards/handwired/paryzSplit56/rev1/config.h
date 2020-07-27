/*
This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x00F5
#define PRODUCT_ID      0x00A4
#define DEVICE_VER      0x0100
#define MANUFACTURER    ParyzFilip
#define PRODUCT         Split Keyboard
#define DESCRIPTION     Split handwired ortholinear keyboard

/* key matrix size */
// Rows are doubled-up
#define MATRIX_ROWS 10
#define MATRIX_COLS 6

// wiring of each half
#define MATRIX_ROW_PINS { F0, F5, D7, F6, F7 }		// TODO Determine the pins on which rows are soldered on
#define MATRIX_COL_PINS { F1, F4, B7, D2, D3, D4 }	// TODO Determine the pins on which cols are soldered on
#define MASTER_LEFT

/* COL2ROW or ROW2COL */
#define DIODE_DIRECTION COL2ROW

/* define if matrix has ghost */
//#define MATRIX_HAS_GHOST

/* Set 0 if debouncing isn't needed */
#define DEBOUNCE 3

/* serial.c configuration for split keyboard */
#define SOFT_SERIAL_PIN D0							// TODO Determine the pin to which TRRS is soldered on

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

/* ws2812 RGB LED */
#define RGB_DI_PIN B4
#define RGBLIGHT_ANIMATIONS
#define RGBLED_NUM 10
#define RGBLED_SPLIT { 5, 5 }

/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
// #define NO_DEBUG

/* disable print */
// #define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
//#define NO_ACTION_MACRO
//#define NO_ACTION_FUNCTION
