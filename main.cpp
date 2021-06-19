#include <iostream>
#include <string>
#include <vector>
#include "include/fileRead.h"

int main(int argc, char *argv[])
{
    std::string code;

    if ((argc - 1) >= 1 && (argc - 1) < 2) // when exactly one argument is given
    {
        demoRead(argv[1]);
    }

    else if ((argc - 1) == 0) // When no arguments are given
    {
        std::cout << introText << "\n"
                  << dashes << std::endl;

        while (true)
        {
            std::cout << lineDis;
            std::getline(std::cin, code);

            mainHeart(code);
        }
    }

    else // When more than 1 arguments are given
    {
        std::cout << "Too many arguments" << std::endl;
        std::exit(0);
    }
}