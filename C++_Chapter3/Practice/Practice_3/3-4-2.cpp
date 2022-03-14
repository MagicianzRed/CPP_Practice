#include "3-4-2.h"
#include <iostream>
#include <vector>
#include <typeinfo>

void P3_24()
{
    using std::cout;
    using std::endl;
    using std::vector;

    vector<int> myNumber = { 1,2,3,4,5,6,7,8,9,10 };

    // myNumber ����ʼ������
    auto beg = myNumber.begin();
    // myNumber ��β������
    auto end = myNumber.end() - 1;

    /*ΪʲôҪ�����myNumber.begin(), ��Ϊ��Ҫ�ǵ� mid ������Ϊ ������ ����*/
    auto mid = myNumber.begin() + (end - beg) / 2;

    /*�鿴�����������������ʲô����, ��Ϊ��������û������ + �����*/
    cout << typeid(end - beg).name() << endl;           // int ����
    cout << typeid(myNumber.begin()).name() << endl;    // ������ ����

    /*���ϣ����ص� + ������������� ������ �� ���� ֮�������
    * ���ص� - ������������� ������ �� ������ ֮�������
    */
    do
    {
        cout << *beg + *end << endl;

    } while ((mid != --end) && (mid != ++beg)); // �����ѭ����--����++�����ּ������
    cout << *mid;
}