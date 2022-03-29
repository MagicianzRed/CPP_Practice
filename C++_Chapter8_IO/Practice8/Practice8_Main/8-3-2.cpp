#include"PracticeFunction.h"
#include "PersonInfo.h"

std::vector<PersonInfo> people;      // 保存来自输入的所有记录

/// <summary>
/// 修改自书本 P288 页示例代码，目的是为了完成练习 8-3-2（将文件中的记录保存至 people 对象）
/// </summary>
/// <param name="filePath">文件绝对路径</param>
/// <returns>返回修改格式后的文件内容</returns>
std::vector<PersonInfo>& SaveRecord(std::string &filePath)
{
    std::string line, word;              // 分别保存来自输入的一行和单词
    // 文件形式读入数据
    using std::ifstream;
    ifstream fileIn(filePath);

    // 逐行从输入读取数据，直到 cin 遇到文件尾
    while (getline(fileIn, line))
    {
        PersonInfo info;            // 创建一个保存此记录数据的对象
        std::istringstream record(line); // 将记录绑定到刚读入的行
        record >> info.name;        // 读取名字，以空白分隔

        while (record >> word)      // 读取电话号码
        {
            info.phones.push_back(word);    // 保存
        }
        people.push_back(info);             // 追加到 people 末尾
    }

    return people;
}

/// <summary>
/// 修改书本289页，显示来自文件（已经格式化完毕的）的内容
/// </summary>
/// <param name="showContent">需要显示的内容</param>
/// <param name="os">期望输出的流</param>
void ShowRecord(std::vector<PersonInfo>& showContent, std::ostream& os)
{
    using std::ostringstream;
    for (const auto &entry : showContent)            // 对 内容中的每一项
    {
        ostringstream formatted;            // 每个循环步骤创建对象
        for (const auto& nums : entry.phones)
        { 
            formatted << " " << nums;
        }
        os << entry.name << " "
            << formatted.str() << std::endl;
    }
    
}
