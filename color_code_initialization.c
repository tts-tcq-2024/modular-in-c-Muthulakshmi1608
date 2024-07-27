#include "colorcodedeclaration.h"

const char* MajorColorNames[] = {
    "White", "Red", "Black", "Yellow", "Violet"
};
int numberOfMajorColors =
    sizeof(MajorColorNames) / sizeof(MajorColorNames[0]);
const char* MinorColorNames[] = {
    "Blue", "Orange", "Green", "Brown", "Slate"
};
const int MAX_COLORPAIR_NAME_CHARS = 16;
int numberOfMinorColors =
    sizeof(MinorColorNames) / sizeof(MinorColorNames[0]);





void PrintColorCodingReferenceManual() {
    char colorPairNames[16];
    for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) {
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        ColorPairToString(&colorPair, colorPairNames);
        printf("%d: %s\n", pairNumber, colorPairNames);
    }
}
