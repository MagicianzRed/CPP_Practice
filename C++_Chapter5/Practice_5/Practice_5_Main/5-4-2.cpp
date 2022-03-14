#include "5-4-2.h"
#include <vector>
#include <iostream>
using std::vector;


/// <summary>
/// 判断两个vector对象数组前缀是否相同
/// </summary>
/// <param name="cmpNum1"></数组1>
/// <param name="cmpNum2"></数组2>
/// <返回值><1 为前缀相同，0 为前缀不同, >
static int NumBerCompare(const vector<int> &cmpNum1, const vector<int> &cmpNum2)
{
    /*给每个数组创建迭代器*/
    auto cmpNum1Beg = cmpNum1.begin();
    auto cmpNum1End = cmpNum1.end();

    auto cmpNum2Beg = cmpNum2.begin();
    auto cmpNum2End = cmpNum2.end();

    /*比较两者大小*/
    if ((cmpNum1End - cmpNum1Beg) >= (cmpNum2End - cmpNum2Beg))
    {
        /*较小的数组作为循环主体*/
        for (auto i : cmpNum2)
        {
            /*检查头四个数字是否相同*/
            if (i == *cmpNum1Beg)
            {
                ++cmpNum1Beg;
            }
            else
            {
                /*发现不同则退出函数*/
                return 0;
            }
        }
        return 1;
    }
    else
    {
        /*较小的数组作为循环主体*/
        for (auto i : cmpNum1)
        {
            /*检查头四个数字是否相同*/
            if (i == *cmpNum2Beg)
            {
                ++cmpNum2Beg;
            }
            else
            {
                /*发现不同则退出函数*/
                return 0;
            }
        }
        return 1;
    }
}

/// <summary>
/// 该题我假定前四个相同则认定为前缀相同，若小于四个则全部比较
/// </summary>
/// 
void P5_17()
{
    using std::cout;
    
    vector<int> arNum = { 0, 1, 1, 2 };
    vector<int> arNumCmp = { 0, 1, 1, 2, 23, 44, 55 };

    /*首先比较前缀（第一个数字）*/
    if (arNum[0] == arNumCmp[0])
    {
        cout << NumBerCompare(arNum, arNumCmp);
    }
    /*如果不同输出错误*/
    else
    {
        cout << "错误";
    }
}