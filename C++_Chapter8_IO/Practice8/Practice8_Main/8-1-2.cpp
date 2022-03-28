#include "PracticeFunction.h"


std::istream& P8_1(std::istream& is)
{
    int i = 0;
    while (!((is >> i).eof()))
    {
        /*仅作读入数据使用*/;
    }
    /*复位流*/
    is.clear();

    return is;
}