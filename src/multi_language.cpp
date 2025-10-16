#include "language.h"
#include <avr/eeprom.h>
#include <avr/pgmspace.h>

#define LANG_EEPROM_OFFSET 99

static language_t current_lang = LANGUAGE_DEFAULT; // 0:en, 1:uk

void language_write(const language_t language)
{
  switch (language)
  {
    case ENGLISH:
	case UKRAINIAN:
	{
	  eeprom_write_byte((unsigned char*)LANG_EEPROM_OFFSET, (unsigned char)language);
	  current_lang = language;
	}
	break;

	default:
	break;
  }
}

language_t language_read() 
{
  current_lang = (language_t)eeprom_read_byte((unsigned char*)LANG_EEPROM_OFFSET);

  return current_lang;
}

language_t get_current_language()
{
  return current_lang;
}

/* WELCOME_MSG*/
const char* msg_welcome()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(WELCOME_MSG);
		case UKRAINIAN:
			return PSTR(UK_WELCOME_MSG);
	}
	return PSTR(WELCOME_MSG);
}

/* MSG_BACK */
const char* msg_back()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BACK);
		case UKRAINIAN:
			return PSTR(UK_MSG_BACK);
	}
	return PSTR(MSG_BACK);
}

/* MSG_SD_INSERTED */
const char* msg_sd_inserted()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_SD_INSERTED);
		case UKRAINIAN:
			return PSTR(UK_MSG_SD_INSERTED);
	}
	return PSTR(MSG_SD_INSERTED);
}

/* MSG_SD_REMOVED */
const char* msg_sd_removed()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_SD_REMOVED);
		case UKRAINIAN:
			return PSTR(UK_MSG_SD_REMOVED);
	}
	return PSTR(MSG_SD_REMOVED);
}

/* MSG_MAIN */
const char* msg_main()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MAIN);
		case UKRAINIAN:
			return PSTR(UK_MSG_MAIN);
	}
	return PSTR(MSG_MAIN);
}

/* MSG_AUTOSTART */
const char* msg_autostart()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AUTOSTART);
		case UKRAINIAN:
			return PSTR(UK_MSG_AUTOSTART);
	}
	return PSTR(MSG_AUTOSTART);
}

/* MSG_DISABLE_STEPPERS */
const char* msg_disable_steppers()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_DISABLE_STEPPERS);
		case UKRAINIAN:
			return PSTR(UK_MSG_DISABLE_STEPPERS);
	}
	return PSTR(MSG_DISABLE_STEPPERS);
}

/* MSG_DEBUG_MENU */
const char* msg_debug_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_DEBUG_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_DEBUG_MENU);
	}
	return PSTR(MSG_DEBUG_MENU);
}

/* MSG_PROGRESS_BAR_TEST */
const char* msg_progress_bar_test()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PROGRESS_BAR_TEST);
		case UKRAINIAN:
			return PSTR(UK_MSG_PROGRESS_BAR_TEST);
	}
	return PSTR(MSG_PROGRESS_BAR_TEST);
}

/* MSG_AUTO_HOME */
const char* msg_auto_home()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AUTO_HOME);
		case UKRAINIAN:
			return PSTR(UK_MSG_AUTO_HOME);
	}
	return PSTR(MSG_AUTO_HOME);
}

/* MSG_AUTO_HOME_X */
const char* msg_auto_home_x()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AUTO_HOME_X);
		case UKRAINIAN:
			return PSTR(UK_MSG_AUTO_HOME_X);
	}
	return PSTR(MSG_AUTO_HOME_X);
}

/* MSG_AUTO_HOME_Y */
const char* msg_auto_home_y()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AUTO_HOME_Y);
		case UKRAINIAN:
			return PSTR(UK_MSG_AUTO_HOME_Y);
	}
	return PSTR(MSG_AUTO_HOME_Y);
}

/* MSG_AUTO_HOME_Z */
const char* msg_auto_home_z()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AUTO_HOME_Z);
		case UKRAINIAN:
			return PSTR(UK_MSG_AUTO_HOME_Z);
	}
	return PSTR(MSG_AUTO_HOME_Z);
}

/* MSG_LEVEL_BED_HOMING */
const char* msg_level_bed_homing()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_LEVEL_BED_HOMING);
		case UKRAINIAN:
			return PSTR(UK_MSG_LEVEL_BED_HOMING);
	}
	return PSTR(MSG_LEVEL_BED_HOMING);
}

/* MSG_LEVEL_BED_WAITING */
const char* msg_level_bed_waiting()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_LEVEL_BED_WAITING);
		case UKRAINIAN:
			return PSTR(UK_MSG_LEVEL_BED_WAITING);
	}
	return PSTR(MSG_LEVEL_BED_WAITING);
}

/* MSG_LEVEL_BED_NEXT_POINT */
const char* msg_level_bed_next_point()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_LEVEL_BED_NEXT_POINT);
		case UKRAINIAN:
			return PSTR(UK_MSG_LEVEL_BED_NEXT_POINT);
	}
	return PSTR(MSG_LEVEL_BED_NEXT_POINT);
}

/* MSG_LEVEL_BED_DONE */
const char* msg_level_bed_done()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_LEVEL_BED_DONE);
		case UKRAINIAN:
			return PSTR(UK_MSG_LEVEL_BED_DONE);
	}
	return PSTR(MSG_LEVEL_BED_WAITING);
}

/* MSG_Z_FADE_HEIGHT */
const char* msg_z_fade_height()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_Z_FADE_HEIGHT);
		case UKRAINIAN:
			return PSTR(UK_MSG_Z_FADE_HEIGHT);
	}
	return PSTR(MSG_Z_FADE_HEIGHT);
}

/* MSG_SET_HOME_OFFSETS */
const char* msg_set_home_offsets()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_SET_HOME_OFFSETS);
		case UKRAINIAN:
			return PSTR(UK_MSG_SET_HOME_OFFSETS);
	}
	return PSTR(MSG_SET_HOME_OFFSETS);
}

/* MSG_HOME_OFFSETS_APPLIED */
const char* msg_home_offsets_applied()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_HOME_OFFSETS_APPLIED);
		case UKRAINIAN:
			return PSTR(UK_MSG_HOME_OFFSETS_APPLIED);
	}
	return PSTR(MSG_HOME_OFFSETS_APPLIED);
}

/* MSG_SET_ORIGIN */
const char* msg_set_origin()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_SET_ORIGIN);
		case UKRAINIAN:
			return PSTR(UK_MSG_SET_ORIGIN);
	}
	return PSTR(MSG_SET_ORIGIN);
}

/* MSG_PREHEAT_1 */
const char* msg_preheat_1()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1);
	}
	return PSTR(MSG_PREHEAT_1);
}

/* MSG_PREHEAT_1_N1 */
const char* msg_preheat_1_n1()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_N MSG_H1);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_N MSG_H1);
	}
	return PSTR(MSG_PREHEAT_1_N MSG_H1);
}

/* MSG_PREHEAT_1_N2 */
const char* msg_preheat_1_n2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_N MSG_H2);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_N MSG_H2);
	}
	return PSTR(MSG_PREHEAT_1_N MSG_H2);
}

/* MSG_PREHEAT_1_N3 */
const char* msg_preheat_1_n3()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_N MSG_H3);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_N MSG_H3);
	}
	return PSTR(MSG_PREHEAT_1_N MSG_H3);
}

/* MSG_PREHEAT_1_N4 */
const char* msg_preheat_1_n4()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_N MSG_H4);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_N MSG_H4);
	}
	return PSTR(MSG_PREHEAT_1_N MSG_H4);
}

/* MSG_PREHEAT_1_N5 */
const char* msg_preheat_1_n5()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_N MSG_H5);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_N MSG_H5);
	}
	return PSTR(MSG_PREHEAT_1_N MSG_H5);
}

/* MSG_PREHEAT_1_ALL */
const char* msg_preheat_1_all()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_ALL);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_ALL);
	}
	return PSTR(MSG_PREHEAT_1_ALL);
}

/* MSG_PREHEAT_1_END */
const char* msg_preheat_1_end()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_END);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_END);
	}
	return PSTR(MSG_PREHEAT_1_END);
}

/* MSG_PREHEAT_1_END1 */
const char* msg_preheat_1_end1()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_END " " MSG_E1);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_END " " MSG_E1);
	}
	return PSTR(MSG_PREHEAT_1_END " " MSG_E1);
}

/* MSG_PREHEAT_1_END2 */
const char* msg_preheat_1_end2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_END " " MSG_E2);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_END " " MSG_E2);
	}
	return PSTR(MSG_PREHEAT_1_END " " MSG_E2);
}

/* MSG_PREHEAT_1_END3 */
const char* msg_preheat_1_end3()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_END " " MSG_E3);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_END " " MSG_E3);
	}
	return PSTR(MSG_PREHEAT_1_END " " MSG_E3);
}

/* MSG_PREHEAT_1_END4 */
const char* msg_preheat_1_end4()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_END " " MSG_E4);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_END " " MSG_E4);
	}
	return PSTR(MSG_PREHEAT_1_END " " MSG_E4);
}

/* MSG_PREHEAT_1_END5 */
const char* msg_preheat_1_end5()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_END " " MSG_E5);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_END " " MSG_E5);
	}
	return PSTR(MSG_PREHEAT_1_END " " MSG_E5);
}

/* MSG_PREHEAT_1_BEDONLY */
const char* msg_preheat_1_bedonly()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_BEDONLY);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_BEDONLY);
	}
	return PSTR(MSG_PREHEAT_1_BEDONLY);
}

/* MSG_PREHEAT_1_SETTINGS */
const char* msg_preheat_1_setting()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_1_SETTINGS);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_1_SETTINGS);
	}
	return PSTR(MSG_PREHEAT_1_SETTINGS);
}

/* MSG_PREHEAT_2 */
const char* msg_preheat_2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2);
	}
	return PSTR(MSG_PREHEAT_2);
}

