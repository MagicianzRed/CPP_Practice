#include "3-2-2.h"
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;
using std::cin;

static string P3_4_CompareStr(string str1, string str2)
{
    /*����ַ����Ƿ�Ϊ��*/
    if (str1.empty() || str2.empty())
    {
        string result("�������ַ�������Ϊ��");
        return result;
    }
    /*����ַ����Ƿ���ͬ*/
    if (str1 == str2)
    {
        return str1;
    }
    else
    {
        /*�Ƚ������ַ�����С*/
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
        /*ÿ��ȡһ���ַ����������ӣ������ÿո������ֱ������EOF������ѭ��*/
        strALL = strALL + str + " ";
    }
    cout << strALL;
}