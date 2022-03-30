#pragma once
#include <string>
#include <vector>
#include <utility>

struct PersonInfo
{
    std::string name;
    std::vector<std::string> phones;
};

std::vector<PersonInfo>& SaveRecord(std::string& filePath);
void ShowRecord(std::vector<PersonInfo>& showContent, std::ostream& os);