/* MSG_PREHEAT_2_N1 */
const char* msg_preheat_2_n1()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_N MSG_H1);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_N MSG_H1);
	}
	return PSTR(MSG_PREHEAT_2_N MSG_H1);
}

/* MSG_PREHEAT_2_N2 */
const char* msg_preheat_2_n2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_N MSG_H2);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_N MSG_H2);
	}
	return PSTR(MSG_PREHEAT_2_N MSG_H2);
}

/* MSG_PREHEAT_2_N3 */
const char* msg_preheat_2_n3()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_N MSG_H3);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_N MSG_H3);
	}
	return PSTR(MSG_PREHEAT_2_N MSG_H3);
}

/* MSG_PREHEAT_2_N4 */
const char* msg_preheat_2_n4()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_N MSG_H4);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_N MSG_H4);
	}
	return PSTR(MSG_PREHEAT_2_N MSG_H4);
}

/* MSG_PREHEAT_2_N5 */
const char* msg_preheat_2_n5()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_N MSG_H5);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_N MSG_H5);
	}
	return PSTR(MSG_PREHEAT_2_N MSG_H5);
}

/* MSG_PREHEAT_2_ALL */
const char* msg_preheat_2_all()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_ALL);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_ALL);
	}
	return PSTR(MSG_PREHEAT_2_ALL);
}

/* MSG_PREHEAT_2_END */
const char* msg_preheat_2_end()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_END);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_END);
	}
	return PSTR(MSG_PREHEAT_2_END);
}

/* MSG_PREHEAT_2_END1 */
const char* msg_preheat_2_end1()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_END " " MSG_E1);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_END " " MSG_E1);
	}
	return PSTR(MSG_PREHEAT_2_END " " MSG_E1);
}

/* MSG_PREHEAT_2_END2 */
const char* msg_preheat_2_end2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_END " " MSG_E2);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_END " " MSG_E2);
	}
	return PSTR(MSG_PREHEAT_2_END " " MSG_E2);
}

/* MSG_PREHEAT_2_END3 */
const char* msg_preheat_2_end3()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_END " " MSG_E3);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_END " " MSG_E3);
	}
	return PSTR(MSG_PREHEAT_2_END " " MSG_E3);
}

/* MSG_PREHEAT_2_END4 */
const char* msg_preheat_2_end4()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_END " " MSG_E4);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_END " " MSG_E4);
	}
	return PSTR(MSG_PREHEAT_2_END " " MSG_E4);
}

/* MSG_PREHEAT_2_END5 */
const char* msg_preheat_2_end5()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_END " " MSG_E5);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_END " " MSG_E5);
	}
	return PSTR(MSG_PREHEAT_2_END " " MSG_E5);
}

/* MSG_PREHEAT_2_BEDONLY */
const char* msg_preheat_2_bedonly()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_BEDONLY);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_BEDONLY);
	}
	return PSTR(MSG_PREHEAT_2_BEDONLY);
}

/* MSG_PREHEAT_2_SETTINGS */
const char* msg_preheat_2_settings()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREHEAT_2_SETTINGS);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREHEAT_2_SETTINGS);
	}
	return PSTR(MSG_PREHEAT_2_SETTINGS);
}

/* MSG_COOLDOWN */
const char* msg_cooldown()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_COOLDOWN);
		case UKRAINIAN:
			return PSTR(UK_MSG_COOLDOWN);
	}
	return PSTR(MSG_COOLDOWN);
}

/* MSG_SWITCH_PS_ON */
const char* msg_switch_ps_on()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_SWITCH_PS_ON);
		case UKRAINIAN:
			return PSTR(UK_MSG_SWITCH_PS_ON);
	}
	return PSTR(MSG_SWITCH_PS_ON);
}

/* MSG_SWITCH_PS_OFF */
const char* msg_switch_ps_off()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_SWITCH_PS_OFF);
		case UKRAINIAN:
			return PSTR(UK_MSG_SWITCH_PS_OFF);
	}
	return PSTR(MSG_SWITCH_PS_OFF);
}

/* MSG_EXTRUDE */
const char* msg_extrude()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_EXTRUDE);
		case UKRAINIAN:
			return PSTR(UK_MSG_EXTRUDE);
	}
	return PSTR(MSG_EXTRUDE);
}

/* MSG_RETRACT */
const char* msg_retract()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_RETRACT);
		case UKRAINIAN:
			return PSTR(UK_MSG_RETRACT);
	}
	return PSTR(MSG_RETRACT);
}

/* MSG_MOVE_AXIS */
const char* msg_move_axis()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_AXIS);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_AXIS);
	}
	return PSTR(MSG_MOVE_AXIS);
}

/* MSG_BED_LEVELING */
const char* msg_bed_leveling()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BED_LEVELING);
		case UKRAINIAN:
			return PSTR(UK_MSG_BED_LEVELING);
	}
	return PSTR(MSG_BED_LEVELING);
}

/* MSG_LEVEL_BED */
const char* msg_level_bed()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_LEVEL_BED);
		case UKRAINIAN:
			return PSTR(UK_MSG_LEVEL_BED);
	}
	return PSTR(MSG_LEVEL_BED);
}

/* MSG_LEVEL_CORNERS */
const char* msg_level_corners()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_LEVEL_CORNERS);
		case UKRAINIAN:
			return PSTR(UK_MSG_LEVEL_CORNERS);
	}
	return PSTR(MSG_LEVEL_CORNERS);
}

/* MSG_NEXT_CORNER */
const char* msg_next_corner()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_NEXT_CORNER);
		case UKRAINIAN:
			return PSTR(UK_MSG_NEXT_CORNER);
	}
	return PSTR(MSG_NEXT_CORNER);
}

/* MSG_USER_MENU */
const char* msg_user_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_USER_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_USER_MENU);
	}
	return PSTR(MSG_USER_MENU);
}

/* MSG_UBL_TOOLS */
const char* msg_ubl_tools()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_TOOLS);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_TOOLS);
	}
	return PSTR(MSG_UBL_TOOLS);
}

/* MSG_UBL_LEVEL_BED */
const char* msg_ubl_level_bed()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_LEVEL_BED);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_LEVEL_BED);
	}
	return PSTR(MSG_UBL_LEVEL_BED);
}

/* MSG_UBL_MANUAL_MESH */
const char* msg_ubl_manual_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_MANUAL_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_MANUAL_MESH);
	}
	return PSTR(MSG_UBL_MANUAL_MESH);
}

/* MSG_UBL_ACTIVATE_MESH */
const char* msg_ubl_activate_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_ACTIVATE_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_ACTIVATE_MESH);
	}
	return PSTR(MSG_UBL_ACTIVATE_MESH);
}

/* MSG_UBL_DEACTIVATE_MESH */
const char* msg_ubl_deactivate_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_DEACTIVATE_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_DEACTIVATE_MESH);
	}
	return PSTR(MSG_UBL_DEACTIVATE_MESH);
}

/* MSG_UBL_CUSTOM_BED_TEMP */
const char* msg_ubl_custom_bed_temp()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_CUSTOM_BED_TEMP);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_CUSTOM_BED_TEMP);
	}
	return PSTR(MSG_UBL_CUSTOM_BED_TEMP);
}

/* MSG_UBL_SET_HOTEND_TEMP */
const char* msg_ubl_set_hotend_temp()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_SET_HOTEND_TEMP);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_SET_HOTEND_TEMP);
	}
	return PSTR(MSG_UBL_SET_HOTEND_TEMP);
}

/* MSG_UBL_CUSTOM_HOTEND_TEMP */
const char* msg_ubl_custom_hotend_temp()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_CUSTOM_HOTEND_TEMP);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_CUSTOM_HOTEND_TEMP);
	}
	return PSTR(MSG_UBL_CUSTOM_HOTEND_TEMP);
}

/* MSG_UBL_MESH_EDIT */
const char* msg_ubl_mesh_edit()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_MESH_EDIT);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_MESH_EDIT);
	}
	return PSTR(MSG_UBL_MESH_EDIT);
}

/* MSG_UBL_BUILD_CUSTOM_MESH */
const char* msg_ubl_build_custom_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_BUILD_CUSTOM_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_BUILD_CUSTOM_MESH);
	}
	return PSTR(MSG_UBL_BUILD_CUSTOM_MESH);
}

/* MSG_UBL_BUILD_MESH_MENU */
const char* msg_ubl_build_mesh_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_BUILD_MESH_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_BUILD_MESH_MENU);
	}
	return PSTR(MSG_UBL_BUILD_MESH_MENU);
}

/* MSG_UBL_BUILD_PLA_MESH */
const char* msg_ubl_build_pla_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_BUILD_PLA_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_BUILD_PLA_MESH);
	}
	return PSTR(MSG_UBL_BUILD_PLA_MESH);
}

/* MSG_UBL_BUILD_ABS_MESH */
const char* msg_ubl_build_abs_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_BUILD_ABS_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_BUILD_ABS_MESH);
	}
	return PSTR(MSG_UBL_BUILD_ABS_MESH);
}

/* MSG_UBL_BUILD_COLD_MESH */
const char* msg_ubl_build_cold_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_BUILD_COLD_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_BUILD_COLD_MESH);
	}
	return PSTR(MSG_UBL_BUILD_COLD_MESH);
}

/* MSG_UBL_MESH_HEIGHT_ADJUST */
const char* msg_ubl_mesh_height_adjust()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_MESH_HEIGHT_ADJUST);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_MESH_HEIGHT_ADJUST);
	}
	return PSTR(MSG_UBL_MESH_HEIGHT_ADJUST);
}

/* MSG_UBL_MESH_HEIGHT_AMOUNT */
const char* msg_ubl_mesh_height_amount()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_MESH_HEIGHT_AMOUNT);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_MESH_HEIGHT_AMOUNT);
	}
	return PSTR(MSG_UBL_MESH_HEIGHT_AMOUNT);
}

/* MSG_UBL_VALIDATE_MESH_MENU */
const char* msg_ubl_validate_mesh_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_VALIDATE_MESH_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_VALIDATE_MESH_MENU);
	}
	return PSTR(MSG_UBL_VALIDATE_MESH_MENU);
}

