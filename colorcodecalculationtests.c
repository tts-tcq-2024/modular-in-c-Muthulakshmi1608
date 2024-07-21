#include "colorcodedeclaration.h"
void printreferencemanual(const ColorPair* colorPair,int pairNumber,bool Numbertocolor_flg)
{
    if(Numbertocolor_flg)
    {
        printf("Pair No: %d\n",pairNumber);
        printf("Major color: %s\n",colorPair->majorColor);
        printf("Minor Color: %s\n",colorPair->minorColor);
    }
    else
    {
        printf("Major color: %s\n",colorPair->majorColor);
        printf("Minor Color: %s\n",colorPair->minorColor);
        printf("Pair No: %d\n",pairNumber);        
    }
}

int main() {
    testNumberToPair(4, WHITE, BROWN);
    testNumberToPair(5, WHITE, SLATE);

    testPairToNumber(BLACK, ORANGE, 12);
    testPairToNumber(VIOLET, SLATE, 25);

    return 0;
}
