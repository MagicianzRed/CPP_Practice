#include "Salsedata.h"

/// <summary>
/// 
/// </summary>
/// <param name="data1"></param>
/// <param name="data2"></param>
/// <returns></returns>
int Check_deal(Sales_data *data1, Sales_data *data2)
{

    // 检查两笔交易编号是否相同
    // 相同输出其和
    if (data1->bookNO == data2->bookNO)
    {
        unsigned totalCnt = data1->units_sold + data2->units_sold;
        double totalRevenue = data1->revenue + data2->revenue;
        if (totalCnt != 0)
        {
            std::cout << totalRevenue / totalCnt << std::endl;
        }
        else
        {
            std::cout << "没有进行交易" << std::endl;
        }
        return 0;
    }
    // 不同交易失败
    else
    {
        std::cerr << "交易编号必须相同！" << std::endl;
        return -1;
    }
}