/* MSG_UBL_VALIDATE_PLA_MESH */
const char* msg_ubl_validate_pla_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_VALIDATE_PLA_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_VALIDATE_PLA_MESH);
	}
	return PSTR(MSG_UBL_VALIDATE_PLA_MESH);
}

/* MSG_UBL_VALIDATE_ABS_MESH */
const char* msg_ubl_validate_abs_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_VALIDATE_ABS_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_VALIDATE_ABS_MESH);
	}
	return PSTR(MSG_UBL_VALIDATE_ABS_MESH);
}

/* MSG_UBL_VALIDATE_CUSTOM_MESH */
const char* msg_ubl_validate_custom_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_VALIDATE_CUSTOM_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_VALIDATE_CUSTOM_MESH);
	}
	return PSTR(MSG_UBL_VALIDATE_CUSTOM_MESH);
}

/* MSG_UBL_CONTINUE_MESH */
const char* msg_ubl_continue_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_CONTINUE_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_CONTINUE_MESH);
	}
	return PSTR(MSG_UBL_CONTINUE_MESH);
}

/* MSG_UBL_MESH_LEVELING */
const char* msg_ubl_mesh_leveling()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_MESH_LEVELING);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_MESH_LEVELING);
	}
	return PSTR(MSG_UBL_MESH_LEVELING);
}

/* MSG_UBL_3POINT_MESH_LEVELING */
const char* msg_ubl_3point_mesh_leveling()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_3POINT_MESH_LEVELING);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_3POINT_MESH_LEVELING);
	}
	return PSTR(MSG_UBL_3POINT_MESH_LEVELING);
}

/* MSG_UBL_GRID_MESH_LEVELING */
const char* msg_ubl_grid_mesh_leveling()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_GRID_MESH_LEVELING);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_GRID_MESH_LEVELING);
	}
	return PSTR(MSG_UBL_GRID_MESH_LEVELING);
}

/* MSG_UBL_MESH_LEVEL */
const char* msg_ubl_mesh_level()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_MESH_LEVEL);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_MESH_LEVEL);
	}
	return PSTR(MSG_UBL_MESH_LEVEL);
}

/* MSG_UBL_SIDE_POINTS */
const char* msg_ubl_side_points()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_SIDE_POINTS);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_SIDE_POINTS);
	}
	return PSTR(MSG_UBL_SIDE_POINTS);
}

/* MSG_UBL_OUTPUT_MAP */
const char* msg_ubl_output_map()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_OUTPUT_MAP);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_OUTPUT_MAP);
	}
	return PSTR(MSG_UBL_OUTPUT_MAP);
}

/* MSG_UBL_OUTPUT_MAP_HOST */
const char* msg_ubl_output_map_host()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_OUTPUT_MAP_HOST);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_OUTPUT_MAP_HOST);
	}
	return PSTR(MSG_UBL_OUTPUT_MAP_HOST);
}

/* MSG_UBL_OUTPUT_MAP_CSV */
const char* msg_ubl_output_map_csv()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_OUTPUT_MAP_CSV);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_OUTPUT_MAP_CSV);
	}
	return PSTR(MSG_UBL_OUTPUT_MAP_CSV);
}

/* MSG_UBL_OUTPUT_MAP_BACKUP */
const char* msg_ubl_output_map_backup()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_OUTPUT_MAP_BACKUP);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_OUTPUT_MAP_BACKUP);
	}
	return PSTR(MSG_UBL_OUTPUT_MAP_BACKUP);
}

/* MSG_UBL_INFO_UBL */
const char* msg_ubl_info_ubl()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_INFO_UBL);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_INFO_UBL);
	}
	return PSTR(MSG_UBL_INFO_UBL);
}

/* MSG_UBL_EDIT_MESH_MENU */
const char* msg_ubl_edit_mesh_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_EDIT_MESH_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_EDIT_MESH_MENU);
	}
	return PSTR(MSG_UBL_EDIT_MESH_MENU);
}

/* MSG_UBL_FILLIN_AMOUNT */
const char* msg_ubl_fillin_amount()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_FILLIN_AMOUNT);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_FILLIN_AMOUNT);
	}
	return PSTR(MSG_UBL_FILLIN_AMOUNT);
}

/* MSG_UBL_FILLIN_AMOUNT */
const char* msg_ubl_manual_fillin()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_MANUAL_FILLIN);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_MANUAL_FILLIN);
	}
	return PSTR(MSG_UBL_MANUAL_FILLIN);
}

/* MSG_UBL_SMART_FILLIN */
const char* msg_ubl_smart_fillin()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_SMART_FILLIN);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_SMART_FILLIN);
	}
	return PSTR(MSG_UBL_SMART_FILLIN);
}

/* MSG_UBL_FILLIN_MESH */
const char* msg_ubl_fillin_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_FILLIN_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_FILLIN_MESH);
	}
	return PSTR(MSG_UBL_FILLIN_MESH);
}

/* MSG_UBL_INVALIDATE_ALL */
const char* msg_ubl_invalidate_all()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_INVALIDATE_ALL);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_INVALIDATE_ALL);
	}
	return PSTR(MSG_UBL_INVALIDATE_ALL);
}

/* MSG_UBL_INVALIDATE_CLOSEST */
const char* msg_ubl_invalidate_closest()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_INVALIDATE_CLOSEST);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_INVALIDATE_CLOSEST);
	}
	return PSTR(MSG_UBL_INVALIDATE_CLOSEST);
}

/* MSG_UBL_FINE_TUNE_ALL */
const char* msg_ubl_fine_tune_all()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_FINE_TUNE_ALL);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_FINE_TUNE_ALL);
	}
	return PSTR(MSG_UBL_FINE_TUNE_ALL);
}

/* MSG_UBL_FINE_TUNE_CLOSEST */
const char* msg_ubl_fine_tune_closest()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_FINE_TUNE_CLOSEST);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_FINE_TUNE_CLOSEST);
	}
	return PSTR(MSG_UBL_FINE_TUNE_CLOSEST);
}

/* MSG_UBL_STORAGE_MESH_MENU */
const char* msg_ubl_storage_mesh_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_STORAGE_MESH_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_STORAGE_MESH_MENU);
	}
	return PSTR(MSG_UBL_STORAGE_MESH_MENU);
}

/* MSG_UBL_STORAGE_SLOT */
const char* msg_ubl_storage_slot()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_STORAGE_SLOT);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_STORAGE_SLOT);
	}
	return PSTR(MSG_UBL_STORAGE_SLOT);
}

/* MSG_UBL_LOAD_MESH */
const char* msg_ubl_load_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_LOAD_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_LOAD_MESH);
	}
	return PSTR(MSG_UBL_LOAD_MESH);
}

/* MSG_UBL_SAVE_MESH */
const char* msg_ubl_save_mesh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_SAVE_MESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_SAVE_MESH);
	}
	return PSTR(MSG_UBL_SAVE_MESH);
}

/* MSG_MESH_LOADED */
const char* msg_mesh_loaded()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MESH_LOADED);
		case UKRAINIAN:
			return PSTR(UK_MSG_MESH_LOADED);
	}
	return PSTR(MSG_MESH_LOADED);
}

/* MSG_MESH_SAVED */
const char* msg_mesh_saved()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MESH_SAVED);
		case UKRAINIAN:
			return PSTR(UK_MSG_MESH_SAVED);
	}
	return PSTR(MSG_MESH_SAVED);
}

/* MSG_NO_STORAGE */
const char* msg_no_storage()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_NO_STORAGE);
		case UKRAINIAN:
			return PSTR(UK_MSG_NO_STORAGE);
	}
	return PSTR(MSG_NO_STORAGE);
}

/* MSG_UBL_STEP_BY_STEP_MENU */
const char* msg_ubl_step_by_step_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_STEP_BY_STEP_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_STEP_BY_STEP_MENU);
	}
	return PSTR(MSG_UBL_STEP_BY_STEP_MENU);
}

/* MSG_FREE_XY */
const char* msg_free_xy()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FREE_XY);
		case UKRAINIAN:
			return PSTR(UK_MSG_FREE_XY);
	}
	return PSTR(MSG_FREE_XY);
}


/* MSG_MOVE_X */
const char* msg_move_x()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_X);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_X);
	}
	return PSTR(MSG_MOVE_X);
}

/* MSG_MOVE_Y */
const char* msg_move_y()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_Y);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_Y);
	}
	return PSTR(MSG_MOVE_Y);
}

/* MSG_MOVE_Z */
const char* msg_move_z()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_Z);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_Z);
	}
	return PSTR(MSG_MOVE_Z);
}

/* MSG_MOVE_E */
const char* msg_move_e()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_E);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_E);
	}
	return PSTR(MSG_MOVE_E);
}

/* MSG_MOVE_E1 */
const char* msg_move_e1()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_E MSG_MOVE_E1);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_E MSG_MOVE_E1);
	}
	return PSTR(MSG_MOVE_E MSG_MOVE_E1);
}

/* MSG_MOVE_E2 */
const char* msg_move_e2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_E MSG_MOVE_E2);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_E MSG_MOVE_E2);
	}
	return PSTR(MSG_MOVE_E MSG_MOVE_E2);
}

/* MSG_MOVE_E3 */
const char* msg_move_e3()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_E MSG_MOVE_E3);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_E MSG_MOVE_E3);
	}
	return PSTR(MSG_MOVE_E MSG_MOVE_E3);
}

/* MSG_MOVE_E4 */
const char* msg_move_e4()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_E MSG_MOVE_E4);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_E MSG_MOVE_E4);
	}
	return PSTR(MSG_MOVE_E MSG_MOVE_E4);
}

/* MSG_MOVE_E5 */
const char* msg_move_e5()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_E MSG_MOVE_E5);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_E MSG_MOVE_E5);
	}
	return PSTR(MSG_MOVE_E MSG_MOVE_E5);
}

/* MSG_MOVE_01MM */
const char* msg_move_01mm()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_01MM);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_01MM);
	}
	return PSTR(MSG_MOVE_01MM);
}

