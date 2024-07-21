#include "colorcodedeclaration.h"
void printreferencemanual(const ColorPair* colorPair,int pairNumber,bool Numbertocolor_flg)
{
    if(Numbertocolor_flg)
    {
        printf("Pair No: %d, Major color: %s,Minor Color: %s\n",pairNumber,(MajorColorNames[colorPair->majorColor]),(MinorColorNames[colorPair->minorColor]));
    }
    else
    {    
        printf("Pair No: %d, Major color: %s,Minor Color: %s\n",pairNumber,(MajorColorNames[colorPair->majorColor]),(MinorColorNames[colorPair->minorColor]));
    }
}

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
