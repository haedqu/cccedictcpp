#include <vector>
#include <fstream>
#include <string>

class Entry
{
public:
    std::string words[3];
    std::string definition;
};

class Dictionary
{
public:
    Dictionary();
private:
    std::vector<Entry> entries;
};