/* MSG_MOVE_1MM */
const char* msg_move_1mm()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_1MM);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_1MM);
	}
	return PSTR(MSG_MOVE_1MM);
}

/* MSG_MOVE_10MM */
const char* msg_move_10mm()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOVE_10MM);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOVE_10MM);
	}
	return PSTR(MSG_MOVE_10MM);
}

/* MSG_SPEED */
const char* msg_speed()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_SPEED);
		case UKRAINIAN:
			return PSTR(UK_MSG_SPEED);
	}
	return PSTR(MSG_SPEED);
}

/* MSG_BED_Z */
const char* msg_bed_z()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BED_Z);
		case UKRAINIAN:
			return PSTR(UK_MSG_BED_Z);
	}
	return PSTR(MSG_BED_Z);
}

/* MSG_NOZZLE */
const char* msg_nozzle()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_NOZZLE);
		case UKRAINIAN:
			return PSTR(UK_MSG_NOZZLE);
	}
	return PSTR(MSG_NOZZLE);
}

/* MSG_NOZZLE1 */
const char* msg_nozzle1()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_NOZZLE MSG_N1);
		case UKRAINIAN:
			return PSTR(UK_MSG_NOZZLE MSG_N1);
	}
	return PSTR(MSG_NOZZLE MSG_N1);
}

/* MSG_NOZZLE2 */
const char* msg_nozzle2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_NOZZLE MSG_N2);
		case UKRAINIAN:
			return PSTR(UK_MSG_NOZZLE MSG_N2);
	}
	return PSTR(MSG_NOZZLE MSG_N2);
}

/* MSG_NOZZLE3 */
const char* msg_nozzle3()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_NOZZLE MSG_N3);
		case UKRAINIAN:
			return PSTR(UK_MSG_NOZZLE MSG_N3);
	}
	return PSTR(MSG_NOZZLE MSG_N3);
}

/* MSG_NOZZLE4 */
const char* msg_nozzle4()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_NOZZLE MSG_N4);
		case UKRAINIAN:
			return PSTR(UK_MSG_NOZZLE MSG_N4);
	}
	return PSTR(MSG_NOZZLE MSG_N4);
}

/* MSG_NOZZLE5 */
const char* msg_nozzle5()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_NOZZLE MSG_N5);
		case UKRAINIAN:
			return PSTR(UK_MSG_NOZZLE MSG_N5);
	}
	return PSTR(MSG_NOZZLE MSG_N5);
}

/* MSG_BED */
const char* msg_bed()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BED);
		case UKRAINIAN:
			return PSTR(UK_MSG_BED);
	}
	return PSTR(MSG_BED);
}

/* MSG_FAN_SPEED */
const char* msg_fan_speed()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FAN_SPEED);
		case UKRAINIAN:
			return PSTR(UK_MSG_FAN_SPEED);
	}
	return PSTR(MSG_FAN_SPEED);
}

/* MSG_FAN_SPEED MSG_N2 */
const char* msg_fan_speed2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FAN_SPEED MSG_N2);
		case UKRAINIAN:
			return PSTR(UK_MSG_FAN_SPEED MSG_N2);
	}
	return PSTR(MSG_FAN_SPEED MSG_N2);
}

/* MSG_FAN_SPEED MSG_N3 */
const char* msg_fan_speed3()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FAN_SPEED MSG_N3);
		case UKRAINIAN:
			return PSTR(UK_MSG_FAN_SPEED MSG_N3);
	}
	return PSTR(MSG_FAN_SPEED MSG_N3);
}

/* MSG_FLOW */
const char* msg_flow()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FLOW);
		case UKRAINIAN:
			return PSTR(UK_MSG_FLOW);
	}
	return PSTR(MSG_FLOW);
}

/* MSG_FLOW1 */
const char* msg_flow1()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FLOW MSG_N1);
		case UKRAINIAN:
			return PSTR(UK_MSG_FLOW MSG_N1);
	}
	return PSTR(MSG_FLOW MSG_N1);
}

/* MSG_FLOW2 */
const char* msg_flow2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FLOW MSG_N2);
		case UKRAINIAN:
			return PSTR(UK_MSG_FLOW MSG_N2);
	}
	return PSTR(MSG_FLOW MSG_N2);
}

/* MSG_FLOW3 */
const char* msg_flow3()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FLOW MSG_N3);
		case UKRAINIAN:
			return PSTR(UK_MSG_FLOW MSG_N3);
	}
	return PSTR(MSG_FLOW MSG_N3);
}

/* MSG_FLOW4 */
const char* msg_flow4()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FLOW MSG_N4);
		case UKRAINIAN:
			return PSTR(UK_MSG_FLOW MSG_N4);
	}
	return PSTR(MSG_FLOW MSG_N4);
}

/* MSG_FLOW5 */
const char* msg_flow5()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FLOW MSG_N5);
		case UKRAINIAN:
			return PSTR(UK_MSG_FLOW MSG_N5);
	}
	return PSTR(MSG_FLOW MSG_N5);
}

/* MSG_CONTROL */
const char* msg_control()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CONTROL);
		case UKRAINIAN:
			return PSTR(UK_MSG_CONTROL);
	}
	return PSTR(MSG_CONTROL);
}

/* MSG_MIN */
const char* msg_min()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MIN);
		case UKRAINIAN:
			return PSTR(UK_MSG_MIN);
	}
	return PSTR(MSG_MIN);
}

/* MSG_MAX */
const char* msg_max()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MAX);
		case UKRAINIAN:
			return PSTR(UK_MSG_MAX);
	}
	return PSTR(MSG_MAX);
}

/* MSG_FACTOR */
const char* msg_factor()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FACTOR);
		case UKRAINIAN:
			return PSTR(UK_MSG_FACTOR);
	}
	return PSTR(MSG_FACTOR);
}

/* MSG_AUTOTEMP */
const char* msg_autotemp()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AUTOTEMP);
		case UKRAINIAN:
			return PSTR(UK_MSG_AUTOTEMP);
	}
	return PSTR(MSG_AUTOTEMP);
}

/* MSG_ON */
const char* msg_on()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ON);
		case UKRAINIAN:
			return PSTR(UK_MSG_ON);
	}
	return PSTR(MSG_ON);
}

/* MSG_OFF */
const char* msg_off()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_OFF);
		case UKRAINIAN:
			return PSTR(UK_MSG_OFF);
	}
	return PSTR(MSG_OFF);
}

/* MSG_PID_P */
const char* msg_pid_p()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PID_P);
		case UKRAINIAN:
			return PSTR(UK_MSG_PID_P);
	}
	return PSTR(MSG_PID_P);
}

/* MSG_PID_I */
const char* msg_pid_i()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PID_I);
		case UKRAINIAN:
			return PSTR(UK_MSG_PID_I);
	}
	return PSTR(MSG_PID_I);
}

/* MSG_PID_D */
const char* msg_pid_d()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PID_D);
		case UKRAINIAN:
			return PSTR(UK_MSG_PID_D);
	}
	return PSTR(MSG_PID_D);
}

/* MSG_PID_C */
const char* msg_pid_c()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PID_C);
		case UKRAINIAN:
			return PSTR(UK_MSG_PID_C);
	}
	return PSTR(MSG_PID_C);
}

/* MSG_SELECT */
const char* msg_select()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_SELECT);
		case UKRAINIAN:
			return PSTR(UK_MSG_SELECT);
	}
	return PSTR(MSG_SELECT);
}

/* MSG_SELECT MSG_E1*/
const char* msg_select1()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_SELECT MSG_E1);
		case UKRAINIAN:
			return PSTR(UK_MSG_SELECT MSG_E1);
	}
	return PSTR(MSG_SELECT MSG_E1);
}

/* MSG_SELECT MSG_E2*/
const char* msg_select2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_SELECT MSG_E2);
		case UKRAINIAN:
			return PSTR(UK_MSG_SELECT MSG_E2);
	}
	return PSTR(MSG_SELECT MSG_E2);
}

/* MSG_ACC */
const char* msg_acc()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ACC);
		case UKRAINIAN:
			return PSTR(UK_MSG_ACC);
	}
	return PSTR(MSG_ACC);
}

/* MSG_JERK */
const char* msg_jerk()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_JERK);
		case UKRAINIAN:
			return PSTR(UK_MSG_JERK);
	}
	return PSTR(MSG_JERK);
}

/* MSG_VX_JERK */
const char* msg_vx_jerk()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VX_JERK);
		case UKRAINIAN:
			return PSTR(UK_MSG_VX_JERK);
	}
	return PSTR(MSG_VX_JERK);
}

/* MSG_VY_JERK */
const char* msg_vy_jerk()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VY_JERK);
		case UKRAINIAN:
			return PSTR(UK_MSG_VY_JERK);
	}
	return PSTR(MSG_VY_JERK);
}

/* MSG_VZ_JERK */
const char* msg_vz_jerk()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VZ_JERK);
		case UKRAINIAN:
			return PSTR(UK_MSG_VZ_JERK);
	}
	return PSTR(MSG_VZ_JERK);
}

/* MSG_VE_JERK */
const char* msg_ve_jerk()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VE_JERK);
		case UKRAINIAN:
			return PSTR(UK_MSG_VE_JERK);
	}
	return PSTR(MSG_VE_JERK);
}

/* MSG_VMAXX */
const char* msg_vmaxx()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VMAX MSG_X);
		case UKRAINIAN:
			return PSTR(UK_MSG_VMAX MSG_X);
	}
	return PSTR(MSG_VMAX MSG_X);
}

/* MSG_VMAXY */
const char* msg_vmaxy()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VMAX MSG_Y);
		case UKRAINIAN:
			return PSTR(UK_MSG_VMAX MSG_Y);
	}
	return PSTR(MSG_VMAX MSG_Y);
}

/* MSG_VMAXZ */
const char* msg_vmaxz()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VMAX MSG_Z);
		case UKRAINIAN:
			return PSTR(UK_MSG_VMAX MSG_Z);
	}
	return PSTR(MSG_VMAX MSG_Z);
}

