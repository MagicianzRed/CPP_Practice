#include "PracticeFunction.h"

void P9_26()
{
    using std::list;
    using std::vector;
    using std::begin;
    using std::end;

    int ia[] = { 0,1,1,2,3,5,8,13,2,55,89,88 };

    auto begIa = begin(ia);
    auto endIa = end(ia);

    /*ɾ��ż��*/
    vector<int> vArr(begIa, endIa);
    auto begVarr = vArr.begin();
    /*����ʹ�� vArr.end() ͬ����Ϊɾ��֮���λ�õ�����ʧЧ�ˣ����Ҫ��ʱˢ�� vArr.end()*/
    while (begVarr != vArr.end())
    {
        if (((*begVarr) % 2) == 0)
        {
            /*ע�⣺ɾ����֮���λ�õĵ�������ʧЧ�����������Ҫ���¸�ֵ*/
            begVarr = vArr.erase(begVarr);
        }
        else
        {
            begVarr++;
        }
    }
    /*���ɾ���������*/
    for (auto &i : vArr)
    {
        std::cout << i << std::endl;
    }

    /*ɾ������*/
    list<int>   lArr(begIa, endIa);
    auto begLarr = lArr.begin();
    /*�� vector ͬ�������ظ�ע��*/
    while (begLarr != lArr.end())
    {
        if (((*begLarr) % 2) == 1)
        {
            
            begLarr = lArr.erase(begLarr);
        }
        else
        {
            begLarr++;
        }
    }

    /*���ɾ���������*/
    for (auto& i : lArr)
    {
        std::cout << i << std::endl;
    }
}