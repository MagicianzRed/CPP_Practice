#include "PracticeFuction.h"
#include <iostream>
#include <vector>
#include <iterator>
#include <string>
#include <algorithm>

using std::vector;
using std::string;
using std::cout;
using std::endl;

vector<string> words = { "the", "quick", "red", "fox", "jumps",
                        "over", "the", "slow", "red", "turtle" };

/// <summary>
/// ��һ�������ڵ��ڸ������ȵĵ����ж��١��޸������ֻ��ӡ���ڵ��ڸ������ʵĳ���
/// </summary>
/// <param name="words"></�ı����߾���>
/// <param name="sz"></param>
void Biggies(vector<string> &words,
             vector<string>::size_type sz)  // ˼��������ͣ�Ϊʲô��ֱ���� unsigned��
{
    ElimDups(words);

    // �������������򣬳�����ͬ�ĵ���
    std::stable_sort(words.begin(), words.end(), 
        [](const string& a, const string& b)
        { return a.size() < b.size(); });

    // ��ȡһ����������ָ���һ������ size() >= sz ��Ԫ��
    auto wc = std::find_if(words.begin(), words.end(), 
        [sz](const string& s)
        { return s.size() >= sz; });

    // �������� size >= sz ��Ԫ����Ŀ
    auto count = words.end() - wc;

}
/// <summary>
/// ϣ����ÿ�����ʳ���һ�Σ����ܵ�������������ĵ��г����˶��ٴ�
/// </summary>
void ElimDups(vector<string>& words)
{
    // ���ֵ����򣬷�������ظ�����
    std::sort(words.begin(), words.end());
    // unique �������뷶Χ��ʹ��ÿ������ֻ����һ��
    // �����ڷ�Χ��ǰ��������ָ���ظ����� ֮�� λ�õĵ�����
    auto endUnique = std::unique(words.begin(), words.end());
    // ʹ���������� earse ɾ���ظ�����
    words.erase(endUnique, words.end());
}


/// <summary>
/// ϣ�������ʰ��䳤������
/// </summary>
/// <param name="s1"></����һ������>
/// <param name="s2"></���ܱȽϵ���>
/// <returns></�ڶ����������ڣ���һ���������ʣ�����1>
bool IsShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}