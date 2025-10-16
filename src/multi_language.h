#ifndef MULTI_LANGUAGE_H
#define MULTI_LANGUAGE_H

#include "language_en.h"
#include "language_uk.h"

typedef enum {
  LANGUAGE_DEFAULT,
  ENGLISH = LANGUAGE_DEFAULT,
  UKRAINIAN
} language_t;

void language_write(const language_t language);
language_t language_read();
language_t get_current_language();

/* WELCOME_MSG*/
const char* msg_welcome();

/* MSG_BACK */
const char* msg_back();

/* MSG_SD_INSERTED */
const char* msg_sd_inserted();

/* MSG_SD_REMOVED */
const char* msg_sd_removed();

/* MSG_MAIN */
const char* msg_main();

/* MSG_AUTOSTART */
const char* msg_autostart();

/* MSG_DISABLE_STEPPERS */
const char* msg_disable_steppers();

/* MSG_DEBUG_MENU */
const char* msg_debug_menu();

/* MSG_PROGRESS_BAR_TEST */
const char* msg_progress_bar_test();

/* MSG_AUTO_HOME */
const char* msg_auto_home();

/* MSG_AUTO_HOME_X */
const char* msg_auto_home_x();

/* MSG_AUTO_HOME_Y */
const char* msg_auto_home_y();

/* MSG_AUTO_HOME_Z */
const char* msg_auto_home_z();

/* MSG_LEVEL_BED_HOMING */
const char* msg_level_bed_homing();

/* MSG_LEVEL_BED_WAITING */
const char* msg_level_bed_waiting();

/* MSG_LEVEL_BED_NEXT_POINT */
const char* msg_level_bed_next_point();

/* MSG_LEVEL_BED_DONE */
const char* msg_level_bed_done();

/* MSG_Z_FADE_HEIGHT */
const char* msg_z_fade_height();

/* MSG_SET_HOME_OFFSETS */
const char* msg_set_home_offsets();

/* MSG_HOME_OFFSETS_APPLIED */
const char* msg_home_offsets_applied();

/* MSG_SET_ORIGIN */
const char* msg_set_origin();

/* MSG_PREHEAT_1 */
const char* msg_preheat_1();

/* MSG_PREHEAT_1_N1 */
const char* msg_preheat_1_n1();

/* MSG_PREHEAT_1_N2 */
const char* msg_preheat_1_n2();

/* MSG_PREHEAT_1_N3 */
const char* msg_preheat_1_n3();

/* MSG_PREHEAT_1_N4 */
const char* msg_preheat_1_n4();

/* MSG_PREHEAT_1_N5 */
const char* msg_preheat_1_n5();

/* MSG_PREHEAT_1_ALL */
const char* msg_preheat_1_all();

/* MSG_PREHEAT_1_END */
const char* msg_preheat_1_end();

/* MSG_PREHEAT_1_END1 */
const char* msg_preheat_1_end1();

/* MSG_PREHEAT_1_END2 */
const char* msg_preheat_1_end2();

/* MSG_PREHEAT_1_END3 */
const char* msg_preheat_1_end3();

/* MSG_PREHEAT_1_END4 */
const char* msg_preheat_1_end4();

/* MSG_PREHEAT_1_END5 */
const char* msg_preheat_1_end5();

/* MSG_PREHEAT_1_BEDONLY */
const char* msg_preheat_1_bedonly();

/* MSG_PREHEAT_1_SETTINGS */
const char* msg_preheat_1_setting();

/* MSG_PREHEAT_2 */
const char* msg_preheat_2();

/* MSG_PREHEAT_2_N1 */
const char* msg_preheat_2_n1();

/* MSG_PREHEAT_2_N2 */
const char* msg_preheat_2_n2();

/* MSG_PREHEAT_2_N3 */
const char* msg_preheat_2_n3();

/* MSG_PREHEAT_2_N4 */
const char* msg_preheat_2_n4();

/* MSG_PREHEAT_2_N5 */
const char* msg_preheat_2_n5();

/* MSG_PREHEAT_2_ALL */
const char* msg_preheat_2_all();

/* MSG_PREHEAT_2_END */
const char* msg_preheat_2_end();

/* MSG_PREHEAT_2_END1 */
const char* msg_preheat_2_end1();

/* MSG_PREHEAT_2_END2 */
const char* msg_preheat_2_end2();

/* MSG_PREHEAT_2_END3 */
const char* msg_preheat_2_end3();

