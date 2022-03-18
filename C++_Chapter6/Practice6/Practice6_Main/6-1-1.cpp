#include "6-1-1.h"

void P6_7(void)
{
    static int staticValues = 0;
    /*第一次调用，不自增*/
    if (staticValues == 0)
    {
        return;
    }
    /*第二次及以上，自增*/
    else
    {
        staticValues++;
    }
}