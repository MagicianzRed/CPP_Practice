#include "PracticeFunction.h"

void P9_26()
{
    using std::list;
    using std::vector;
    using std::begin;
    using std::end;

    int ia[] = { 0,1,1,2,3,5,8,13,2,55,89,88 };

    auto begIa = begin(ia);
    auto endIa = end(ia);

    /*删除偶数*/
    vector<int> vArr(begIa, endIa);
    auto begVarr = vArr.begin();
    /*这里使用 vArr.end() 同理，因为删除之后的位置迭代器失效了，因此要及时刷新 vArr.end()*/
    while (begVarr != vArr.end())
    {
        if (((*begVarr) % 2) == 0)
        {
            /*注意：删除点之后的位置的迭代器会失效，因此我们需要重新赋值*/
            begVarr = vArr.erase(begVarr);
        }
        else
        {
            begVarr++;
        }
    }
    /*输出删除后的内容*/
    for (auto &i : vArr)
    {
        std::cout << i << std::endl;
    }

    /*删除奇数*/
    list<int>   lArr(begIa, endIa);
    auto begLarr = lArr.begin();
    /*与 vector 同理，不再重复注释*/
    while (begLarr != lArr.end())
    {
        if (((*begLarr) % 2) == 1)
        {
            
            begLarr = lArr.erase(begLarr);
        }
        else
        {
            begLarr++;
        }
    }

    /*输出删除后的内容*/
    for (auto& i : lArr)
    {
        std::cout << i << std::endl;
    }
}