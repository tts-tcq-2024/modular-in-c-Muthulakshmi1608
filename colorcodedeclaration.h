#ifndef COLORCODEDECLARATION_H
#define COLORCODEDECLARATION_H

#include <stdio.h>
#include <assert.h>
#include <stdbool.h>

typedef enum {WHITE, RED, BLACK, YELLOW, VIOLET} MajorColor;
typedef enum {BLUE, ORANGE, GREEN, BROWN, SLATE} MinorColor;

extern const char* MajorColorNames[];
extern const char* MinorColorNames[];
extern int numberOfMajorColors;
extern int numberOfMinorColors;

typedef struct {
    enum MajorColor majorColor;
    enum MinorColor minorColor;
} ColorPair;



void PrintColorCodingReferenceManual();

#endif

