#include "PracticeFunction.h"

/// <summary>
/// �������������β�Ƿ���ȷ����
/// </summary>
/// <param name="begin">�����׵�����</param>
/// <param name="end">����β������</param>
/// <param name="value">��Ҫ���ҵ�����</param>
/// <returns>��Χ���ҵ������ֵ���� ��</returns>
bool P9_4(std::vector<int>::iterator begin, 
          std::vector<int>::iterator end,
          int value)
{
    while (begin != end)
    {
        if (*begin == value)
        {
            return true;
        }
        ++begin;
    }
    std::cout << "δ�ҵ���ֵ";
    return false;
}