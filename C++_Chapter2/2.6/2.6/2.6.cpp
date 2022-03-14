// 2.6.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "Salsedata.h"

int main()
{
    /************************第一笔交易***********************/
    double  price = 0;   // 书的单价
    int dealFlag = -1;
    Sales_data data1, data2;
    
    std::cin >> data1.bookNO >> data1.units_sold >> price;
    data1.revenue = data1.units_sold * price;
    /************************第一笔交易***********************/

    /************************第二笔交易***********************/
    std::cin >> data2.bookNO >> data2.units_sold >> price;

    data2.revenue = data2.units_sold * price;
    /************************第二笔交易***********************/

    dealFlag = Check_deal(&data1, &data2);

    return 0;

}