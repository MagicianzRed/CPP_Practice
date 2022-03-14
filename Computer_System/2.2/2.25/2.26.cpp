#include <iostream>

// unsigned int µÈ¼ÛÓÚ size_t

int strlonger(char* s, char* t)
{
    return strlen(s) - strlen(t) > 0;
}
int main()
{
    char a[1] = {'s'};
    char b[2] = { 's','b' };
    strlonger(&a, &b);
    return 0;
}