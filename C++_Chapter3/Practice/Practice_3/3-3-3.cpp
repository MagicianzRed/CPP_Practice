#include "3-3-3.h"
#include <iostream>
#include <vector>
#include <string>

void P3_16()
{
    
}

void P3_17()
{
    using std::vector;
    using std::string;
    using std::cout;
    using std::cin;

    string myStr("");
    vector<string> outStr1;

    while (cin >> myStr)
    {
        /*���������ַ����Ƿ�Ϊ��*/
        if (myStr.empty())
        {
            cout << "�����˿յ��ַ��������������д���";
            break;
        }
        else
        {
            outStr1.push_back(myStr);
        }
        /*�������������ʾ��������Ķ���*/
        if (myStr == "showmethemoney")
        {
            /*������û�ж��������*/
            if (outStr1.empty())
            {
                cout << "��û�������κζ���";
                break;
            }
            /*�����������е���ĸת���ɴ�д*/
            else
            {
                for (auto& i : outStr1)     // ȡ���ַ���
                {
                    for (auto& j : i)       // ȡ�������ַ�
                    {
                        j = toupper(j);
                    }
                    cout << i << std::endl;
                }
            }
        }
    }
}

void P3_20()
{
    using std::cout;
    using std::endl;
    using std::vector;

    vector<int> myNumber = { 1,2,3,4,5,6,7,8,9,10 };
    for (int i = 0; i != myNumber.size() - 1; i++)
    {
        int tmpnum = 0;
        tmpnum = myNumber[i] + myNumber[myNumber.size() - i - 1];
        cout << tmpnum << endl;
    }
}