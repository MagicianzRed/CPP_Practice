#include "PracticeFunction.h"

void P9_24()
{
    using std::vector;
    using std::cout;
    using std::endl;
    /*�������Ϊʲô����һ�⣿*/
    vector<int> nArr = {1,2,3};

    auto beg = nArr.begin();
    auto end = nArr.end();
    auto sb = nArr.erase(beg, end);

    for (auto &i : nArr)
    {
        cout << i << endl;
    }

}