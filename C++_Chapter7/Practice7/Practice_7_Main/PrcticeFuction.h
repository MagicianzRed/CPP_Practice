#pragma once
#include <string>
#include <iostream>


/// <summary>
/// 该章节所有练习旨在教会自己如何创建一个类，以及需要注意的事项和如何创建一个相对优秀的类
/// </summary>
/// 
class Person
{
private:
    std::string name;
    std::string addresss;
    /*
    * 7.2.1 练习 7.22 修改隐藏实现细节，将read 和 printMessage 函数修改为私有对象
    */
    std::istream& Read(std::istream& is, Person& item);
    std::ostream& PrintMessage(std::ostream& os, const Person& item);

public:
    /*
    * 7.1.4 练习中的 7.15
    */
    Person(std::string userName, std::string userAddress) : name(userName), addresss(userAddress)
    { std::cout << "委托构造函数" << std::endl; }
    Person() : Person("胡无敌", "银河系") { std::cout << "使用了默认构造函数" << std::endl; }
    Person(std::istream& is) : Person() { Read(is, *this); std::cout << "使用了cin版本的构造函数" << std::endl; };
    /*
    * 7.1.2 练习中的 7.4-7.5
    */
    const std::string GetName() const { return name; }
    const std::string GetAddress() const { return addresss; }

    std::ostream& PrintUserMassage(std::ostream& os, const Person& item) 
    { return PrintMessage(os, item); }
};

/*
* 7.1.3 练习中的 7.8 - 7.10（为了复合 7.22 练习要求，现在删除，移动至 private 处）
*/



/// <summary>
/// 7.3.1 练习 7.23 - 7.24
/// </summary>
class Screen
{
    typedef int sb;
private:
    sb xPos = 0;
    sb yPos = 0;
    std::string contents;
public:
    //Screen() = default;
    //Screen(int x, int y) : xPos(x), yPos(y), contents("") { }
    //explicit Screen(int x, int y, char s) : xPos(x), yPos(y), contents(x * y, s) { }
};