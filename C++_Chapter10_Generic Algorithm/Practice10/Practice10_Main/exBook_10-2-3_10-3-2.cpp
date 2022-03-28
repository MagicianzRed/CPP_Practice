#include "PracticeFuction.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;

vector<string> words = { "the", "quick", "red", "fox", "jumps",
                        "over", "the", "slow", "red", "turtle" };

/// <summary>
/// 求一个，大于等于给定长度的单词有多少。修改输出，只打印大于等于给定单词的长度
/// </summary>
/// <param name="words"></文本或者句子>
/// <param name="sz"></param>
void Biggies(vector<string> &words,
             vector<string>::size_type sz)  // 思考这个类型（为什么不直接用 unsigned）
{
    ElimDups(words);

    // 按长度重新排序，长度相同的单词
    std::stable_sort(words.begin(), words.end(), 
        [](const string& a, const string& b)
        { return a.size() < b.size(); });

    // 获取一个迭代器，指向第一个满足 size() >= sz 的元素
    auto wc = std::find_if(words.begin(), words.end(), 
        [sz](const string& s)
        { return s.size() >= sz; });

    // 计算满足 size >= sz 的元素数目
    auto count = words.end() - wc;

}
/// <summary>
/// 希望，每个单词出现一次，不管单词在任意给定文档中出现了多少次
/// </summary>
void ElimDups(vector<string>& words)
{
    // 按字典排序，方便查找重复单词
    std::sort(words.begin(), words.end());
    // unique 重排输入范围，使得每个单词只出现一次
    // 排列在范围的前部，返回指向不重复区域 之后 位置的迭代器
    auto endUnique = std::unique(words.begin(), words.end());
    // 使用向量操作 earse 删除重复单词
    words.erase(endUnique, words.end());
}


/// <summary>
/// 希望，单词按其长度排序
/// </summary>
/// <param name="s1"></接受一个单词>
/// <param name="s2"></接受比较单词>
/// <returns></第二个参数大于，第一个参数单词，返回1>
bool IsShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}