#include "6-1.h"
#include <iostream>

/// <summary>
/// ���ﲻʹ�ý�����д�������֮��ʹ���������޸�ʵ��ֵ
/// </summary>
/// <param name="values"></�����Ľ׳�������>
void P6_3(int &values)
{
    using std::cout;
    int tempValues = 1;
    /*�����ֵ�Ƿ�Ϊ����*/
    if (values <= 0)
    {
        cout << "��������룬�������";
        return;
    }
    while (values > 1)
    {
        tempValues *= values;
        --values;
    }
    values = tempValues;
}


/// <summary>
/// ����ʽд��
/// </summary>
int P6_4(void)
{
    using std::cin;
    using std::cout;
    int factValue = 1;
    int tmpValue = 1;
    cout << "������һ����������";
    cin >> tmpValue;
    /*�����ֵ�Ƿ�Ϊ����*/
    if (tmpValue <= 0)
    {
        cout << "��������룬������� ";
        return 0;
    }
    while (tmpValue > 1)
    {
        factValue *= tmpValue;
        --tmpValue;
    }
    return factValue;

}
