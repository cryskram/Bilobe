#include <iostream>
#include <string>
#include <vector>
#include "include/customFunc.h"

int main()
{
    std::string code, display;

    std::cout << introText << "\n"
              << dashes << std::endl;

    while (true)
    {
        std::cout << lineDis;
        std::getline(std::cin, code);

        if (start_with(code, printPrefix) == true && end_with(code, printSuffix) == true)
        {
            display = lnp(code);
            std::cout << display << std::endl;
        }

        else if (code == helpText)
        {
            std::cout << helpVar << std::endl;
        }

        else if (start_with(code, lenStringPre) && end_with(code, lenStringSuff))
        {
            int lenString = lens(code);
            std::cout << lenString << std::endl;
        }

        else if (start_with(code, lenIntPre) && end_with(code, lenIntSuff))
        {
            int lenIntLength = leni(code);
            std::cout << lenIntLength << std::endl;
        }

        else if (start_with(code, comment) || start_with(code, (comment + comment)))
        {
            continue;
        }

        else if (isNumber(code))
        {
            display = std::to_string(evaluate(code));
            std::cout << display << std::endl;
        }

        else if (code == " " || code == "")
        {
            continue;
        }

        else if (code == exitCommand)
        {
            std::cout << exitText << std::endl;
            std::exit(0);
        }

        else
        {
            if (start_with(code, printPrefix) && !end_with(code, printSuffix))
            {
                std::cout << printNotEnd << std::endl;
            }

            else if (start_with(code, "len"))
            {
                std::cout << noSyntax << std::endl;
                std::cout << isLen << std::endl;
            }

            else if (start_with(code, lenStringPre) && !end_with(code, lenStringSuff))
            {
                std::cout << missingCloseBrac << std::endl;
            }

            else if (start_with(code, lenIntPre) && !end_with(code, lenIntSuff))
            {
                std::cout << missingCloseBrac << std::endl;
            }

            else if (start_with(code, helpText) && !end_with(code, helpText))
            {
                std::cout << whiteSError << std::endl;
            }

            else
            {
                std::cout << noSyntax << std::endl;
            }
        }
    }
}