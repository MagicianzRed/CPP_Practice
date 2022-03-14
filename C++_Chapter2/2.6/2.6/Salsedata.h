#ifndef SALESDATA
#define SALESDATA
#include <iostream>
#include <string>
struct Sales_data
{
    std::string bookNO;
    unsigned units_sold = 0;
    double revenue = 0.0;
};

int Check_deal(Sales_data* data1, Sales_data* data2);

#endif // !SALES_DATA

