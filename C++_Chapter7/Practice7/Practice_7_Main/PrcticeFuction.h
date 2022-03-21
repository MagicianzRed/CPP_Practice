#pragma once
#include <string>
#include <iostream>


/// <summary>
/// ���½�������ϰּ�ڽ̻��Լ���δ���һ���࣬�Լ���Ҫע����������δ���һ������������
/// </summary>
/// 
class Person
{
private:
    std::string name;
    std::string addresss;
    /*
    * 7.2.1 ��ϰ 7.22 �޸�����ʵ��ϸ�ڣ���read �� printMessage �����޸�Ϊ˽�ж���
    */
    std::istream& Read(std::istream& is, Person& item);
    std::ostream& PrintMessage(std::ostream& os, const Person& item);

public:
    /*
    * 7.1.4 ��ϰ�е� 7.15
    */
    Person(std::string userName, std::string userAddress) : name(userName), addresss(userAddress) { }
    Person() : name("���޵�"), addresss("����ϵ") { }
    Person(std::istream& is);
    /*
    * 7.1.2 ��ϰ�е� 7.4-7.5
    */
    const std::string GetName() const { return name; }
    const std::string GetAddress() const { return addresss; }
    std::ostream& PrintUserMassage(std::ostream& os, const Person& item) 
    { return PrintMessage(os, item); }
};

/*
* 7.1.3 ��ϰ�е� 7.8 - 7.10��Ϊ�˸��� 7.22 ��ϰҪ������ɾ�����ƶ��� private ����
*/