/* MSG_VMAXE */
const char* msg_vmaxe()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VMAX MSG_E);
		case UKRAINIAN:
			return PSTR(UK_MSG_VMAX MSG_E);
	}
	return PSTR(MSG_VMAX MSG_E);
}

/* MSG_VMAXE1 */
const char* msg_vmaxe1()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VMAX MSG_E1);
		case UKRAINIAN:
			return PSTR(UK_MSG_VMAX MSG_E1);
	}
	return PSTR(MSG_VMAX MSG_E1);
}

/* MSG_VMAXE2 */
const char* msg_vmaxe2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VMAX MSG_E2);
		case UKRAINIAN:
			return PSTR(UK_MSG_VMAX MSG_E2);
	}
	return PSTR(MSG_VMAX MSG_E2);
}

/* MSG_VMAXE3 */
const char* msg_vmaxe3()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VMAX MSG_E3);
		case UKRAINIAN:
			return PSTR(UK_MSG_VMAX MSG_E3);
	}
	return PSTR(MSG_VMAX MSG_E3);
}

/* MSG_VMAXE4 */
const char* msg_vmaxe4()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VMAX MSG_E4);
		case UKRAINIAN:
			return PSTR(UK_MSG_VMAX MSG_E4);
	}
	return PSTR(MSG_VMAX MSG_E4);
}

/* MSG_VMAXE5 */
const char* msg_vmaxe5()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VMAX MSG_E5);
		case UKRAINIAN:
			return PSTR(UK_MSG_VMAX MSG_E5);
	}
	return PSTR(MSG_VMAX MSG_E5);
}

/* MSG_VELOCITY */
const char* msg_velocity()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VELOCITY);
		case UKRAINIAN:
			return PSTR(UK_MSG_VELOCITY);
	}
	return PSTR(MSG_VELOCITY);
}

/* MSG_VMIN */
const char* msg_vmin()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VMIN);
		case UKRAINIAN:
			return PSTR(UK_MSG_VMIN);
	}
	return PSTR(MSG_VMIN);
}

/* MSG_VTRAV_MIN */
const char* msg_vtrav_min()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VTRAV_MIN);
		case UKRAINIAN:
			return PSTR(UK_MSG_VTRAV_MIN);
	}
	return PSTR(MSG_VTRAV_MIN);
}

/* MSG_ACCELERATION */
const char* msg_acceleration()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ACCELERATION);
		case UKRAINIAN:
			return PSTR(UK_MSG_ACCELERATION);
	}
	return PSTR(MSG_ACCELERATION);
}

/* MSG_AMAXX */
const char* msg_amaxx()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AMAX MSG_X);
		case UKRAINIAN:
			return PSTR(UK_MSG_AMAX MSG_X);
	}
	return PSTR(MSG_AMAX MSG_X);
}

/* MSG_AMAXY */
const char* msg_amaxy()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AMAX MSG_Y);
		case UKRAINIAN:
			return PSTR(UK_MSG_AMAX MSG_Y);
	}
	return PSTR(MSG_AMAX MSG_Y);
}

/* MSG_AMAXZ */
const char* msg_amaxz()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AMAX MSG_Z);
		case UKRAINIAN:
			return PSTR(UK_MSG_AMAX MSG_Z);
	}
	return PSTR(MSG_AMAX MSG_Z);
}

/* MSG_AMAXE */
const char* msg_amaxe()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AMAX MSG_E);
		case UKRAINIAN:
			return PSTR(UK_MSG_AMAX MSG_E);
	}
	return PSTR(MSG_AMAX MSG_E);
}

/* MSG_AMAXE1 */
const char* msg_amaxe1()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AMAX MSG_E1);
		case UKRAINIAN:
			return PSTR(UK_MSG_AMAX MSG_E1);
	}
	return PSTR(MSG_AMAX MSG_E1);
}

/* MSG_AMAXE2 */
const char* msg_amaxe2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AMAX MSG_E2);
		case UKRAINIAN:
			return PSTR(UK_MSG_AMAX MSG_E2);
	}
	return PSTR(MSG_AMAX MSG_E2);
}

/* MSG_AMAXE3 */
const char* msg_amaxe3()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AMAX MSG_E3);
		case UKRAINIAN:
			return PSTR(UK_MSG_AMAX MSG_E3);
	}
	return PSTR(MSG_AMAX MSG_E3);
}

/* MSG_AMAXE4 */
const char* msg_amaxe4()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AMAX MSG_E4);
		case UKRAINIAN:
			return PSTR(UK_MSG_AMAX MSG_E4);
	}
	return PSTR(MSG_AMAX MSG_E4);
}

/* MSG_AMAXE5 */
const char* msg_amaxe5()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AMAX MSG_E5);
		case UKRAINIAN:
			return PSTR(UK_MSG_AMAX MSG_E5);
	}
	return PSTR(MSG_AMAX MSG_E5);
}

/* MSG_A_RETRACT */
const char* msg_a_retract()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_A_RETRACT);
		case UKRAINIAN:
			return PSTR(UK_MSG_A_RETRACT);
	}
	return PSTR(MSG_A_RETRACT);
}

/* MSG_A_TRAVEL */
const char* msg_a_travel()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_A_TRAVEL);
		case UKRAINIAN:
			return PSTR(UK_MSG_A_TRAVEL);
	}
	return PSTR(MSG_A_TRAVEL);
}

/* MSG_STEPS_PER_MM */
const char* msg_steps_per_mm()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_STEPS_PER_MM);
		case UKRAINIAN:
			return PSTR(UK_MSG_STEPS_PER_MM);
	}
	return PSTR(MSG_STEPS_PER_MM);
}

/* MSG_XSTEPS */
const char* msg_xsteps()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_XSTEPS);
		case UKRAINIAN:
			return PSTR(UK_MSG_XSTEPS);
	}
	return PSTR(MSG_XSTEPS);
}

/* MSG_YSTEPS */
const char* msg_ysteps()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_YSTEPS);
		case UKRAINIAN:
			return PSTR(UK_MSG_YSTEPS);
	}
	return PSTR(MSG_YSTEPS);
}

/* MSG_ZSTEPS */
const char* msg_zsteps()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ZSTEPS);
		case UKRAINIAN:
			return PSTR(UK_MSG_ZSTEPS);
	}
	return PSTR(MSG_ZSTEPS);
}

/* MSG_ESTEPS */
const char* msg_esteps()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ESTEPS);
		case UKRAINIAN:
			return PSTR(UK_MSG_ESTEPS);
	}
	return PSTR(MSG_ESTEPS);
}

/* MSG_E1STEPS */
const char* msg_e1steps()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_E1STEPS);
		case UKRAINIAN:
			return PSTR(UK_MSG_E1STEPS);
	}
	return PSTR(MSG_E1STEPS);
}

/* MSG_E2STEPS */
const char* msg_e2steps()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_E2STEPS);
		case UKRAINIAN:
			return PSTR(UK_MSG_E2STEPS);
	}
	return PSTR(MSG_E2STEPS);
}

/* MSG_E3STEPS */
const char* msg_e3steps()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_E3STEPS);
		case UKRAINIAN:
			return PSTR(UK_MSG_E3STEPS);
	}
	return PSTR(MSG_E3STEPS);
}

/* MSG_E4STEPS */
const char* msg_e4steps()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_E4STEPS);
		case UKRAINIAN:
			return PSTR(UK_MSG_E4STEPS);
	}
	return PSTR(MSG_E4STEPS);
}

/* MSG_E5STEPS */
const char* msg_e5steps()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_E5STEPS);
		case UKRAINIAN:
			return PSTR(UK_MSG_E4STEPS);
	}
	return PSTR(MSG_E5STEPS);
}

/* MSG_TEMPERATURE */
const char* msg_temperature()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_TEMPERATURE);
		case UKRAINIAN:
			return PSTR(UK_MSG_TEMPERATURE);
	}
	return PSTR(MSG_TEMPERATURE);
}

/* MSG_MOTION */
const char* msg_motion()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MOTION);
		case UKRAINIAN:
			return PSTR(UK_MSG_MOTION);
	}
	return PSTR(MSG_MOTION);
}

/* MSG_FILAMENT */
const char* msg_filament()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT);
	}
	return PSTR(MSG_FILAMENT);
}

/* MSG_VOLUMETRIC_ENABLED */
const char* msg_volumetric_enabled()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_VOLUMETRIC_ENABLED);
		case UKRAINIAN:
			return PSTR(UK_MSG_VOLUMETRIC_ENABLED);
	}
	return PSTR(MSG_VOLUMETRIC_ENABLED);
}

/* MSG_FILAMENT_DIAM */
const char* msg_filament_diam()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT_DIAM);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT_DIAM);
	}
	return PSTR(MSG_FILAMENT_DIAM);
}

/* MSG_FILAMENT_DIAM1 */
const char* msg_filament_diam1()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT_DIAM MSG_DIAM_E1);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT_DIAM MSG_DIAM_E1);
	}
	return PSTR(MSG_FILAMENT_DIAM MSG_DIAM_E1);
}

/* MSG_FILAMENT_DIAM2 */
const char* msg_filament_diam2()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT_DIAM MSG_DIAM_E2);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT_DIAM MSG_DIAM_E2);
	}
	return PSTR(MSG_FILAMENT_DIAM MSG_DIAM_E2);
}

/* MSG_FILAMENT_DIAM3 */
const char* msg_filament_diam3()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT_DIAM MSG_DIAM_E3);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT_DIAM MSG_DIAM_E3);
	}
	return PSTR(MSG_FILAMENT_DIAM MSG_DIAM_E3);
}

/* MSG_FILAMENT_DIAM4 */
const char* msg_filament_diam4()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT_DIAM MSG_DIAM_E4);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT_DIAM MSG_DIAM_E4);
	}
	return PSTR(MSG_FILAMENT_DIAM MSG_DIAM_E4);
}

/* MSG_FILAMENT_DIAM5 */
const char* msg_filament_diam5()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT_DIAM MSG_DIAM_E5);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT_DIAM MSG_DIAM_E5);
	}
	return PSTR(MSG_FILAMENT_DIAM MSG_DIAM_E5);
}

