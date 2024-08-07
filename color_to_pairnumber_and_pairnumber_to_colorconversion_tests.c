#include "color_to_pairnumber_and_pairnumber_to_colorconversion_tests.h"

#define MAX_COLORPAIR_NAME_CHARS 16

void testNumberToPair(int pairNumber,
     MajorColor expectedMajor,
     MinorColor expectedMinor)
{
    
    ColorPair colorPair = GetColorFromPairNumber(pairNumber);
    char colorPairNames[MAX_COLORPAIR_NAME_CHARS];
    ColorPairToString(&colorPair, colorPairNames);
    printf("Got pair %s\n", colorPairNames);
    assert(colorPair.majorColor == expectedMajor);
    assert(colorPair.minorColor == expectedMinor);
  
}


void testPairToNumber(
     MajorColor major,
     MinorColor minor,
    int expectedPairNumber)
{
   
    ColorPair colorPair;
    colorPair.majorColor = major;
    colorPair.minorColor = minor;
    int pairNumber = GetPairNumberFromColor(&colorPair);
    printf("Got pair number %d\n", pairNumber);
    assert(pairNumber == expectedPairNumber);
   
}
