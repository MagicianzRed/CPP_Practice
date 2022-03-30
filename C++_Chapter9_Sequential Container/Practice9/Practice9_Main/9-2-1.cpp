#include "PracticeFunction.h"

/// <summary>
/// 不会检查迭代器首尾是否正确填入
/// </summary>
/// <param name="begin">接受首迭代器</param>
/// <param name="end">接受尾迭代器</param>
/// <param name="value">需要查找的内容</param>
/// <returns>范围中找到输入的值返回 真</returns>
bool P9_4(std::vector<int>::iterator begin, 
          std::vector<int>::iterator end,
          int value)
{
    while (begin != end)
    {
        if (*begin == value)
        {
            return true;
        }
        ++begin;
    }
    std::cout << "未找到该值";
    return false;
}