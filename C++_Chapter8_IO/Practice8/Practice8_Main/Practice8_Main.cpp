// Practice8_Main.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include "PracticeFunction.h"
#include "PersonInfo.h"

int main(int argc, char* argv[])
{
    using std::cout;
    using std::cin;
    using std::endl;
    using std::vector; using std::string;
    using std::istringstream;

    vector<PersonInfo> sb;
    string filePath("E:/study/C++_Chapter8_IO/Practice8/Practice8_Main/asdfasdf/PhoneNumer.txt");
    sb = SaveRecord(filePath);
    ShowRecord(sb, cout);
 /*   vector<string> showSth = P8_4(filePath);
    P8_9(showSth);*/
    return 0;
}