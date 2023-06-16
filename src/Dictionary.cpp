#include <iostream>
#include "Dictionary.h"

Dictionary::Dictionary()
{
    std::ifstream file("dictionary");

    std::string line;

    while (!file.eof())
    {
        std::vector<std::string> words;
        std::string definition;

        std::getline(file, line);

        if (line[0] == '#' || line.size() < 3)
        {
            continue;
        }

        int currentPosition = 0;

        for (int i = 0; i < 2; i++)
        {
            words.push_back("");

            while (line[currentPosition] != ' ')
            {
                words[i] += line[currentPosition];

                currentPosition += 1;
            }

            currentPosition += 1;
        }

        words.push_back("");

        while (line[currentPosition] != '[')
        {
            currentPosition += 1;
        }

        currentPosition += 1;

        while (line[currentPosition] != ']')
        {
            words[2] += line[currentPosition];

            currentPosition += 1;
        }

        while (line[currentPosition] != '/')
        {
            currentPosition += 1;
        }

        currentPosition += 1;

        while (line[currentPosition] != '/')
        {
            definition += line[currentPosition];

            currentPosition += 1;
        }

        for (int i = 0; i < words.size(); i++)
        {
            entries.insert({words[i], definition});
        }
    }
}

std::string Dictionary::GetDefinition(const std::string &word)
{
    return entries[word];
}
