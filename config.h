/* Copyright 2021 B. Fletcher
 *
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* Mechanical locking support. Use KC_LCAP, KC_LNUM or KC_LSCR instead in keymap */
#define LOCKING_SUPPORT_ENABLE
/* Locking resynchronize hack */
#define LOCKING_RESYNC_ENABLE

// #define FORCE_NKRO

#undef STM32_HSECLK
#define STM32_HSECLK 8000000


#define SOFT_VER_0  1
#define SOFT_VER_1  0
#define SOFT_VER_2  2




//#define EXTERNAL_FLASH_SPI_SLAVE_SELECT_PIN B14
//#define WEAR_LEVELING_BACKING_SIZE 2048


//#define LED_CAPS_LOCK_PIN		C4

/* VIA layouts
 * 2 bits = 4 layout options
 */
//#define VIA_EEPROM_LAYOUT_OPTIONS_SIZE 2
