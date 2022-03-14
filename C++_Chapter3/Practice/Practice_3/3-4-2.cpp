#include "3-4-2.h"
#include <iostream>
#include <vector>
#include <typeinfo>

void P3_24()
{
    using std::cout;
    using std::endl;
    using std::vector;

    vector<int> myNumber = { 1,2,3,4,5,6,7,8,9,10 };

    // myNumber 的起始迭代器
    auto beg = myNumber.begin();
    // myNumber 的尾迭代器
    auto end = myNumber.end() - 1;

    /*为什么要多加上myNumber.begin(), 因为需要是的 mid 的类型为 迭代器 类型*/
    auto mid = myNumber.begin() + (end - beg) / 2;

    /*查看两个迭代器相减后是什么类型, 因为迭代器并没有重载 + 运算符*/
    cout << typeid(end - beg).name() << endl;           // int 类型
    cout << typeid(myNumber.begin()).name() << endl;    // 迭代器 类型

    /*综上，重载的 + 运算符仅适用于 迭代器 与 整数 之间的运算
    * 重载的 - 运算符可以允许 迭代器 与 迭代器 之间的运算
    */
    do
    {
        cout << *beg + *end << endl;

    } while ((mid != --end) && (mid != ++beg)); // 如果再循环中--或者++则会出现计算错误
    cout << *mid;
}