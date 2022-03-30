#include "PracticeFunction.h"


void P9_18()
{
    using std::cin;
    using std::string;
    using std::deque;
    using std::list;

    list<string> arr1;
    //deque<string> arr1;
    string inarr1("");

    while (cin >> inarr1)
    {
        arr1.push_back(inarr1);
    }
    auto beg = arr1.cbegin();
    auto end = arr1.cend();

    while (beg != end)
    {
        std::cout << (*beg) << std::endl;
        ++beg;
    }
}

void P9_20() 
{
    using std::list;
    using std::deque;
    using std::endl;
    using std::cout;

    list<int> lArr = { 1,2,3,4,5,6,7,8,9,10,11,12393,442 };
    deque<int> dArr1;
    deque<int> dArr2;

    auto lBeg = lArr.cbegin();
    auto lEnd = lArr.cend();

    while (lBeg != lEnd)
    {
        if (((*lBeg) % 2) == 0)
        {
            dArr1.push_back(*lBeg);
        }
        else
        {
            dArr2.push_back(*lBeg);
        }
        ++lBeg;
    }

    cout << "数组1:" << endl;
    for (auto& i : dArr1)
    {
        cout << i << endl;
    }
    cout << "数组2:" << endl;
    for (auto& i : dArr2)
    {
        cout << i << endl;
    }
}