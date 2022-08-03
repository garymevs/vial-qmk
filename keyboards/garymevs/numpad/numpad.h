#ifndef NUMPAD_H
#define NUMPAD_H

#include "quantum.h"

#define LAYOUT_all( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13, \
	K20, K21, K22, K23, \
	K30, K31, K32, K33, \
	K40, K41, K42, K43 \
) { \
	{ K00,   K01,   K02,   K03 }, \
	{ K10,   K11,   K12,   K13 }, \
	{ K20,   K21,   K22,   K23 }, \
	{ K30,   K31,   K32,   K33 }, \
	{ K40,   K41,   K42,   K43 }  \
}

#define LAYOUT_flipped( \
	K00, K01, K02, K03, \
	K10, K11, K12, K13, \
	K20, K21, K22, K23, \
	K30, K31, K32, K33, \
	K40, K41, K42, K43 \
) { \
	{K03, K02, K01, K00}, \
	{K13, K12, K11, K10}, \
	{K23, K22, K21, K20}, \
	{K33, K32, K31, K30}, \
	{K43, K42, K41, K40} \
}

#endif