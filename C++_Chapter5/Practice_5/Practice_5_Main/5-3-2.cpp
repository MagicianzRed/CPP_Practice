#include <iostream>
#include <string>
#include <vector>
#include"5-3-2.h"

void P5_9__12()
{
    using std::cin;
    using std::cout;
    char a = ' ';
    int counters = 0;
    while(cin >> a)
    {
        /*��Ŀ��Ҫ�� if ���Ըĳ�switch*/
        if (('a' == a) || ('A' == a))
        {
            ++counters;
        }
        else if (('e' == a) || ('E' == a))
        {
            ++counters;
        }
        else if (('i' == a) || ('I' == a))
        {
            ++counters;
        }
        else if (('o' == a) || ('O' == a))
        {
            ++counters;
        }
        else if (('u' == a) || ('U' == a))
        {
            ++counters;
        }

    }
    cout << "һ���� " << counters << " ��Ԫ����ĸ";
}