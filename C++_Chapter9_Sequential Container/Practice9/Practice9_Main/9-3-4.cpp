#include "PracticeFunction.h"

void P9_27()
{
    using std::forward_list;

    forward_list<int> lst = { 1,2,3,4,5,9,7,6,44,88,97,89,78,66 };

    
    auto begLst = lst.begin();
    /*创建前驱（指向链表首元素之前不存在的元素的迭代器）*/
    auto prevLst = lst.before_begin();
    
    while (begLst != lst.end())
    {
        /* 为什么要这么麻烦
        *  因为，forward_list 是单向链表，要访问前驱
        */
        if (((*begLst) % 2) == 0)
        {
            
            begLst = lst.erase_after(prevLst);
        }
        else
        {
            prevLst = begLst;
            ++begLst;
        }
    }
    for (auto& i : lst)
    {
        std::cout << i << std::endl;
    }
}

void P9_28(std::forward_list<std::string>& lst, std::string str1,
           std::string str2)
{
    auto begLst = lst.begin();
    auto prevLst = lst.before_begin();

    bool flagFind = false;

    while (begLst != lst.end())
    {
        if ((*begLst) == str1)
        {
            begLst = lst.insert_after(prevLst, str2);
            flagFind = true;
            break;
        }
        else
        {
            prevLst = begLst;
            ++begLst;
        }
    }
    /*没找到则将 str2 插入链表末尾*/
    if (flagFind == false)
    {
        lst.insert_after(prevLst, str2);
    }
    else
    {
        /*找到则什么都不做*/
    }
}