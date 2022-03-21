#include <iostream>
#include "6-1.h"
#include "6-2-1.h"
#include "6-2-4.h"
#include <string>
#include <initializer_list>

static void P6_27(std::initializer_list<int> arNum)
{
    using std::cout;
    int tmpTotal = 0;
    for (auto i : arNum)
    {
        tmpTotal += i;
    }
    cout << tmpTotal;
}

int &str_subrange(int *arry, int index)
{
    return arry[index];
}

int main(int argc, char *argv[])
{
    using std::cout;
    using std::endl;
    using std::string;
    using std::initializer_list;
    initializer_list<int> arNums = { 1,2,3,5,4,88,285,66 };
    string myStr("");
    for (int i = 0; i < argc; i++)
    {
        cout << argv[i] << endl;
        myStr += argv[i];
    }
    cout << myStr << endl;
    int arrry[2] = { 1,2 };
    cout << arrry[1];
    return 0;
    
}