#include "6-2-1.h"

void P6_10(int *ptrValue1, int *ptrValue2)
{
    int tmpValue = 0;
    tmpValue = *ptrValue1;
    *ptrValue1 = *ptrValue2;
    *ptrValue2 = tmpValue;
}