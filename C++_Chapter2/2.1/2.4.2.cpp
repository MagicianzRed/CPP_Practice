#include <iostream>

#if 0
int r2 = 0;
int main()
{
    const int &r = 1; 
    const int* const asdf = &r2; // ָ���ַ��ָ�뱾������
    const int i = -1, &r = 0;

    const int* p1 = &r2; // ָ��ָ���ֵ����
    const int *p;

    std::cout << r << std::endl;
    return 0;

}
#endif