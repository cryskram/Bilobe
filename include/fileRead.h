#include <iostream>
#include <fstream>
#include "heart.h"

void demoRead(std::string filename)
{

    if (end_with(filename, extension))
    {
        std::string oline;
        std::fstream file;
        file.open(filename);

        while (std::getline(file, oline))
        {
            mainHeart(oline);
        }

        file.close();
    }

    else
    {
        std::cout << "No such file found" << std::endl;
    }
}
