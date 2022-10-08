
#pragma once

#include "quantum.h"

#define LAYOUT_all( \
	     K01, K02, K03, \
	     K11, K12, K13, \
	K20, K21, K22, K23, \
	     K31,      K33  \
) { \
	{ KC_NO, K01,   K02,   K03 }, \
	{ KC_NO, K11,   K12,   K13 }, \
	{ K20,   K21,   K22,   K23 }, \
	{ KC_NO, K31,   KC_NO, K33 }  \
}

