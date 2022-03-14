#include "5-4-1.h"
#include <iostream>
#include <string>
#include <vector>
using std::string;

void P5_14()
{
    using std::cin;
    using std::cout;
    /*用于 接受 输入*/
    string aStr("");
    /*用于 读取 输入*/
    string rStr("");
    /*用于 比较 读取的输入*/
    string rStrtmp( "");
    /*用于 存储 连续最多的输入*/
    string mStrtmp("");
    /*记录连续次数*/
    int counter = 0;
    /*存储最高连续次数*/
    int mCounter = 0;

    getline(cin, aStr);

    /*计算一行话中，重复的单词数量*/
    for (auto i : aStr)
    {
        /*遇到空格计数归零*/
        if (isspace(i) && (rStr != " "))
        {
            /*如果两个字符串相同*/
            if (rStrtmp == rStr)
            {
                /*计数 +1 */
                ++counter;
                /*检查是否超过了最高记录次数*/
                if (counter > mCounter)
                {
                    /*超过则赋予最高的记录次数，并记录当前字符串*/
                    mCounter = counter;
                    mStrtmp = rStr;
                }
            }
            /*如果这两个字符不相同*/
            else
            {
                counter = 0;
            }
            /*更新最新字符串*/
            rStrtmp = rStr;
            /*清除最新的记录内容*/
            rStr.clear();
        }
        /*遇见字母记录至 string 对象中*/
        if (isalpha(i))
        {
            rStr += i;
        }
        
    }
    /*有连续相同的单词, 输入改单词及其出现次数*/
    if (0 != mCounter)
    {
        cout << mStrtmp << " 连续出现了 " << mCounter << " 次";
        counter = 0;
    }
    /*否则回复消息*/
    else
    {
        cout << "没有连续相同的单词";
    }
};