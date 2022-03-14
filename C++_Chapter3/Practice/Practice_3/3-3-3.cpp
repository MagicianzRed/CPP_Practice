#include "3-3-3.h"
#include <iostream>
#include <vector>
#include <string>

void P3_16()
{
    
}

void P3_17()
{
    using std::vector;
    using std::string;
    using std::cout;
    using std::cin;

    string myStr("");
    vector<string> outStr1;

    while (cin >> myStr)
    {
        /*检查输入的字符串是否为空*/
        if (myStr.empty())
        {
            cout << "输入了空的字符串，请重新运行代码";
            break;
        }
        else
        {
            outStr1.push_back(myStr);
        }
        /*输入密码可以显示你所输入的东西*/
        if (myStr == "showmethemoney")
        {
            /*数组中没有东西则不输出*/
            if (outStr1.empty())
            {
                cout << "你没有输入任何东西";
                break;
            }
            /*将数组中所有的字母转换成大写*/
            else
            {
                for (auto& i : outStr1)     // 取出字符串
                {
                    for (auto& j : i)       // 取出单个字符
                    {
                        j = toupper(j);
                    }
                    cout << i << std::endl;
                }
            }
        }
    }
}

void P3_20()
{
    using std::cout;
    using std::endl;
    using std::vector;

    vector<int> myNumber = { 1,2,3,4,5,6,7,8,9,10 };
    for (int i = 0; i != myNumber.size() - 1; i++)
    {
        int tmpnum = 0;
        tmpnum = myNumber[i] + myNumber[myNumber.size() - i - 1];
        cout << tmpnum << endl;
    }
}