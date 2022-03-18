#include <iostream>
#include "6-1.h"
#include "6-2-1.h"
#include <string>
int counters(const std::string &sb, char a);
int main()
{
    using std::cout;
    using std::flush;
    int a1 = 2;
    int a2 = 20;
    int *ptrA1 = &a1;
    int *ptrA2 = &a2;
    counters("sb", 'a');

    P6_10(ptrA1, ptrA2);
    cout << *ptrA1 << " " << *ptrA2 << flush;
    
}
int counters(const std::string& sb, char a)
{
    return 1;
}