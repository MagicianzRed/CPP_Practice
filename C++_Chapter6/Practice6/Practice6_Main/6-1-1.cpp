#include "6-1-1.h"

void P6_7(void)
{
    static int staticValues = 0;
    /*��һ�ε��ã�������*/
    if (staticValues == 0)
    {
        return;
    }
    /*�ڶ��μ����ϣ�����*/
    else
    {
        staticValues++;
    }
}