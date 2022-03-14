#pragma once
#include <string>
#include <iostream>

struct Sales_data
{
    // 新成员：关于Sales_data 对象操作
    /*
    * 我们不能显示的定义 自己的 this 指针
    * 因此  std::string isbn() const 被成为 常量成员函数
    * 在这里指的是 把 this 指针声明为 cosnt this (伪代码)
    */
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
