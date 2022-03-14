// Practice4_MAIN.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <vector>

static void P4_4()
{
    using std::cout;
    int theExpression = ((12 / 3) * 4) + (5 * 15) + ((24 % 4) / 2);
    cout << theExpression;
}

static void P4_5(int aNum)
{
    using std::cout;
    if (aNum <= 0)
    {
        cout << "需要输入正整数";
        return;
    }

    if ((aNum % 2) == 0)
    {
        cout << "偶数";
    }
    else
    {
        cout << "奇数";
    }
}

static void P4_7()
{
    using std::vector;
    using std::cout;
    using std::endl;
    vector<int> aNum = { 1,2,3,4,5,6,7,8,10,11,12,13,15,16,257 };
    int rNum = 0;
    for (auto& i : aNum)
    {
        rNum = ((i % 2) == 1) ? (i * 2) : 0;
        cout << rNum << endl;
    }
}

static void P4_28()
{
    using std::cout;
    using std::endl;

    int num = sizeof(int);
    cout << num << endl;

    num = sizeof(unsigned int);
    cout << num << endl;

    num = sizeof(unsigned char);
    cout << num << endl;

    num = sizeof(char);
    cout << num << endl;
    
    num = sizeof(float);
    cout << num << endl;

    num = sizeof(double);
    cout << num << endl;

    num = sizeof(long);
    cout << num << endl;

    num = sizeof(wchar_t);
    cout << num << endl;

    num = sizeof(long long);
    cout << num << endl;
}

int main()
{

    using std::cout;
    int *i = nullptr,   sv = 2;
    cout << &i << " " << sv;
    delete i;

    return 0;
}
