#include <iostream>
#include "vars.h"

void syntaxRun(std::vector<std::string> input)
{
    int synLen = input.size();

    for (int i = 0; i < synLen; i++)
    {
        std::cout << input[i] << "\t";
    }
    std::cout << "\n";
    std::cout << dashes << std::endl;
}

void examplesRun(std::vector<std::string> input)
{
    int exLen = input.size();

    for (int i = 0; i < exLen; i++)
    {
        std::cout << input[i] << std::endl;
    }
    std::cout << "\n";
    std::cout << dashes << std::endl;
}