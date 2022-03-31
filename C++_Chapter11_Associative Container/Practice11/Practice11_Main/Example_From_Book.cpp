#include "PracticeFunction.h"

void User_Container()
{
    using std::map;
    using std::string;
    using std::ifstream;
    // ʹ���ļ�����,Ǳ�ڵ�����ǰ���ո�
    ifstream fileInto("E:/study/C++_Chapter11_Associative Container/Practice11/Practice11_Main/IntStreamFile/ExFile.txt");
    // ͳ��ÿ�������������г��ֵĴ���
    map<string, size_t> wordCount;      // string �� size_t �Ŀ� map
    string word;

    while (fileInto >> word)
    {
        ++wordCount[word];      // ��ȡ word �ļ������������1
    }
    for (const auto& w : wordCount)
    {
        std::cout << w.first << " occurs " << w.second
            << ((w.second > 1) ? " times" : " time") << std::endl;
    }
}