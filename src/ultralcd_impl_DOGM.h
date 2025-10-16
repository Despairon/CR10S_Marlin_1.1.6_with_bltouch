/**
 * Marlin 3D Printer Firmware
 * Copyright (C) 2016 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (C) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

/**
 * ultralcd_impl_DOGM.h
 *
 * Graphics LCD implementation for 128x64 pixel LCDs by STB for ErikZalm/Marlin
 * Demonstrator: http://www.reprap.org/wiki/STB_Electronics
 * License: http://opensource.org/licenses/BSD-3-Clause
 *
 * With the use of:
 * u8glib by Oliver Kraus
 * https://github.com/olikraus/U8glib_Arduino
 * License: http://opensource.org/licenses/BSD-3-Clause
 */

#ifndef ULTRALCD_IMPL_DOGM_H
#define ULTRALCD_IMPL_DOGM_H

#include "MarlinConfig.h"
#include "utf_mapper.h"
#include <U8glib-HAL.h>

#define FONT_STATUSMENU 1
#define FONT_SPECIAL 2
#define FONT_MENU_EDIT 3
#define FONT_MENU 4

// For selective rendering within a Y range
#define PAGE_CONTAINS(ya, yb) (PAGE_UNDER(yb) && u8g.getU8g()->current_page.y1 >= (ya))

void lcd_setFont(const char font_nr);
void lcd_implementation_init();
void lcd_implementation_status_screen();

#if ENABLED(ULTIPANEL)
  #if ENABLED(ADVANCED_PAUSE_FEATURE)
    void lcd_implementation_hotend_status(const uint8_t row);
  #endif // ADVANCED_PAUSE_FEATURE

  void lcd_implementation_clear();
  void lcd_implementation_drawmenu_static(const uint8_t row, const char* pstr, const bool center=true, const bool invert=false, const char* valstr=NULL);
  void lcd_implementation_drawmenu_generic(const bool isSelected, const uint8_t row, const char* pstr, const char pre_char, const char post_char);
  void lcd_implementation_drawedit(const char* const pstr, const char* const value=NULL);
  void drawmenu_setting_edit_generic(const bool isSelected, const uint8_t row, const char* pstr, const char* const data, const bool pgm);
  
  #if ENABLED(SDSUPPORT)
    void lcd_implementation_drawmenu_sd(const bool isSelected, const uint8_t row, const char* const pstr, const char* filename, char* const longFilename, const bool isDir);
  #endif // SDSUPPORT

  #if ENABLED(AUTO_BED_LEVELING_UBL)
    void lcd_implementation_ubl_plot(const uint8_t x_plot, const uint8_t y_plot);
  #endif // AUTO_BED_LEVELING_UBL
#endif // ULTIPANEL

#endif // __ULTRALCD_IMPL_DOGM_H
