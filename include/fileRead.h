#include <iostream>
#include <fstream>
#include "heart.h"

void readFromFile(const std::string& filename)
{
    std::ifstream iFile;
    iFile.open(filename);

    if (iFile)
    {
        if (end_with(filename, extension))
        {
            std::string oline;
            std::fstream file;
            file.open(filename);

            while (std::getline(file, oline))
            {
                // std::cout << oline << std::endl;
                mainHeart(oline);
            }

            file.close();
        }
    }

    else
    {
        std::cout << "No such file found" << std::endl;
    }
}
