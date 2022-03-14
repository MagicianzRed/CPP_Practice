#include "5-4-2.h"
#include <vector>
#include <iostream>
using std::vector;


/// <summary>
/// �ж�����vector��������ǰ׺�Ƿ���ͬ
/// </summary>
/// <param name="cmpNum1"></����1>
/// <param name="cmpNum2"></����2>
/// <����ֵ><1 Ϊǰ׺��ͬ��0 Ϊǰ׺��ͬ, >
static int NumBerCompare(const vector<int> &cmpNum1, const vector<int> &cmpNum2)
{
    /*��ÿ�����鴴��������*/
    auto cmpNum1Beg = cmpNum1.begin();
    auto cmpNum1End = cmpNum1.end();

    auto cmpNum2Beg = cmpNum2.begin();
    auto cmpNum2End = cmpNum2.end();

    /*�Ƚ����ߴ�С*/
    if ((cmpNum1End - cmpNum1Beg) >= (cmpNum2End - cmpNum2Beg))
    {
        /*��С��������Ϊѭ������*/
        for (auto i : cmpNum2)
        {
            /*���ͷ�ĸ������Ƿ���ͬ*/
            if (i == *cmpNum1Beg)
            {
                ++cmpNum1Beg;
            }
            else
            {
                /*���ֲ�ͬ���˳�����*/
                return 0;
            }
        }
        return 1;
    }
    else
    {
        /*��С��������Ϊѭ������*/
        for (auto i : cmpNum1)
        {
            /*���ͷ�ĸ������Ƿ���ͬ*/
            if (i == *cmpNum2Beg)
            {
                ++cmpNum2Beg;
            }
            else
            {
                /*���ֲ�ͬ���˳�����*/
                return 0;
            }
        }
        return 1;
    }
}

/// <summary>
/// �����Ҽٶ�ǰ�ĸ���ͬ���϶�Ϊǰ׺��ͬ����С���ĸ���ȫ���Ƚ�
/// </summary>
/// 
void P5_17()
{
    using std::cout;
    
    vector<int> arNum = { 0, 1, 1, 2 };
    vector<int> arNumCmp = { 0, 1, 1, 2, 23, 44, 55 };

    /*���ȱȽ�ǰ׺����һ�����֣�*/
    if (arNum[0] == arNumCmp[0])
    {
        cout << NumBerCompare(arNum, arNumCmp);
    }
    /*�����ͬ�������*/
    else
    {
        cout << "����";
    }
}