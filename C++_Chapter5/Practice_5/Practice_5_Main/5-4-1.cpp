#include "5-4-1.h"
#include <iostream>
#include <string>
#include <vector>
using std::string;

void P5_14()
{
    using std::cin;
    using std::cout;
    /*���� ���� ����*/
    string aStr("");
    /*���� ��ȡ ����*/
    string rStr("");
    /*���� �Ƚ� ��ȡ������*/
    string rStrtmp( "");
    /*���� �洢 ������������*/
    string mStrtmp("");
    /*��¼��������*/
    int counter = 0;
    /*�洢�����������*/
    int mCounter = 0;

    getline(cin, aStr);

    /*����һ�л��У��ظ��ĵ�������*/
    for (auto i : aStr)
    {
        /*�����ո��������*/
        if (isspace(i) && (rStr != " "))
        {
            /*��������ַ�����ͬ*/
            if (rStrtmp == rStr)
            {
                /*���� +1 */
                ++counter;
                /*����Ƿ񳬹�����߼�¼����*/
                if (counter > mCounter)
                {
                    /*����������ߵļ�¼����������¼��ǰ�ַ���*/
                    mCounter = counter;
                    mStrtmp = rStr;
                }
            }
            /*����������ַ�����ͬ*/
            else
            {
                counter = 0;
            }
            /*���������ַ���*/
            rStrtmp = rStr;
            /*������µļ�¼����*/
            rStr.clear();
        }
        /*������ĸ��¼�� string ������*/
        if (isalpha(i))
        {
            rStr += i;
        }
        
    }
    /*��������ͬ�ĵ���, ����ĵ��ʼ�����ִ���*/
    if (0 != mCounter)
    {
        cout << mStrtmp << " ���������� " << mCounter << " ��";
        counter = 0;
    }
    /*����ظ���Ϣ*/
    else
    {
        cout << "û��������ͬ�ĵ���";
    }
};