/* MSG_ADVANCE_K */
const char* msg_advance_k()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ADVANCE_K);
		case UKRAINIAN:
			return PSTR(UK_MSG_ADVANCE_K);
	}
	return PSTR(MSG_ADVANCE_K);
}

/* MSG_CONTRAST */
const char* msg_contrast()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CONTRAST);
		case UKRAINIAN:
			return PSTR(UK_MSG_CONTRAST);
	}
	return PSTR(MSG_CONTRAST);
}

/* MSG_STORE_EEPROM */
const char* msg_store_eeprom()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_STORE_EEPROM);
		case UKRAINIAN:
			return PSTR(UK_MSG_STORE_EEPROM);
	}
	return PSTR(MSG_STORE_EEPROM);
}

/* MSG_LOAD_EEPROM */
const char* msg_load_eeprom()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_LOAD_EEPROM);
		case UKRAINIAN:
			return PSTR(UK_MSG_LOAD_EEPROM);
	}
	return PSTR(MSG_LOAD_EEPROM);
}

/* MSG_RESTORE_FAILSAFE */
const char* msg_restore_failsafe()
{
	switch (current_lang) 
	{
		case ENGLISH:
			return PSTR(MSG_RESTORE_FAILSAFE);
		case UKRAINIAN:
			return PSTR(UK_MSG_RESTORE_FAILSAFE);
	}
	return PSTR(MSG_RESTORE_FAILSAFE);
}

/* MSG_INIT_EEPROM */
const char* msg_init_eeprom()
{
	switch (current_lang) 
	{
		case ENGLISH:
			return PSTR(MSG_INIT_EEPROM);
		case UKRAINIAN:
			return PSTR(UK_MSG_INIT_EEPROM);
	}
	return PSTR(MSG_INIT_EEPROM);
}

/* MSG_REFRESH */
const char* msg_refresh()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_REFRESH);
		case UKRAINIAN:
			return PSTR(UK_MSG_REFRESH);
	}
	return PSTR(MSG_REFRESH);
}

/* MSG_WATCH */
const char* msg_watch()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_WATCH);
		case UKRAINIAN:
			return PSTR(UK_MSG_WATCH);
	}
	return PSTR(MSG_WATCH);
}

/* MSG_PREPARE */
const char* msg_prepare()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PREPARE);
		case UKRAINIAN:
			return PSTR(UK_MSG_PREPARE);
	}
	return PSTR(MSG_PREPARE);
}

/* MSG_TUNE */
const char* msg_tune()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_TUNE);
		case UKRAINIAN:
			return PSTR(UK_MSG_TUNE);
	}
	return PSTR(MSG_TUNE);
}

/* MSG_PAUSE_PRINT */
const char* msg_pause_print()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PAUSE_PRINT);
		case UKRAINIAN:
			return PSTR(UK_MSG_PAUSE_PRINT);
	}
	return PSTR(MSG_PAUSE_PRINT);
}

/* MSG_RESUME_PRINT */
const char* msg_resume_print()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_RESUME_PRINT);
		case UKRAINIAN:
			return PSTR(UK_MSG_RESUME_PRINT);
	}
	return PSTR(MSG_RESUME_PRINT);
}

/* MSG_STOP_PRINT */
const char* msg_stop_print()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_STOP_PRINT);
		case UKRAINIAN:
			return PSTR(UK_MSG_STOP_PRINT);
	}
	return PSTR(MSG_STOP_PRINT);
}

/* MSG_CARD_MENU */
const char* msg_card_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CARD_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_CARD_MENU);
	}
	return PSTR(MSG_CARD_MENU);
}

/* MSG_NO_CARD */
const char* msg_no_card()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_NO_CARD);
		case UKRAINIAN:
			return PSTR(UK_MSG_NO_CARD);
	}
	return PSTR(MSG_NO_CARD);
}

/* MSG_DWELL */
const char* msg_dwell()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_DWELL);
		case UKRAINIAN:
			return PSTR(UK_MSG_DWELL);
	}
	return PSTR(MSG_DWELL);
}

/* MSG_USERWAIT */
const char* msg_userwait()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_USERWAIT);
		case UKRAINIAN:
			return PSTR(UK_MSG_USERWAIT);
	}
	return PSTR(MSG_USERWAIT);
}

/* MSG_RESUMING */
const char* msg_resuming()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_RESUMING);
		case UKRAINIAN:
			return PSTR(UK_MSG_RESUMING);
	}
	return PSTR(MSG_RESUMING);
}

/* MSG_PRINT_ABORTED */
const char* msg_print_aborted()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PRINT_ABORTED);
		case UKRAINIAN:
			return PSTR(UK_MSG_PRINT_ABORTED);
	}
	return PSTR(MSG_PRINT_ABORTED);
}

/* MSG_PRINT_PAUSED */
const char* msg_print_paused()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_PRINT_PAUSED);
		case UKRAINIAN:
			return PSTR(UK_MSG_PRINT_PAUSED);
	}
	return PSTR(MSG_PRINT_PAUSED);
}

/* MSG_NO_MOVE */
const char* msg_no_move()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_NO_MOVE);
		case UKRAINIAN:
			return PSTR(UK_MSG_NO_MOVE);
	}
	return PSTR(MSG_NO_MOVE);
}

/* MSG_KILLED */
const char* msg_killed()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_KILLED);
		case UKRAINIAN:
			return PSTR(UK_MSG_KILLED);
	}
	return PSTR(MSG_KILLED);
}

/* MSG_STOPPED */
const char* msg_stopped()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_STOPPED);
		case UKRAINIAN:
			return PSTR(UK_MSG_STOPPED);
	}
	return PSTR(MSG_STOPPED);
}

/* MSG_CONTROL_RETRACT */
const char* msg_control_retract()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CONTROL_RETRACT);
		case UKRAINIAN:
			return PSTR(UK_MSG_CONTROL_RETRACT);
	}
	return PSTR(MSG_CONTROL_RETRACT);
}

/* MSG_CONTROL_RETRACT_SWAP */
const char* msg_control_retract_swap()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CONTROL_RETRACT_SWAP);
		case UKRAINIAN:
			return PSTR(UK_MSG_CONTROL_RETRACT_SWAP);
	}
	return PSTR(MSG_CONTROL_RETRACT_SWAP);
}

/* MSG_CONTROL_RETRACTF */
const char* msg_control_retractf()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CONTROL_RETRACTF);
		case UKRAINIAN:
			return PSTR(UK_MSG_CONTROL_RETRACTF);
	}
	return PSTR(MSG_CONTROL_RETRACTF);
}

/* MSG_CONTROL_RETRACT_ZLIFT */
const char* msg_control_retract_zlift()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CONTROL_RETRACT_ZLIFT);
		case UKRAINIAN:
			return PSTR(UK_MSG_CONTROL_RETRACT_ZLIFT);
	}
	return PSTR(MSG_CONTROL_RETRACT_ZLIFT);
}

/* MSG_CONTROL_RETRACT_RECOVER */
const char* msg_control_retract_recover()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CONTROL_RETRACT_RECOVER);
		case UKRAINIAN:
			return PSTR(UK_MSG_CONTROL_RETRACT_RECOVER);
	}
	return PSTR(MSG_CONTROL_RETRACT_RECOVER);
}

/* MSG_CONTROL_RETRACT_RECOVER_SWAP */
const char* msg_control_retract_recover_swap()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CONTROL_RETRACT_RECOVER_SWAP);
		case UKRAINIAN:
			return PSTR(UK_MSG_CONTROL_RETRACT_RECOVER_SWAP);
	}
  return PSTR(MSG_CONTROL_RETRACT_RECOVER_SWAP);
}

/* MSG_CONTROL_RETRACT_RECOVERF */
const char* msg_control_retract_recoverf()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CONTROL_RETRACT_RECOVERF);
		case UKRAINIAN:
			return PSTR(UK_MSG_CONTROL_RETRACT_RECOVERF);
	}
	return PSTR(MSG_CONTROL_RETRACT_RECOVERF);
}

/* MSG_AUTORETRACT */
const char* msg_autoretract()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_AUTORETRACT);
		case UKRAINIAN:
			return PSTR(UK_MSG_AUTORETRACT);
	}
	return PSTR(MSG_AUTORETRACT);
}

/* MSG_FILAMENTCHANGE */
const char* msg_filamentchange()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENTCHANGE);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENTCHANGE);
	}
	return PSTR(MSG_FILAMENTCHANGE);
}

/* MSG_INIT_SDCARD */
const char* msg_init_sdcard()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INIT_SDCARD);
		case UKRAINIAN:
			return PSTR(UK_MSG_INIT_SDCARD);
	}
	return PSTR(MSG_INIT_SDCARD);
}

/* MSG_CNG_SDCARD */
const char* msg_cng_sdcard()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CNG_SDCARD);
		case UKRAINIAN:
			return PSTR(UK_MSG_CNG_SDCARD);
	}
	return PSTR(MSG_CNG_SDCARD);
}

/* MSG_ZPROBE_OUT */
const char* msg_zprobe_out()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ZPROBE_OUT);
		case UKRAINIAN:
			return PSTR(UK_MSG_ZPROBE_OUT);
	}
	return PSTR(MSG_ZPROBE_OUT);
}

/* MSG_BLTOUCH */
const char* msg_bltouch()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BLTOUCH);
		case UKRAINIAN:
			return PSTR(UK_MSG_BLTOUCH);
	}
	return PSTR(MSG_BLTOUCH);
}

/* MSG_BLTOUCH_SELFTEST */
const char* msg_bltouch_selftest()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BLTOUCH_SELFTEST);
		case UKRAINIAN:
			return PSTR(UK_MSG_BLTOUCH_SELFTEST);
	}
	return PSTR(MSG_BLTOUCH_SELFTEST);
}

