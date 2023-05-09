#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv)
{
    std::ifstream dictionary("dictionary");

    for (int i = 0; i < 100; i++)
    {
        std::string line;

        std::getline(dictionary, line);

        std::cout << line << std::endl;
    }
}
