#include "PracticeFunction.h"


/// <summary>
/// 将输出定向为文件（默认名称为 OutFile.txt，在源代码目录之下，每次运行程序将会在文件末尾追加内容）
/// </summary>
/// <param name="outStrStream">想要写入文件的内容</param>
void P8_7(std::vector<std::string> outStrStream)
{
    using std::ofstream;
    using std::string;
    string outString("OutFile.txt");

    // 以 追加到文件末尾 和 写的方式打开 
    ofstream outFileStream(outString, ofstream::out | ofstream::app);
    
    for (auto& i : outStrStream)
    {
        outFileStream << i;
    }
    
}