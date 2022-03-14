#pragma once
#include <string>
#include <iostream>

struct Sales_data
{
    // �³�Ա������Sales_data �������
    std::string isbn() const { return bookNo; }
    Sales_data& Combine(const Sales_data&);
    double AvgPrice() const;
    // ���ݳ�Ա
    std::string bookNo;
    unsigned unitsSold = 0;
    double revenue = 0;
};

// Sales_data�ķǳ�Ա�ӿں���
Sales_data Add(const Sales_data&, const Sales_data&);
std::ostream& Print(std::ostream&, const Sales_data&);
std::istream& Read(std::istream&, Sales_data&);
