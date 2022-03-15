#pragma once
#include <string>
#include <iostream>

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
    // 根据对象是否, 是 const 重载了 display 函数
    Screen& Display(std::ostream &os)
    {
        do_display(os);
        return *this;
    }

    const Screen& Display(std::ostream& os) const
    {
        do_display(os);
        return *this;
    }
private:
    mutable size_t access_ctr;  // 即使在一个 const 对象内也能被修改
    /*该函数负责显示 Screen 的内容*/
    void do_display(std::ostream &os) const
    { os << contents; }
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

