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
    { return contents[cursor]; }            // ��ʽ��������
    inline char Get(pos r, pos c) const;  // ��ʾ��������
    Screen& Move(pos r, pos c);  // ����֮����Ϊ��������
    void SomeMember() const;
    // ���ݶ����Ƿ�, �� const ������ display ����
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
    mutable size_t access_ctr;  // ��ʹ��һ�� const ������Ҳ�ܱ��޸�
    /*�ú���������ʾ Screen ������*/
    void do_display(std::ostream &os) const
    { os << contents; }
    pos cursor = 0;
    pos height = 0, width = 0;
    std::string contents;
};

