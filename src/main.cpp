#include <iostream>
#include "Dictionary.h"

int main(int argc, char** argv)
{
    Dictionary dictionary;

    if (argc > 1)
    {
        std::cout << dictionary.GetDefinition(std::string(argv[1]));
    }
}
