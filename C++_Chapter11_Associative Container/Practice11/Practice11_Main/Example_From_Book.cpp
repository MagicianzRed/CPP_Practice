#include "PracticeFunction.h"

void User_Container()
{
    using std::map;
    using std::string;
    using std::ifstream;
    // 使用文件输入,潜在地跳过前导空格
    ifstream fileInto("E:/study/C++_Chapter11_Associative Container/Practice11/Practice11_Main/IntStreamFile/ExFile.txt");
    // 统计每个单词在输入中出现的次数
    map<string, size_t> wordCount;      // string 到 size_t 的空 map
    string word;

    while (fileInto >> word)
    {
        ++wordCount[word];      // 提取 word 的计数器并将其加1
    }
    for (const auto& w : wordCount)
    {
        std::cout << w.first << " occurs " << w.second
            << ((w.second > 1) ? " times" : " time") << std::endl;
    }
}