#include <iostream>


void inplace_swap(int* x, int* y)
{
    using std::cout;
    using std::endl;

    *y = *x ^ *y;   /*��һ��*/
    *x = *x ^ *y;   /*�ڶ���*/
    *y = *x ^ *y;   /*������*/
}

void reverse_array(int a[], int cnt)
{
    int first, last;

    for (first = 0, last = cnt - 1;
        first <= last;
        first++, last--)
    {
        inplace_swap(&a[first], &a[last]);
    }
        
}
#if 0
int main()
{
    int a = 4;
    int b = 5;

    int ar[5] = { 1, 4, 5, 6, 10 };
    reverse_array(ar, 5);
    
    for (int i = 0; i < 5; i++)
    {
        std::cout << ar[i] << std::endl;
    }

    return 0;
}
#endif