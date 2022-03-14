#include "3-5-3.h"
#include <iostream>
#include <vector>

void P3_34()
{
    using std::cout;
    using std::endl;
    using std::vector;

    using std::begin;
    using std::end;
    
    int num[100] = { 9 };
    /*建立指向数组首尾的指针*/
    int* hbeg = begin(num);
    int* hend = end(num);
    /*将数组中的数全部归零*/
    do
    {
        *hbeg = 0;
        cout << (*hbeg) << endl;    // 这里使用括号的原因在于 左结合律
    }while (++hbeg != hend);
    
}