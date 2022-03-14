#include <iostream>

#if 0
int main()
{
    using std::cout;
    int a = 3, b = 4;
    decltype(a) c = a;
    decltype((b)) d = a;
    ++c;
    ++d;

    return 0;
}
#endif