#include "6-2-4.h"
#include <iostream>

void P6_21(int value, int *prtValue)
{
    using std::cout;
    using std::flush;
    if (value > (*prtValue))
    {
        cout << value << flush;
    }
    else
    {
        cout << (*prtValue) << flush;
    }
}

int ff(int a, int b = 0, int c = 0);


