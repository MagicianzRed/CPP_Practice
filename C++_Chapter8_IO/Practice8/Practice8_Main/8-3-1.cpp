#include "PracticeFunction.h"


/// <summary>
/// ����Ҫд������� ������һ�� istringstream ����
/// </summary>
/// <param name="outStrStream">��Ҫд�������</param>
void P8_9(std::vector<std::string> outStrStream)
{
    using std::istringstream;
   
    for (auto& i : outStrStream)
    {
        istringstream records(i);
        std::cout << records.str() << std::endl;
    }

}
