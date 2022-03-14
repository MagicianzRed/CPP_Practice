#include <iostream>
#if 0
int main()
{
    int i = 0, &r = i;
    auto a = r;
    const int sb = 1;

    const int ci = i, &cr = ci;
    auto b = ci;
    auto c = cr;
    auto d = &i;  // d这个变量将会被推断为：一个整型的指针 
    auto e = &ci; // 对常量对象取地址是一种底层const

    const auto f = ci;

    return 0;

}
#endif