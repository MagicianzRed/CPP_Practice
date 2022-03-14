#include "3-3-2.h"
#include <iostream>
#include <vector>

void P3_14()
{
    using std::vector;
    using std::cin;
    using std::cout;
    vector<int> myNum;
    int inPutNum = 0;
    while (cin >> inPutNum)
    {
        if (inPutNum != 3210)
        {
            myNum.push_back(inPutNum);
        }
        /*输入密码 3210 后显示，你之前输入过的数字*/
        else
        {
            /*检查是否是一个空的对象*/
            if (myNum.empty())
            {
                cout << "你没有输入任何数字";
                break;
            }
            else
            {
                cout << "这里你之前输入过的数字：";
                for (auto i : myNum)
                {
                    cout << i << " ";
                }
            }
        }
    }
}