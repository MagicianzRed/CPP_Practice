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
    auto d = &i;  // d����������ᱻ�ƶ�Ϊ��һ�����͵�ָ�� 
    auto e = &ci; // �Գ�������ȡ��ַ��һ�ֵײ�const

    const auto f = ci;

    return 0;

}
#endif