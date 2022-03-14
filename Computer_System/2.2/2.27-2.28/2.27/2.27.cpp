#include <iostream>
#include <limits>

// 如果参数x, y相加不会溢出就返回1
int uadd_ok(unsigned x, unsigned y);

int main()
{
    std::cout << "Hello World!\n";
}

int uadd_ok(unsigned x, unsigned y)
{
    int result = 0;

    if ((x + y) <= sizeof(x))
    {
        result = 0;
    }
    else
    {
        result = 1;
    }
    
    return result;
}

