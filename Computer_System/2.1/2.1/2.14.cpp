#include <iostream>


int equel(int x, int y)
{
    int result = 0;
    /*���, x != y, ��Ϊ�٣�0��
      ���, x == y, ��Ϊ�棨1��*/
    result = !((x ^ y) && (x || y));
    
}

int main()
{
    
    return 0;
}