/* MSG_BLTOUCH_RESET */
const char* msg_bltouch_reset()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BLTOUCH_RESET);
		case UKRAINIAN:
			return PSTR(UK_MSG_BLTOUCH_RESET);
	}
	return PSTR(MSG_BLTOUCH_RESET);
}

/* MSG_BLTOUCH_DEPLOY */
const char* msg_bltouch_deploy()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BLTOUCH_DEPLOY);
		case UKRAINIAN:
			return PSTR(UK_MSG_BLTOUCH_DEPLOY);
	}
	return PSTR(MSG_BLTOUCH_DEPLOY);
}

/* MSG_BLTOUCH_STOW */
const char* msg_bltouch_stow()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BLTOUCH_STOW);
		case UKRAINIAN:
			return PSTR(UK_MSG_BLTOUCH_STOW);
	}
	return PSTR(MSG_BLTOUCH_STOW);
}

/* MSG_BLTOUCH_SW_MODE */
const char* msg_bltouch_sw_mode()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BLTOUCH_SW_MODE);
		case UKRAINIAN:
			return PSTR(UK_MSG_BLTOUCH_SW_MODE);
	}
	return PSTR(MSG_BLTOUCH_SW_MODE);
}

/* MSG_BLTOUCH_5V_MODE */
const char* msg_bltouch_5v_mode()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BLTOUCH_5V_MODE);
		case UKRAINIAN:
			return PSTR(UK_MSG_BLTOUCH_5V_MODE);
	}
	return PSTR(MSG_BLTOUCH_5V_MODE);
}

/* MSG_BLTOUCH_OD_MODE */
const char* msg_bltouch_od_mode()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BLTOUCH_OD_MODE);
		case UKRAINIAN:
			return PSTR(UK_MSG_BLTOUCH_OD_MODE);
	}
	return PSTR(MSG_BLTOUCH_OD_MODE);
}


/* MSG_HOME */
const char* msg_home()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_HOME);
		case UKRAINIAN:
			return PSTR(UK_MSG_HOME);
	}
	return PSTR(MSG_HOME);
}

/* MSG_FIRST */
const char* msg_first()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FIRST);
		case UKRAINIAN:
			return PSTR(UK_MSG_FIRST);
	}
	return PSTR(MSG_FIRST);
}

/* MSG_ZPROBE_ZOFFSET */
const char* msg_zprobe_zoffset()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ZPROBE_ZOFFSET);
		case UKRAINIAN:
			return PSTR(UK_MSG_ZPROBE_ZOFFSET);
	}
	return PSTR(MSG_ZPROBE_ZOFFSET);
}

/* MSG_BABYSTEP_X */
const char* msg_babystep_x()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BABYSTEP_X);
		case UKRAINIAN:
			return PSTR(UK_MSG_BABYSTEP_X);
	}
	return PSTR(MSG_BABYSTEP_X);
}

/* MSG_BABYSTEP_Y */
const char* msg_babystep_y()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BABYSTEP_Y);
		case UKRAINIAN:
			return PSTR(UK_MSG_BABYSTEP_Y);
	}
	return PSTR(MSG_BABYSTEP_Y);
}

/* MSG_BABYSTEP_Z */
const char* msg_babystep_z()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BABYSTEP_Z);
		case UKRAINIAN:
			return PSTR(UK_MSG_BABYSTEP_Z);
	}
	return PSTR(MSG_BABYSTEP_Z);
}

/* MSG_ENDSTOP_ABORT */
const char* msg_endstop_abort()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ENDSTOP_ABORT);
		case UKRAINIAN:
			return PSTR(UK_MSG_ENDSTOP_ABORT);
	}
	return PSTR(MSG_ENDSTOP_ABORT);
}

/* MSG_HEATING_FAILED_LCD */
const char* msg_heating_failed_lcd()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_HEATING_FAILED_LCD);
		case UKRAINIAN:
    		return PSTR(UK_MSG_HEATING_FAILED_LCD);
	}
	return PSTR(MSG_HEATING_FAILED_LCD);
}

/* MSG_ERR_REDUNDANT_TEMP */
const char* msg_err_redundant_temp()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ERR_REDUNDANT_TEMP);
		case UKRAINIAN:
			return PSTR(UK_MSG_ERR_REDUNDANT_TEMP);
	}
	return PSTR(MSG_ERR_REDUNDANT_TEMP);
}

/* MSG_THERMAL_RUNAWAY */
const char* msg_thermal_runaway()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_THERMAL_RUNAWAY);
		case UKRAINIAN:
			return PSTR(UK_MSG_THERMAL_RUNAWAY);
	}
	return PSTR(MSG_THERMAL_RUNAWAY);
}

/* MSG_ERR_MAXTEMP */
const char* msg_err_maxtemp()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ERR_MAXTEMP);
		case UKRAINIAN:
			return PSTR(UK_MSG_ERR_MAXTEMP);
	}
	return PSTR(MSG_ERR_MAXTEMP);
}

/* MSG_ERR_MINTEMP */
const char* msg_err_mintemp()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ERR_MINTEMP);
		case UKRAINIAN:
			return PSTR(UK_MSG_ERR_MINTEMP);
	}
	return PSTR(MSG_ERR_MINTEMP);
}

/* MSG_ERR_MAXTEMP_BED */
const char* msg_err_maxtemp_bed()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ERR_MAXTEMP_BED);
		case UKRAINIAN:
			return PSTR(UK_MSG_ERR_MAXTEMP_BED);
	}
	return PSTR(MSG_ERR_MAXTEMP_BED);
}

/* MSG_ERR_MINTEMP_BED */
const char* msg_err_mintemp_bed()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ERR_MINTEMP_BED);
		case UKRAINIAN:
			return PSTR(MSG_ERR_MINTEMP_BED);
	}
	return PSTR(MSG_ERR_MINTEMP_BED);
}

/* MSG_DELTA_SETTINGS */
const char* msg_delta_settings()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_DELTA_SETTINGS);
		case UKRAINIAN:
			return PSTR(UK_MSG_DELTA_SETTINGS);
	}
	return PSTR(MSG_DELTA_SETTINGS);
}

/* MSG_DELTA_AUTO_CALIBRATE */
const char* msg_delta_auto_calibrate()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_DELTA_AUTO_CALIBRATE);
		case UKRAINIAN:
			return PSTR(UK_MSG_DELTA_AUTO_CALIBRATE);
	}
	return PSTR(MSG_DELTA_AUTO_CALIBRATE);
}

/* MSG_DELTA_HEIGHT_CALIBRATE */
const char* msg_delta_height_calibrate()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_DELTA_HEIGHT_CALIBRATE);
		case UKRAINIAN:
			return PSTR(UK_MSG_DELTA_HEIGHT_CALIBRATE);
	}
	return PSTR(MSG_DELTA_HEIGHT_CALIBRATE);
}

/* MSG_DELTA_DIAG_ROG */
const char* msg_delta_diag_rog()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_DELTA_DIAG_ROG);
		case UKRAINIAN:
			return PSTR(UK_MSG_DELTA_DIAG_ROG);
	}
	return PSTR(MSG_DELTA_DIAG_ROG);
}

/* MSG_DELTA_HEIGHT */
const char* msg_delta_height()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_DELTA_HEIGHT);
		case UKRAINIAN:
			return PSTR(UK_MSG_DELTA_HEIGHT);
	}
	return PSTR(MSG_DELTA_HEIGHT);
}

/* MSG_DELTA_RADIUS */
const char* msg_delta_radius()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_DELTA_RADIUS);
		case UKRAINIAN:
			return PSTR(UK_MSG_DELTA_RADIUS);
	}
	return PSTR(MSG_DELTA_RADIUS);
}

/* MSG_INFO_MENU */
const char* msg_info_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_MENU);
	}
	return PSTR(MSG_INFO_MENU);
}

/* MSG_INFO_PRINTER_MENU */
const char* msg_info_printer_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_PRINTER_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_PRINTER_MENU);
	}
	return PSTR(MSG_INFO_PRINTER_MENU);
}

/* MSG_3POINT_LEVELING */
const char* msg_3point_leveling()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_3POINT_LEVELING);
		case UKRAINIAN:
			return PSTR(UK_MSG_3POINT_LEVELING);
	}
	return PSTR(MSG_3POINT_LEVELING);
}

/* MSG_LINEAR_LEVELING */
const char* msg_linear_leveling()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_LINEAR_LEVELING);
		case UKRAINIAN:
			return PSTR(UK_MSG_LINEAR_LEVELING);
	}
	return PSTR(MSG_LINEAR_LEVELING);
}

/* MSG_BILINEAR_LEVELING */
const char* msg_bilinear_leveling()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BILINEAR_LEVELING);
		case UKRAINIAN:
			return PSTR(UK_MSG_BILINEAR_LEVELING);
	}
	return PSTR(MSG_BILINEAR_LEVELING);
}

/* MSG_UBL_LEVELING */
const char* msg_ubl_leveling()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UBL_LEVELING);
		case UKRAINIAN:
			return PSTR(UK_MSG_UBL_LEVELING);
	}
	return PSTR(MSG_UBL_LEVELING);
}

/* MSG_MESH_LEVELING */
const char* msg_mesh_leveling()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_MESH_LEVELING);
		case UKRAINIAN:
			return PSTR(UK_MSG_MESH_LEVELING);
	}
	return PSTR(MSG_UBL_LEVELING);
}

/* MSG_INFO_STATS_MENU */
const char* msg_info_stats_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_STATS_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_STATS_MENU);
	}
	return PSTR(MSG_INFO_STATS_MENU);
}

/* MSG_INFO_BOARD_MENU */
const char* msg_info_board_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_BOARD_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_BOARD_MENU);
	}
	return PSTR(MSG_INFO_BOARD_MENU);
}

/* MSG_INFO_THERMISTOR_MENU */
const char* msg_info_thermistor_menu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_THERMISTOR_MENU);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_THERMISTOR_MENU);
	}
	return PSTR(MSG_INFO_THERMISTOR_MENU);
}

