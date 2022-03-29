#include "PracticeFunction.h"


/// <summary>
/// 将需要写入的内容 存入至一个 istringstream 流中
/// </summary>
/// <param name="outStrStream">想要写入的内容</param>
void P8_9(std::vector<std::string> outStrStream)
{
    using std::istringstream;
   
    for (auto& i : outStrStream)
    {
        istringstream records(i);
        std::cout << records.str() << std::endl;
    }

}
