#include "PrcticeFuction.h"


std::istream& Person::Read(std::istream& is, Person& item)
{
    using std::cout;
    
    cout << "请输入姓名（无空格）" << std::endl;
    is >> item.name;
    cout << "请输入地址（无空格）" << std::flush;
    is >> item.addresss;
    return is;
}

std::ostream& Person::PrintMessage(std::ostream& os, const Person& item)
{
    os << "你的姓名 " << item.name << " 你的地址 " << item.addresss << std::endl;
    return os;
}
