#include "PrcticeFuction.h"


std::istream& Person::Read(std::istream& is, Person& item)
{
    using std::cout;
    
    cout << "�������������޿ո�" << std::endl;
    is >> item.name;
    cout << "�������ַ���޿ո�" << std::flush;
    is >> item.addresss;
    return is;
}

std::ostream& Person::PrintMessage(std::ostream& os, const Person& item)
{
    os << "������� " << item.name << " ��ĵ�ַ " << item.addresss << std::endl;
    return os;
}
