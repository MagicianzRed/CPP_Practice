#include "3-3-2.h"
#include <iostream>
#include <vector>

void P3_14()
{
    using std::vector;
    using std::cin;
    using std::cout;
    vector<int> myNum;
    int inPutNum = 0;
    while (cin >> inPutNum)
    {
        if (inPutNum != 3210)
        {
            myNum.push_back(inPutNum);
        }
        /*�������� 3210 ����ʾ����֮ǰ�����������*/
        else
        {
            /*����Ƿ���һ���յĶ���*/
            if (myNum.empty())
            {
                cout << "��û�������κ�����";
                break;
            }
            else
            {
                cout << "������֮ǰ����������֣�";
                for (auto i : myNum)
                {
                    cout << i << " ";
                }
            }
        }
    }
}