/* MSG_PREHEAT_2_END4 */
const char* msg_preheat_2_end4();

/* MSG_PREHEAT_2_END5 */
const char* msg_preheat_2_end5();

/* MSG_PREHEAT_2_BEDONLY */
const char* msg_preheat_2_bedonly();

/* MSG_PREHEAT_2_SETTINGS */
const char* msg_preheat_2_settings();

/* MSG_COOLDOWN */
const char* msg_cooldown();

/* MSG_SWITCH_PS_ON */
const char* msg_switch_ps_on();

/* MSG_SWITCH_PS_OFF */
const char* msg_switch_ps_off();

/* MSG_EXTRUDE */
const char* msg_extrude();

/* MSG_RETRACT */
const char* msg_retract();

/* MSG_MOVE_AXIS */
const char* msg_move_axis();

/* MSG_BED_LEVELING */
const char* msg_bed_leveling();

/* MSG_LEVEL_BED */
const char* msg_level_bed();

/* MSG_LEVEL_CORNERS */
const char* msg_level_corners();

/* MSG_NEXT_CORNER */
const char* msg_next_corner();

/* MSG_USER_MENU */
const char* msg_user_menu();

/* MSG_UBL_TOOLS */
const char* msg_ubl_tools();

/* MSG_UBL_LEVEL_BED */
const char* msg_ubl_level_bed();

/* MSG_UBL_MANUAL_MESH */
const char* msg_ubl_manual_mesh();

/* MSG_UBL_ACTIVATE_MESH */
const char* msg_ubl_activate_mesh();

/* MSG_UBL_DEACTIVATE_MESH */
const char* msg_ubl_deactivate_mesh();

/* MSG_UBL_CUSTOM_BED_TEMP */
const char* msg_ubl_custom_bed_temp();

/* MSG_UBL_SET_HOTEND_TEMP */
const char* msg_ubl_set_hotend_temp();

/* MSG_UBL_CUSTOM_HOTEND_TEMP */
const char* msg_ubl_custom_hotend_temp();

/* MSG_UBL_MESH_EDIT */
const char* msg_ubl_mesh_edit();

/* MSG_UBL_BUILD_CUSTOM_MESH */
const char* msg_ubl_build_custom_mesh();

/* MSG_UBL_BUILD_MESH_MENU */
const char* msg_ubl_build_mesh_menu();

/* MSG_UBL_BUILD_PLA_MESH */
const char* msg_ubl_build_pla_mesh();

/* MSG_UBL_BUILD_ABS_MESH */
const char* msg_ubl_build_abs_mesh();

/* MSG_UBL_BUILD_COLD_MESH */
const char* msg_ubl_build_cold_mesh();

/* MSG_UBL_MESH_HEIGHT_ADJUST */
const char* msg_ubl_mesh_height_adjust();

/* MSG_UBL_MESH_HEIGHT_AMOUNT */
const char* msg_ubl_mesh_height_amount();

/* MSG_UBL_VALIDATE_MESH_MENU */
const char* msg_ubl_validate_mesh_menu();

/* MSG_UBL_VALIDATE_PLA_MESH */
const char* msg_ubl_validate_pla_mesh();

/* MSG_UBL_VALIDATE_ABS_MESH */
const char* msg_ubl_validate_abs_mesh();

/* MSG_UBL_VALIDATE_CUSTOM_MESH */
const char* msg_ubl_validate_custom_mesh();

/* MSG_UBL_CONTINUE_MESH */
const char* msg_ubl_continue_mesh();

/* MSG_UBL_MESH_LEVELING */
const char* msg_ubl_mesh_leveling();

/* MSG_UBL_3POINT_MESH_LEVELING */
const char* msg_ubl_3point_mesh_leveling();

/* MSG_UBL_GRID_MESH_LEVELING */
const char* msg_ubl_grid_mesh_leveling();

/* MSG_UBL_MESH_LEVEL */
const char* msg_ubl_mesh_level();

/* MSG_UBL_SIDE_POINTS */
const char* msg_ubl_side_points();

/* MSG_UBL_OUTPUT_MAP */
const char* msg_ubl_output_map();

/* MSG_UBL_OUTPUT_MAP_HOST */
const char* msg_ubl_output_map_host();

/* MSG_UBL_OUTPUT_MAP_CSV */
const char* msg_ubl_output_map_csv();

