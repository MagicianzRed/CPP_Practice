#include "3-2-2.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

static string P3_4_CompareStr(string str1, string str2)
{
    /*检查字符串是否为空*/
    if (str1.empty() || str2.empty())
    {
        string result("错误，有字符串输入为空");
        return result;
    }
    /*检查字符串是否相同*/
    if (str1 == str2)
    {
        return str1;
    }
    else
    {
        /*比较两个字符串大小*/
        if (str1 >= str2)
        {
            return str1;
        }
        else
        {
            return str2;
        }
    }

}

void p3_2()
{
    string mystr("");
    while (std::getline(std::cin, mystr))
    {
        break;
    }

    cout << mystr << endl;

}

void P3_3()
{
    /*
    * P78
    */
}

void P3_4()
{
    string str1("The world");
    string str2("ZA WALUDUO!");
    string myStr = P3_4_CompareStr(str1, str2);
    cout << myStr;
}

void P3_5()
{
    string str("");
    string strALL("");
    while (cin >> str)
    {
        /*每获取一次字符串将其连接，并且用空格隔开，直到输入EOF则跳出循环*/
        strALL = strALL + str + " ";
    }
    cout << strALL;
}