#include <iostream>
#include <string>
#include <climits>
#include "calculations.h"
#include "vars.h"

bool start_with(const std::string& main, const std::string& part)
{
    if (main.find(part) == 0)
    {
        return true;
    }

    return false;
}

bool end_with(const std::string& fullString, const std::string& end)
{
    if (fullString.length() >= end.length())
    {
        return (0 == fullString.compare(fullString.length() - end.length(), end.length(), end));
    }

    return false;
}

std::string lnp(const std::string& input, const std::string& prefix, const std::string& suffix)
{
    int strLength = input.length();
    int printPrefixLength = prefix.length();
    int printSuffixLength = suffix.length();
    int mainOutLength = strLength - printPrefixLength - printSuffixLength;
    std::string output = input.substr(printPrefixLength, mainOutLength);
    return output;
}

long long lnpnum(const std::string& input, const std::string& prefix, const std::string& suffix)
{
    int strLength = input.length();
    int printPrefixLength = prefix.length();
    int printSuffixLength = suffix.length();
    int mainOutLength = strLength - printPrefixLength - printSuffixLength;
    std::string output = input.substr(printPrefixLength, mainOutLength);

    if (std::atoll(output.c_str()) > LONG_LONG_MAX)
    {
        return 0;
    }
    else
    {
        return std::atoll(output.c_str());
    }
}

int lens(const std::string& input)
{
    int strLength = input.length();
    int prefixLength = lenStringPre.length();
    int suffixLength = lenStringSuff.length();
    int mainOutLength = strLength - prefixLength - suffixLength;
    std::string output = input.substr(prefixLength, mainOutLength);
    return output.length();
}

int leni(std::string input)
{
    int strLength = input.length();
    int prefixLength = lenIntPre.length();
    int suffixLength = lenIntSuff.length();
    int mainOutLength = strLength - prefixLength - suffixLength;
    std::string output = input.substr(prefixLength, mainOutLength);
    return output.length();
}

bool isNumber(std::string s)
{
    for (unsigned i = 0; i < s.length(); i++)
    {
        if (std::isdigit(s[i]) == true)
        {
            return true;
        }
    }

    return false;
}