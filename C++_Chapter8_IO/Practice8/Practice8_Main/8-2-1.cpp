#include "PracticeFunction.h"


/// <summary>
/// 这里均采用引用的原因是，如果复制一份副本则效率会下降很多。可以根据实际需求来决定，可以采用多线程
/// </summary>
/// <param name="inFileName">文件的绝对路径</param>
/// <returns>返回文件内容</returns>
std::vector<std::string> P8_4(const std::string &inFileName)
{
    using std::ifstream;
    using std::vector;
    using std::string;

    vector<std::string> words;

    /*显示的表示，以读模式打开文件*/
    ifstream inFile(inFileName, ifstream::in);

    if (!inFile.is_open())
    {
        std::cerr << "不能打开文件 " << inFileName <<std::flush;
        /*返回文件名称*/
        words.push_back(inFileName);
    }
    else
    {
        string tmpWords("");
        while (!inFile.eof())
        {
            // 读取一行
            //std::getline(inFile, tmpWords);
            // 读取一个单词
            std::getline(inFile, tmpWords, ' ');
            
            words.push_back(tmpWords);
        }
        inFile.close();
    }
    return words;
}