/* MSG_UBL_OUTPUT_MAP_BACKUP */
const char* msg_ubl_output_map_backup();

/* MSG_UBL_INFO_UBL */
const char* msg_ubl_info_ubl();

/* MSG_UBL_EDIT_MESH_MENU */
const char* msg_ubl_edit_mesh_menu();

/* MSG_UBL_FILLIN_AMOUNT */
const char* msg_ubl_fillin_amount();

/* MSG_UBL_FILLIN_AMOUNT */
const char* msg_ubl_manual_fillin();

/* MSG_UBL_SMART_FILLIN */
const char* msg_ubl_smart_fillin();

/* MSG_UBL_FILLIN_MESH */
const char* msg_ubl_fillin_mesh();

/* MSG_UBL_INVALIDATE_ALL */
const char* msg_ubl_invalidate_all();

/* MSG_UBL_INVALIDATE_CLOSEST */
const char* msg_ubl_invalidate_closest();

/* MSG_UBL_FINE_TUNE_ALL */
const char* msg_ubl_fine_tune_all();

/* MSG_UBL_FINE_TUNE_CLOSEST */
const char* msg_ubl_fine_tune_closest();

/* MSG_UBL_STORAGE_MESH_MENU */
const char* msg_ubl_storage_mesh_menu();

/* MSG_UBL_STORAGE_SLOT */
const char* msg_ubl_storage_slot();

/* MSG_UBL_LOAD_MESH */
const char* msg_ubl_load_mesh();

/* MSG_UBL_SAVE_MESH */
const char* msg_ubl_save_mesh();

/* MSG_MESH_LOADED */
const char* msg_mesh_loaded();

/* MSG_MESH_SAVED */
const char* msg_mesh_saved();

/* MSG_NO_STORAGE */
const char* msg_no_storage();

/* MSG_UBL_STEP_BY_STEP_MENU */
const char* msg_ubl_step_by_step_menu();

/* MSG_FREE_XY */
const char* msg_free_xy();

/* MSG_MOVE_X */
const char* msg_move_x();

/* MSG_MOVE_Y */
const char* msg_move_y();

/* MSG_MOVE_Z */
const char* msg_move_z();

/* MSG_MOVE_E */
const char* msg_move_e();

/* MSG_MOVE_E1 */
const char* msg_move_e1();

/* MSG_MOVE_E2 */
const char* msg_move_e2();

/* MSG_MOVE_E3 */
const char* msg_move_e3();

/* MSG_MOVE_E4 */
const char* msg_move_e4();

/* MSG_MOVE_E5 */
const char* msg_move_e5();

/* MSG_MOVE_01MM */
const char* msg_move_01mm();

/* MSG_MOVE_1MM */
const char* msg_move_1mm();

/* MSG_MOVE_10MM */
const char* msg_move_10mm();

/* MSG_SPEED */
const char* msg_speed();

/* MSG_BED_Z */
const char* msg_bed_z();

/* MSG_NOZZLE */
const char* msg_nozzle();

/* MSG_NOZZLE1 */
const char* msg_nozzle1();

/* MSG_NOZZLE2 */
const char* msg_nozzle2();

/* MSG_NOZZLE3 */
const char* msg_nozzle3();

/* MSG_NOZZLE4 */
const char* msg_nozzle4();

/* MSG_NOZZLE5 */
const char* msg_nozzle5();

/* MSG_BED */
const char* msg_bed();

/* MSG_FAN_SPEED */
const char* msg_fan_speed();

/* MSG_FAN_SPEED MSG_N2 */
const char* msg_fan_speed2();

/* MSG_FAN_SPEED MSG_N3 */
const char* msg_fan_speed3();

/* MSG_FLOW */
const char* msg_flow();

/* MSG_FLOW1 */
const char* msg_flow1();

/* MSG_FLOW2 */
const char* msg_flow2();

/* MSG_FLOW3 */
const char* msg_flow3();

/* MSG_FLOW4 */
const char* msg_flow4();

/* MSG_FLOW5 */
const char* msg_flow5();

/* MSG_CONTROL */
const char* msg_control();

/* MSG_MIN */
const char* msg_min();

/* MSG_MAX */
const char* msg_max();

/* MSG_FACTOR */
const char* msg_factor();

/* MSG_AUTOTEMP */
const char* msg_autotemp();

/* MSG_ON */
const char* msg_on();

/* MSG_OFF */
const char* msg_off();

