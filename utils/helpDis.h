#include <iostream>
#include <string>
#include <vector>
using namespace std;

void helpFunc(vector<string> syntax)
{
    int helpChoice;
    cout << "Bilobe a Programming Language made simple to Code" << endl;
    cout << "-------------------------------------------------" << endl;
    cout << endl;
    cout << "1. List of available Syntax" << endl;
    cout << "2. Simple Examples" << endl;
    cout << "Enter your choice: ";
    cin >> helpChoice;

    if (helpChoice == 1)
    {
        for (auto i = 0; i < syntax.size(); i++)
        {
            cout << syntax[i] << endl;
        }
    }
}