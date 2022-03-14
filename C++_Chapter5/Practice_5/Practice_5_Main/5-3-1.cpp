#include <iostream>
#include <string>
#include <vector>
#include "5-3-1.h"

void P5_5()
{
    using std::string;
    using std::vector;
    using std::cout;
    using std::endl;

    /*创建成绩列表*/
    //string myScore = "ABCDE";
    vector<int> myNum = { 100, 90, 80, 70, 60,23,535,22,22,75,445,86,49,76,86,99,97 };
    for (auto i : myNum)
    {
        if (i > 100)
        {
            cout << "这个成绩不存在";
        }
        else if ((i >= 90) && (i <= 100))
        {
            cout << "A" << endl;
        }
        else if ((i >= 80) && (i < 90))
        {
            cout << "B" << endl;
        }
        else if ((i >= 70) && (i < 80))
        {
            cout << "C" << endl;
        }
        else if ((i >= 60) && (i < 70))
        {
            cout << "D" << endl;
        }
        else
        {
            cout << "不及格" << endl;
        }

    }

}