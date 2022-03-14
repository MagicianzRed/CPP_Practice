#include <iostream>


int equel(int x, int y)
{
    int result = 0;
    /*如果, x != y, 则为假（0）
      如果, x == y, 则为真（1）*/
    result = !((x ^ y) && (x || y));
    
}

int main()
{
    
    return 0;
}