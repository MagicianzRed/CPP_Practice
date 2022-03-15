#pragma once
#include <string>

class Screen
{
public:
    typedef std::string::size_type pos;
    Screen(pos ht, pos wd, char c) :
        height(ht), width(wd), contents(ht* wd, c) { }
    char Get() const
    { return contents[cursor]; }            // 隐式内联函数
    inline char Get(pos r, pos c) const;  // 显示内联函数
    Screen& Move(pos r, pos c);  // 能在之后被设为内联函数
    void SomeMember() const;
private:
    mutable size_t access_ctr;  // 即使在一个 const 对象内也能被修改
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

