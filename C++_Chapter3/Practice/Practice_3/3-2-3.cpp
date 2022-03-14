#include "3-2-3.h"
#include <string>
#include <iostream>
using std::string;
using std::cout;

void P3_6()
{
    string str1("I am the bone of my sword");
    for (auto &i : str1)
    {
        i = 'x';
    }
    cout << str1;
}

void P3_10()
{
    string str1("we are the asdoifjse, iowjeafoi weiowaejfk,");
    string strcut("");
    for (auto i : str1)
    {
        if (ispunct(i))
        {
            int sb = ispunct(i);
            cout << sb << std::endl;
            break;
        }
        strcut += i;
    }
    cout << strcut;
}