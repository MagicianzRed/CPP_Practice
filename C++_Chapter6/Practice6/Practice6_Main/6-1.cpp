#include "6-1.h"
#include <iostream>

/// <summary>
/// 这里不使用交互的写法，因此之间使用引用来修改实际值
/// </summary>
/// <param name="values"></期望的阶乘数（）>
void P6_3(int &values)
{
    using std::cout;
    int tempValues = 1;
    /*检查数值是否为正数*/
    if (values <= 0)
    {
        cout << "错误的输入，程序结束";
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
/// 交互式写法
/// </summary>
int P6_4(void)
{
    using std::cin;
    using std::cout;
    int factValue = 1;
    int tmpValue = 1;
    cout << "请输入一个正整数：";
    cin >> tmpValue;
    /*检查数值是否为正数*/
    if (tmpValue <= 0)
    {
        cout << "错误的输入，错误代码 ";
        return 0;
    }
    while (tmpValue > 1)
    {
        factValue *= tmpValue;
        --tmpValue;
    }
    return factValue;

}
