#include "Screen.h"

inline char Screen::Get(pos r, pos c) const
{
    /*计算行的位置*/
    pos row = r * width;
    /*返回给定列的字符*/
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
    ++access_ctr;   // 保存一个计数值，用于记录成员函数被调用的次数
}
