#include "susBoard.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[0] = LAYOUT_all(
		KC_P1, KC_P2, KC_P3, 
		KC_P4, KC_P5, KC_P6, 
		MO(1), KC_P7, KC_P8, KC_P9, 
		KC_P0, KC_SPC),

	[1] = LAYOUT_all(
		KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, 
		KC_TRNS, KC_TRNS),

};
