#include "3-5-3.h"
#include <iostream>
#include <vector>

void P3_34()
{
    using std::cout;
    using std::endl;
    using std::vector;

    using std::begin;
    using std::end;
    
    int num[100] = { 9 };
    /*����ָ��������β��ָ��*/
    int* hbeg = begin(num);
    int* hend = end(num);
    /*�������е���ȫ������*/
    do
    {
        *hbeg = 0;
        cout << (*hbeg) << endl;    // ����ʹ�����ŵ�ԭ������ ������
    }while (++hbeg != hend);
    
}