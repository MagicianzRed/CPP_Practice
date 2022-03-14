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
        /*题目上要求 if 可以改成switch*/
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
    cout << "一共有 " << counters << " 个元音字母";
}