/* MSG_PID_P */
const char* msg_pid_p();

/* MSG_PID_I */
const char* msg_pid_i();

/* MSG_PID_D */
const char* msg_pid_d();

/* MSG_PID_C */
const char* msg_pid_c();

/* MSG_SELECT */
const char* msg_select();

/* MSG_SELECT MSG_E1*/
const char* msg_select1();

/* MSG_SELECT MSG_E2*/
const char* msg_select2();

/* MSG_ACC */
const char* msg_acc();

/* MSG_JERK */
const char* msg_jerk();

/* MSG_VX_JERK */
const char* msg_vx_jerk();

/* MSG_VY_JERK */
const char* msg_vy_jerk();

/* MSG_VZ_JERK */
const char* msg_vz_jerk();

/* MSG_VE_JERK */
const char* msg_ve_jerk();

/* MSG_VMAXX */
const char* msg_vmaxx();

/* MSG_VMAXY */
const char* msg_vmaxy();

/* MSG_VMAXZ */
const char* msg_vmaxz();

/* MSG_VMAXE */
const char* msg_vmaxe();

/* MSG_VMAXE1 */
const char* msg_vmaxe1();

/* MSG_VMAXE2 */
const char* msg_vmaxe2();

/* MSG_VMAXE3 */
const char* msg_vmaxe3();

/* MSG_VMAXE4 */
const char* msg_vmaxe4();

/* MSG_VMAXE5 */
const char* msg_vmaxe5();

/* MSG_VELOCITY */
const char* msg_velocity();

/* MSG_VMIN */
const char* msg_vmin();

/* MSG_VTRAV_MIN */
const char* msg_vtrav_min();

/* MSG_ACCELERATION */
const char* msg_acceleration();

/* MSG_AMAXX */
const char* msg_amaxx();

/* MSG_AMAXY */
const char* msg_amaxy();

/* MSG_AMAXZ */
const char* msg_amaxz();

/* MSG_AMAXE */
const char* msg_amaxe();

/* MSG_AMAXE1 */
const char* msg_amaxe1();

/* MSG_AMAXE2 */
const char* msg_amaxe2();

/* MSG_AMAXE3 */
const char* msg_amaxe3();

/* MSG_AMAXE4 */
const char* msg_amaxe4();

/* MSG_AMAXE5 */
const char* msg_amaxe5();

/* MSG_A_RETRACT */
const char* msg_a_retract();

/* MSG_A_TRAVEL */
const char* msg_a_travel();

/* MSG_STEPS_PER_MM */
const char* msg_steps_per_mm();

/* MSG_XSTEPS */
const char* msg_xsteps();

/* MSG_YSTEPS */
const char* msg_ysteps();

/* MSG_ZSTEPS */
const char* msg_zsteps();

/* MSG_ESTEPS */
const char* msg_esteps();

/* MSG_E1STEPS */
const char* msg_e1steps();

/* MSG_E2STEPS */
const char* msg_e2steps();

/* MSG_E3STEPS */
const char* msg_e3steps();

/* MSG_E4STEPS */
const char* msg_e4steps();

/* MSG_E5STEPS */
const char* msg_e5steps();

/* MSG_TEMPERATURE */
const char* msg_temperature();

/* MSG_MOTION */
const char* msg_motion();

/* MSG_FILAMENT */
const char* msg_filament();

/* MSG_VOLUMETRIC_ENABLED */
const char* msg_volumetric_enabled();

/* MSG_FILAMENT_DIAM */
const char* msg_filament_diam();

/* MSG_FILAMENT_DIAM1 */
const char* msg_filament_diam1();

/* MSG_FILAMENT_DIAM2 */
const char* msg_filament_diam2();

/* MSG_FILAMENT_DIAM3 */
const char* msg_filament_diam3();

/* MSG_FILAMENT_DIAM4 */
const char* msg_filament_diam4();

/* MSG_FILAMENT_DIAM5 */
const char* msg_filament_diam5();

/* MSG_ADVANCE_K */
const char* msg_advance_k();

/* MSG_CONTRAST */
const char* msg_contrast();

/* MSG_STORE_EEPROM */
const char* msg_store_eeprom();

/* MSG_LOAD_EEPROM */
const char* msg_load_eeprom();

/* MSG_RESTORE_FAILSAFE */
const char* msg_restore_failsafe();

/* MSG_INIT_EEPROM */
const char* msg_init_eeprom();

