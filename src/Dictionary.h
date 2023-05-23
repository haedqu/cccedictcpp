#include <vector>
#include <fstream>
#include <string>
#include <unordered_map>

class Dictionary
{
public:
    Dictionary();

    std::string GetDefinition(const std::string& word);
private:
    std::unordered_map<std::string, std::string> entries;
};
