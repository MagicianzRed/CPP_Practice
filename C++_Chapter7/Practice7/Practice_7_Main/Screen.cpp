#include "Screen.h"

inline char Screen::Get(pos r, pos c) const
{
    /*�����е�λ��*/
    pos row = r * width;
    /*���ظ����е��ַ�*/
    return contents[row + c];
}

inline Screen& Screen::Move(pos r, pos c)
{
    pos row = r * width;
    cursor = row + c;
    return *this;
}

void Screen::SomeMember() const
{
    ++access_ctr;   // ����һ������ֵ�����ڼ�¼��Ա���������õĴ���
}