/* MSG_REFRESH */
const char* msg_refresh();

/* MSG_WATCH */
const char* msg_watch();

/* MSG_PREPARE */
const char* msg_prepare();

/* MSG_TUNE */
const char* msg_tune();

/* MSG_PAUSE_PRINT */
const char* msg_pause_print();

/* MSG_RESUME_PRINT */
const char* msg_resume_print();

/* MSG_STOP_PRINT */
const char* msg_stop_print();

/* MSG_CARD_MENU */
const char* msg_card_menu();

/* MSG_NO_CARD */
const char* msg_no_card();

/* MSG_DWELL */
const char* msg_dwell();

/* MSG_USERWAIT */
const char* msg_userwait();

/* MSG_RESUMING */
const char* msg_resuming();

/* MSG_PRINT_ABORTED */
const char* msg_print_aborted();

/* MSG_PRINT_PAUSED */
const char* msg_print_paused();

/* MSG_NO_MOVE */
const char* msg_no_move();

/* MSG_KILLED */
const char* msg_killed();

/* MSG_STOPPED */
const char* msg_stopped();

/* MSG_CONTROL_RETRACT */
const char* msg_control_retract();

/* MSG_CONTROL_RETRACT_SWAP */
const char* msg_control_retract_swap();

/* MSG_CONTROL_RETRACTF */
const char* msg_control_retractf();

/* MSG_CONTROL_RETRACT_ZLIFT */
const char* msg_control_retract_zlift();

/* MSG_CONTROL_RETRACT_RECOVER */
const char* msg_control_retract_recover();

/* MSG_CONTROL_RETRACT_RECOVER_SWAP */
const char* msg_control_retract_recover_swap();

/* MSG_CONTROL_RETRACT_RECOVERF */
const char* msg_control_retract_recoverf();

/* MSG_AUTORETRACT */
const char* msg_autoretract();

/* MSG_FILAMENTCHANGE */
const char* msg_filamentchange();

/* MSG_INIT_SDCARD */
const char* msg_init_sdcard();

/* MSG_CNG_SDCARD */
const char* msg_cng_sdcard();

/* MSG_ZPROBE_OUT */
const char* msg_zprobe_out();

/* MSG_BLTOUCH */
const char* msg_bltouch();

/* MSG_BLTOUCH_SELFTEST */
const char* msg_bltouch_selftest();

/* MSG_BLTOUCH_RESET */
const char* msg_bltouch_reset();

/* MSG_BLTOUCH_DEPLOY */
const char* msg_bltouch_deploy();

/* MSG_BLTOUCH_STOW */
const char* msg_bltouch_stow();

/* MSG_BLTOUCH_SW_MODE */
const char* msg_bltouch_sw_mode();

/* MSG_BLTOUCH_5V_MODE */
const char* msg_bltouch_5v_mode();

/* MSG_BLTOUCH_OD_MODE */
const char* msg_bltouch_od_mode();

/* MSG_HOME */
const char* msg_home();

/* MSG_FIRST */
const char* msg_first();

/* MSG_ZPROBE_ZOFFSET */
const char* msg_zprobe_zoffset();

/* MSG_BABYSTEP_X */
const char* msg_babystep_x();

/* MSG_BABYSTEP_Y */
const char* msg_babystep_y();

/* MSG_BABYSTEP_Z */
const char* msg_babystep_z();

/* MSG_ENDSTOP_ABORT */
const char* msg_endstop_abort();

/* MSG_HEATING_FAILED_LCD */
const char* msg_heating_failed_lcd();

/* MSG_ERR_REDUNDANT_TEMP */
const char* msg_err_redundant_temp();

/* MSG_THERMAL_RUNAWAY */
const char* msg_thermal_runaway();

/* MSG_ERR_MAXTEMP */
const char* msg_err_maxtemp();

/* MSG_ERR_MINTEMP */
const char* msg_err_mintemp();

/* MSG_ERR_MAXTEMP_BED */
const char* msg_err_maxtemp_bed();

/* MSG_ERR_MINTEMP_BED */
const char* msg_err_mintemp_bed();

/* MSG_DELTA_SETTINGS */
const char* msg_delta_settings();

/* MSG_DELTA_AUTO_CALIBRATE */
const char* msg_delta_auto_calibrate();

/* MSG_DELTA_HEIGHT_CALIBRATE */
const char* msg_delta_height_calibrate();

