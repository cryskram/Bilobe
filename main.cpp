#include <iostream>
#include <string>
#include <vector>
#include "utils/customFunc.h"
#include "utils/helpDis.h"
using namespace std;

int main()
{
    string code, display;
    vector<string> syntax{"lnp"};

    while (true)
    {
        cout << ">>> ";
        getline(cin, code);

        if (start_with(code, printPrefix))
        {
            if (!end_with(code, printSuffix))
            {
                cout << "End the lnp statement with \")" << endl;
            }
            else
            {
                display = lnp(code);
                cout << display << endl;
            }
        }

        else if (code == "help")
        {
            helpFunc(syntax);
            continue;
        }
        else
        {
            cout << "Try other syntax..." << endl;
        }
    }
}