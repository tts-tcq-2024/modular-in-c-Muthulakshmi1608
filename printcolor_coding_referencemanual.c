#include "printcolor_coding_referencemanual.h"

void PrintColorCodingReferenceManual() {
    char colorPairNames[16];
    for (int pairNumber = 1; pairNumber <= numberOfMajorColors * numberOfMinorColors; pairNumber++) {
        ColorPair colorPair = GetColorFromPairNumber(pairNumber);
        ColorPairToString(&colorPair, colorPairNames);
        printf("%d: %s\n", pairNumber, colorPairNames);
    }
}