/* MSG_DELTA_DIAG_ROG */
const char* msg_delta_diag_rog();

/* MSG_DELTA_HEIGHT */
const char* msg_delta_height();

/* MSG_DELTA_RADIUS */
const char* msg_delta_radius();

/* MSG_INFO_MENU */
const char* msg_info_menu();

/* MSG_INFO_PRINTER_MENU */
const char* msg_info_printer_menu();

/* MSG_3POINT_LEVELING */
const char* msg_3point_leveling();

/* MSG_LINEAR_LEVELING */
const char* msg_linear_leveling();

/* MSG_BILINEAR_LEVELING */
const char* msg_bilinear_leveling();

/* MSG_UBL_LEVELING */
const char* msg_ubl_leveling();

/* MSG_MESH_LEVELING */
const char* msg_mesh_leveling();

/* MSG_INFO_STATS_MENU */
const char* msg_info_stats_menu();

/* MSG_INFO_BOARD_MENU */
const char* msg_info_board_menu();

/* MSG_INFO_THERMISTOR_MENU */
const char* msg_info_thermistor_menu();

/* MSG_INFO_EXTRUDERS */
const char* msg_info_extruders();

/* MSG_INFO_BAUDRATE */
const char* msg_info_baudrate();

/* MSG_INFO_PROTOCOL */
const char* msg_info_protocol();

/* MSG_CASE_LIGHT */
const char* msg_case_light();

/* MSG_CASE_LIGHT */
const char* msg_case_light_brightness();

/* MSG_INFO_PRINT_COUNT */
const char* msg_info_print_count();

/* MSG_INFO_COMPLETED_PRINTS */
const char* msg_info_completed_prints();

/* MSG_INFO_PRINT_TIME */
const char* msg_info_print_time();

/* MSG_INFO_PRINT_LONGEST */
const char* msg_info_print_longest();

/* MSG_INFO_PRINT_FILAMENT */
const char* msg_info_print_filament();

/* MSG_INFO_MIN_TEMP */
const char* msg_info_min_temp();

/* MSG_INFO_MAX_TEMP */
const char* msg_info_max_temp();

/* MSG_INFO_PSU */
const char* msg_info_psu();

/* MSG_DRIVE_STRENGTH */
const char* msg_drive_strength();

/* MSG_X MSG_DRIVE_STRENGTH */
const char* msg_drive_strengthx();

/* MSG_Y MSG_DRIVE_STRENGTH */
const char* msg_drive_strengthy();

/* MSG_Z MSG_DRIVE_STRENGTH */
const char* msg_drive_strengthz();

/* MSG_E MSG_DRIVE_STRENGTH */
const char* msg_drive_strengthe();

/* MSG_DAC_EEPROM_WRITE */
const char* msg_dac_eeprom_write();

/* MSG_FILAMENT_CHANGE_HEADER */
const char* msg_filament_change_header();

/* MSG_FILAMENT_CHANGE_OPTION_HEADER */
const char* msg_filament_change_option_header();

/* MSG_FILAMENT_CHANGE_OPTION_EXTRUDE */
const char* msg_filament_change_option_extrude();

/* MSG_FILAMENT_CHANGE_OPTION_RESUME */
const char* msg_filament_change_option_resume();

/* MSG_FILAMENT_CHANGE_MINTEMP */
const char* msg_filament_change_mintemp();

/* MSG_FILAMENT_CHANGE_NOZZLE */
const char* msg_filament_change_nozzle();

/* MSG_SELECT_LANGUAGE */
const char* msg_select_language();

/* MSG_ENGLISH_LANGUAGE */
const char* msg_english_lang();

/* MSG_UKRAINIAN_LANGUAGE */
const char* msg_ukrainian_lang();

/* MSG_POWER_LOSS_RECOVERY */
const char* msg_power_loss_recovery();

/* MSG_ERR_CHANGE_FILAMENT */
const char* msg_err_change_filament();

/* MSG_ERR_PROBING_FAILED */
const char* msg_err_probing_failed();

/* MSG_ERR_HOMING_FAILED */
const char* msg_err_homing_failed();

/* MSG_ERR_Z_HOMING */
const char* msg_err_z_homing();

/* MSG_HEATING_COMPLETE */
const char* msg_heating_complete();

/* MSG_BED_HEATING */
const char* msg_bed_heating();

/* MSG_BED_DONE */
const char* msg_bed_done();

#endif		// __LANGUAGE_H