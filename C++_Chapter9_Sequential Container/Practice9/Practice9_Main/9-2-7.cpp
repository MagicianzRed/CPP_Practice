#include "PracticeFunction.h"

void P9_15()
{
    using std::vector;

    vector<int> arr1 = { 1,2,3,4,5,6,7 };
    vector<int> arr2 = { 1,2,3,4,5,6,1 };

    if (arr1 == arr2)
    {
        std::cout << "ºÃ";
    }
    else
    {
        std::cout << "²»ºÃ";
    }

}