#include "Salsedata.h"

/// <summary>
/// 
/// </summary>
/// <param name="data1"></param>
/// <param name="data2"></param>
/// <returns></returns>
int Check_deal(Sales_data *data1, Sales_data *data2)
{

    // ������ʽ��ױ���Ƿ���ͬ
    // ��ͬ������
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
            std::cout << "û�н��н���" << std::endl;
        }
        return 0;
    }
    // ��ͬ����ʧ��
    else
    {
        std::cerr << "���ױ�ű�����ͬ��" << std::endl;
        return -1;
    }
}