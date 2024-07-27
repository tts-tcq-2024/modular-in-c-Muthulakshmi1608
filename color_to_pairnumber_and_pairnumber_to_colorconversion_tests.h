#ifndef COLOR_TO_PAIRNUMBER_AND_PAIRNUMBER_TO_COLORCONVERSION_TESTS_H
#define COLOR_TO_PAIRNUMBER_AND_PAIRNUMBER_TO_COLORCONVERSION_TESTS_H

#include "convert_colorpair_to_string.h"
#include "identify_color_from_pairnumber.h"
#include "identify_pairnumber_from_color.h"

void testPairToNumber(enum MajorColor major,enum MinorColor minor, int expectedPairNumber);
void testNumberToPair(int pairNumber,enum MajorColor expectedMajor,enum MinorColor expectedMinor);
#endif