/* MSG_INFO_EXTRUDERS */
const char* msg_info_extruders()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_EXTRUDERS MSG_N1);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_EXTRUDERS MSG_N1);
	}
	return PSTR(MSG_INFO_EXTRUDERS MSG_N1);
}

/* MSG_INFO_BAUDRATE */
const char* msg_info_baudrate()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_BAUDRATE MSG_BAUDRATE);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_BAUDRATE MSG_BAUDRATE);
	}
	return PSTR(MSG_INFO_BAUDRATE MSG_BAUDRATE);
}

/* MSG_INFO_PROTOCOL */
const char* msg_info_protocol()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_PROTOCOL);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_PROTOCOL);
	}
	return PSTR(MSG_INFO_PROTOCOL);
}

/* MSG_CASE_LIGHT */
const char* msg_case_light()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CASE_LIGHT);
		case UKRAINIAN:
			return PSTR(UK_MSG_CASE_LIGHT);
	}
	return PSTR(MSG_CASE_LIGHT);
}

/* MSG_CASE_LIGHT */
const char* msg_case_light_brightness()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_CASE_LIGHT_BRIGHTNESS);
		case UKRAINIAN:
			return PSTR(UK_MSG_CASE_LIGHT_BRIGHTNESS);
	}
	return PSTR(MSG_CASE_LIGHT_BRIGHTNESS);
}

/* MSG_INFO_PRINT_COUNT */
const char* msg_info_print_count()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_PRINT_COUNT);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_PRINT_COUNT);
	}
	return PSTR(MSG_INFO_PRINT_COUNT);
}

/* MSG_INFO_COMPLETED_PRINTS */
const char* msg_info_completed_prints()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_COMPLETED_PRINTS);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_COMPLETED_PRINTS);
	}
	return PSTR(MSG_INFO_COMPLETED_PRINTS);
}

/* MSG_INFO_PRINT_TIME */
const char* msg_info_print_time()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_PRINT_TIME);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_PRINT_TIME);
	}
	return PSTR(MSG_INFO_PRINT_TIME);
}

/* MSG_INFO_PRINT_LONGEST */
const char* msg_info_print_longest()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_PRINT_LONGEST);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_PRINT_LONGEST);
	}
	return PSTR(MSG_INFO_PRINT_LONGEST);
}

/* MSG_INFO_PRINT_FILAMENT */
const char* msg_info_print_filament()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_PRINT_FILAMENT);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_PRINT_FILAMENT);
	}
	return PSTR(MSG_INFO_PRINT_FILAMENT);
}

/* MSG_INFO_MIN_TEMP */
const char* msg_info_min_temp()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_MIN_TEMP);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_MIN_TEMP);
	}
	return PSTR(MSG_INFO_MIN_TEMP);
}

/* MSG_INFO_MAX_TEMP */
const char* msg_info_max_temp()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_MAX_TEMP);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_MAX_TEMP);
	}
	return PSTR(MSG_INFO_MAX_TEMP);
}

/* MSG_INFO_PSU */
const char* msg_info_psu()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_INFO_PSU);
		case UKRAINIAN:
			return PSTR(UK_MSG_INFO_PSU);
	}
	return PSTR(MSG_INFO_PSU);
}

/* MSG_DRIVE_STRENGTH */
const char* msg_drive_strength()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_DRIVE_STRENGTH);
		case UKRAINIAN:
			return PSTR(UK_MSG_DRIVE_STRENGTH);
	}
	return PSTR(MSG_DRIVE_STRENGTH);
}

/* MSG_X MSG_DRIVE_STRENGTH */
const char* msg_drive_strengthx()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_X MSG_DAC_PERCENT);
		case UKRAINIAN:
			return PSTR(MSG_X UK_MSG_DAC_PERCENT);
	}
	return PSTR(MSG_X MSG_DAC_PERCENT);
}

/* MSG_Y MSG_DRIVE_STRENGTH */
const char* msg_drive_strengthy()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_Y MSG_DAC_PERCENT);
		case UKRAINIAN:
			return PSTR(MSG_Y UK_MSG_DAC_PERCENT);
	}
	return PSTR(MSG_Y MSG_DAC_PERCENT);
}

/* MSG_Z MSG_DRIVE_STRENGTH */
const char* msg_drive_strengthz()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_Z MSG_DAC_PERCENT);
		case UKRAINIAN:
			return PSTR(MSG_Z UK_MSG_DAC_PERCENT);
	}
	return PSTR(MSG_Z MSG_DAC_PERCENT);
}

/* MSG_E MSG_DRIVE_STRENGTH */
const char* msg_drive_strengthe()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_E MSG_DAC_PERCENT);
		case UKRAINIAN:
			return PSTR(MSG_E UK_MSG_DAC_PERCENT);
	}
	return PSTR(MSG_E MSG_DAC_PERCENT);
}

/* MSG_DAC_EEPROM_WRITE */
const char* msg_dac_eeprom_write()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_DAC_EEPROM_WRITE);
		case UKRAINIAN:
			return PSTR(UK_MSG_DAC_EEPROM_WRITE);
	}
	return PSTR(MSG_DAC_EEPROM_WRITE);
}

/* MSG_FILAMENT_CHANGE_HEADER */
const char* msg_filament_change_header()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT_CHANGE_HEADER);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT_CHANGE_HEADER);
	}
	return PSTR(MSG_FILAMENT_CHANGE_HEADER);
}

/* MSG_FILAMENT_CHANGE_OPTION_HEADER */
const char* msg_filament_change_option_header()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT_CHANGE_OPTION_HEADER);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT_CHANGE_OPTION_HEADER);
	}
	return PSTR(MSG_FILAMENT_CHANGE_OPTION_HEADER);
}

/* MSG_FILAMENT_CHANGE_OPTION_EXTRUDE */
const char* msg_filament_change_option_extrude()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT_CHANGE_OPTION_EXTRUDE);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT_CHANGE_OPTION_EXTRUDE);
	}
	return PSTR(MSG_FILAMENT_CHANGE_OPTION_EXTRUDE);
}

/* MSG_FILAMENT_CHANGE_OPTION_RESUME */
const char* msg_filament_change_option_resume()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT_CHANGE_OPTION_RESUME);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT_CHANGE_OPTION_RESUME);
	}
	return PSTR(MSG_FILAMENT_CHANGE_OPTION_RESUME);
}

/* MSG_FILAMENT_CHANGE_MINTEMP */
const char* msg_filament_change_mintemp()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT_CHANGE_MINTEMP MSG_EXTRUDE_MINTEMP);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT_CHANGE_MINTEMP MSG_EXTRUDE_MINTEMP);
	}
	return PSTR(MSG_FILAMENT_CHANGE_MINTEMP MSG_EXTRUDE_MINTEMP);
}

/* MSG_FILAMENT_CHANGE_NOZZLE */
const char* msg_filament_change_nozzle()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_FILAMENT_CHANGE_NOZZLE);
		case UKRAINIAN:
			return PSTR(UK_MSG_FILAMENT_CHANGE_NOZZLE);
	}
	return PSTR(MSG_FILAMENT_CHANGE_NOZZLE);
}

/* MSG_SELECT_LANGUAGE */
const char* msg_select_language()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_SELECT_LANGUAGE);
		case UKRAINIAN:
			return PSTR(UK_MSG_SELECT_LANGUAGE);
	}
	return PSTR(MSG_SELECT_LANGUAGE);
}

/* MSG_ENGLISH_LANGUAGE */
const char* msg_english_lang()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ENGLISH_LANGUAGE);
		case UKRAINIAN:
			return PSTR(UK_MSG_ENGLISH_LANGUAGE);
	}
	return PSTR(MSG_ENGLISH_LANGUAGE);
}

/* MSG_UKRAINIAN_LANGUAGE */
const char* msg_ukrainian_lang()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_UKRAINIAN_LANGUAGE);
		case UKRAINIAN:
			return PSTR(UK_MSG_UKRAINIAN_LANGUAGE);
	}
	return PSTR(MSG_UKRAINIAN_LANGUAGE);
}

/* MSG_POWER_LOSS_RECOVERY */
const char* msg_power_loss_recovery()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_POWER_LOSS_RECOVERY);
		case UKRAINIAN:
			return PSTR(UK_MSG_POWER_LOSS_RECOVERY);
	}
	return PSTR(MSG_POWER_LOSS_RECOVERY);
}

/* MSG_ERR_CHANGE_FILAMENT */
const char* msg_err_change_filament()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ERR_CHANGE_FILAMENT);
		case UKRAINIAN:
			return PSTR(UK_MSG_ERR_CHANGE_FILAMENT);
	}
	return PSTR(MSG_ERR_CHANGE_FILAMENT);
}

const char* msg_err_probing_failed()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ERR_PROBING_FAILED);
		case UKRAINIAN:
			return PSTR(UK_MSG_ERR_PROBING_FAILED);
	}
	return PSTR(MSG_ERR_PROBING_FAILED);
}

const char* msg_err_homing_failed()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ERR_HOMING_FAILED);
		case UKRAINIAN:
			return PSTR(UK_MSG_ERR_HOMING_FAILED);
	}
	return PSTR(MSG_ERR_HOMING_FAILED);
}

const char* msg_err_z_homing()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_ERR_Z_HOMING);
		case UKRAINIAN:
			return PSTR(UK_MSG_ERR_Z_HOMING);
	}
	return PSTR(MSG_ERR_Z_HOMING);
}

const char* msg_heating_complete()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_HEATING_COMPLETE);
		case UKRAINIAN:
			return PSTR(UK_MSG_HEATING_COMPLETE);
	}
	return PSTR(MSG_HEATING_COMPLETE);
}

const char* msg_bed_heating()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BED_HEATING);
		case UKRAINIAN:
			return PSTR(UK_MSG_BED_HEATING);
	}
	return PSTR(MSG_BED_HEATING);
}

const char* msg_bed_done()
{
	switch (current_lang)
	{
		case ENGLISH:
			return PSTR(MSG_BED_DONE);
		case UKRAINIAN:
			return PSTR(UK_MSG_BED_DONE);
	}
	return PSTR(MSG_BED_DONE);
}
