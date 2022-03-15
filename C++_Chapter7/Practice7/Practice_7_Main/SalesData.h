#pragma once
#include <string>
#include <iostream>

class Sales_data
{
    // 为 Sales_data 的非成员函数所做的友元声明
    friend Sales_data Add(const Sales_data&, const Sales_data&);
    friend std::ostream& Print(std::ostream&, const Sales_data&);
    friend std::istream& Read(std::istream&, Sales_data&);
public:
    // 新增构造函数
    Sales_data() = default;     // 我们需要合成的默认构造函数,才用这种方法定义
    Sales_data(const std::string &s) : bookNo(s){ }
    Sales_data(const std::string &s, unsigned n, double p):
                bookNo(s), unitsSold(n), revenue(p*n) { }
    Sales_data(std::istream &);
    /*如果编译器不支持内置初始值，则需要用构造函数初始值列表*/

    // 新成员：关于 Sales_data 对象操作
    /*
    * 我们不能显示的定义 自己的 this 指针
    * 因此  std::string isbn() const 被成为 常量成员函数
    * 在这里指的是 把 this 指针声明为 cosnt this (伪代码)
    */
    std::string isbn() const { return bookNo; }
    Sales_data& Combine(const Sales_data&);
private:
    double AvgPrice() const
    { return unitsSold ? (revenue / unitsSold) : 0; }
    // 数据成员
    std::string bookNo;
    unsigned unitsSold = 0;
    double revenue = 0.0;
};

// Sales_data 的非成员接口函数, 在这里声明可以使得的用户调用这些函数
Sales_data Add(const Sales_data&, const Sales_data&);
std::ostream& Print(std::ostream&, const Sales_data&);
std::istream& Read(std::istream&, Sales_data&);
