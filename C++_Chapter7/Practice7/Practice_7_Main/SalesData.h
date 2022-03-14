#pragma once
#include <string>
#include <iostream>

struct Sales_data
{
    // 新成员：关于Sales_data 对象操作
    std::string isbn() const { return bookNo; }
    Sales_data& Combine(const Sales_data&);
    double AvgPrice() const;
    // 数据成员
    std::string bookNo;
    unsigned unitsSold = 0;
    double revenue = 0;
};

// Sales_data的非成员接口函数
Sales_data Add(const Sales_data&, const Sales_data&);
std::ostream& Print(std::ostream&, const Sales_data&);
std::istream& Read(std::istream&, Sales_data&);
