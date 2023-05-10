#include <vector>
#include <fstream>
#include <string>
#include <unordered_map>

class Dictionary
{
public:
    Dictionary();
private:
    std::unordered_map<std::string, std::string> entries;
};
