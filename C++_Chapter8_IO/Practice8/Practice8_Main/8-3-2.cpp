#include"PracticeFunction.h"
#include "PersonInfo.h"

std::vector<PersonInfo> people;      // ����������������м�¼

/// <summary>
/// �޸����鱾 P288 ҳʾ�����룬Ŀ����Ϊ�������ϰ 8-3-2�����ļ��еļ�¼������ people ����
/// </summary>
/// <param name="filePath">�ļ�����·��</param>
/// <returns>�����޸ĸ�ʽ����ļ�����</returns>
std::vector<PersonInfo>& SaveRecord(std::string &filePath)
{
    std::string line, word;              // �ֱ𱣴����������һ�к͵���
    // �ļ���ʽ��������
    using std::ifstream;
    ifstream fileIn(filePath);

    // ���д������ȡ���ݣ�ֱ�� cin �����ļ�β
    while (getline(fileIn, line))
    {
        PersonInfo info;            // ����һ������˼�¼���ݵĶ���
        std::istringstream record(line); // ����¼�󶨵��ն������
        record >> info.name;        // ��ȡ���֣��Կհ׷ָ�

        while (record >> word)      // ��ȡ�绰����
        {
            info.phones.push_back(word);    // ����
        }
        people.push_back(info);             // ׷�ӵ� people ĩβ
    }

    return people;
}

/// <summary>
/// �޸��鱾289ҳ����ʾ�����ļ����Ѿ���ʽ����ϵģ�������
/// </summary>
/// <param name="showContent">��Ҫ��ʾ������</param>
/// <param name="os">�����������</param>
void ShowRecord(std::vector<PersonInfo>& showContent, std::ostream& os)
{
    using std::ostringstream;
    for (const auto &entry : showContent)            // �� �����е�ÿһ��
    {
        ostringstream formatted;            // ÿ��ѭ�����贴������
        for (const auto& nums : entry.phones)
        { 
            formatted << " " << nums;
        }
        os << entry.name << " "
            << formatted.str() << std::endl;
    }
    
}
