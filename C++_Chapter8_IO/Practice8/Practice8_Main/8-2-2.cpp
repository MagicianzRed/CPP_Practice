#include "PracticeFunction.h"


/// <summary>
/// ���������Ϊ�ļ���Ĭ������Ϊ OutFile.txt����Դ����Ŀ¼֮�£�ÿ�����г��򽫻����ļ�ĩβ׷�����ݣ�
/// </summary>
/// <param name="outStrStream">��Ҫд���ļ�������</param>
void P8_7(std::vector<std::string> outStrStream)
{
    using std::ofstream;
    using std::string;
    string outString("OutFile.txt");

    // �� ׷�ӵ��ļ�ĩβ �� д�ķ�ʽ�� 
    ofstream outFileStream(outString, ofstream::out | ofstream::app);
    
    for (auto& i : outStrStream)
    {
        outFileStream << i;
    }
    
}