#include <iostream>
#include <string>
using namespace std;

// Global Variables
string printPrefix = "lnp(\"";
string printSuffix = "\")";

bool start_with(string main, string part)
{
    if (main.find(part) == 0)
    {
        return true;
    }

    return false;
}

bool end_with(string fullString, string end)
{
    if (fullString.length() >= end.length())
    {
        return (0 == fullString.compare(fullString.length() - end.length(), end.length(), end));
    }

    return false;
}

string lnp(string input)
{
    int strLength = input.length();
    int printPrefixLength = printPrefix.length();
    int printSuffixLength = printSuffix.length();
    int mainOutLength = strLength - printPrefixLength - printSuffixLength;
    string output = input.substr(printPrefixLength, mainOutLength);
    return output;
}