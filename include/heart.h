#include <iostream>
#include "customFunc.h"

void mainHeart(std::string value)
{
    while (!value.empty())
    {
        if (start_with(value, printPrefixNum) == true && end_with(value, printSuffixNum) == true)
        {
            if (start_with(value, printPrefixNum + "\"") && end_with(value, "\"" + printSuffixNum))
            {
                std::cout << lnp(value, printPrefix, printSuffix) << std::endl;
                break;
            }
            else
            {
                std::cout << lnpnum(value, printPrefixNum, printSuffixNum) << std::endl;
                break;
            }
        }

        else if (value == helpText)
        {
            std::cout << helpVar << std::endl;
            break;
        }

        else if (start_with(value, lenStringPre) && end_with(value, lenStringSuff))
        {
            std::cout << lens(value) << std::endl;
            break;
        }

        else if (start_with(value, lenIntPre) && end_with(value, lenIntSuff))
        {
            std::cout << leni(value) << std::endl;
            break;
        }

        else if (start_with(value, comment) || start_with(value, (comment + comment)))
        {
            break;
        }

        else if (isNumber(value))
        {
            std::cout << evaluate(value) << std::endl;
            break;
        }

        else if (value == " " || value == "")
        {
            continue;
        }

        else if (value == exitCommand)
        {
            std::cout << exitText << std::endl;
            std::exit(0);
        }

        else
        {
            if (start_with(value, printPrefix) && !end_with(value, printSuffix))
            {
                std::cout << printNotEnd << std::endl;
                break;
            }

            else if (start_with(value, "len"))
            {
                std::cout << noSyntax << std::endl;
                std::cout << isLen << std::endl;
                break;
            }

            else if (start_with(value, lenStringPre) && !end_with(value, lenStringSuff))
            {
                std::cout << missingCloseBrac << std::endl;
                break;
            }

            else if (start_with(value, lenIntPre) && !end_with(value, lenIntSuff))
            {
                std::cout << missingCloseBrac << std::endl;
                break;
            }

            else if (start_with(value, helpText) && !end_with(value, helpText))
            {
                std::cout << whiteSError << std::endl;
                break;
            }

            else
            {
                std::cout << noSyntax << std::endl;
                break;
            }
        }
    }
}