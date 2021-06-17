#include <iostream>
#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int precedence(char op)
{
    if (op == '+' || op == '-')
    {
        return 1;
    }

    if (op == '*' || op == '/')
    {
        return 2;
    }

    return 0;
}

float round(float var)
{
    // 37.66666 * 100 =3766.66
    // 3766.66 + .5 =3767.16    for rounding off value
    // then type cast to int so value is 3767
    // then divided by 100 so the value converted into 37.67
    float value = (int)(var * 10000 + .5);
    return (float)value / 10000;
}

float operations(float a, float b, char op)
{
    if (op == '+')
        return round(a+b);
    else if (op == '-')
        return round(a-b);
    else if (op == '*')
        return round(a*b);
    else if (op == '/')
        return round(a/b);
    else if (op == '^')
        return round(pow(a,b));
    else 
        return 0.0;
}

float evaluate(string tokens)
{
    stack<float> values;
    stack<char> ops;

    for (int i = 0; i < tokens.length(); i++)
    {
        if (tokens[i] == ' ')
            continue;
        else if (tokens[i] == '(')
            ops.push(tokens[i]);
        else if (isdigit(tokens[i]))
        {
            float val = 0;
            while ( i < tokens.length() && isdigit(tokens[i]))
            {
                val = (val * 10) + (tokens[i] - '0');
                i++;
            }

            values.push(val);
            i--;
        }

        else if (tokens[i] == ')')
        {
            while (!ops.empty() && ops.top() != '(')
            {
                float val2 = values.top();
                values.pop();

                float val1 = values.top();
                values.pop();

                char op = values.top();
                ops.pop();

                values.push(operations(val1, val2, op));
            }
            if (!ops.empty())
                ops.pop();
        }

        else
        {
            while (!ops.empty() && precedence(ops.top()) >= precedence(tokens[i]))
            {
                float val2 = values.top();
                values.pop();

                float val1 = values.top();
                values.pop();

                char op = values.top();
                ops.pop();

                values.push(operations(val1, val2, op));
            }
            ops.push(tokens[i]);
        }
    }

    while (!ops.empty())
    {
        float val2 = values.top();
        values.pop();

        float val1 = values.top();
        values.pop();

        char op = values.top();
        ops.pop();

        values.push(operations(val1, val2, op));
    }
    return values.top();
}



int main()
{
    std::string input;

    while (true)
    {
        cout << ">>> ";
        std::getline(std::cin, input);

        cout << evaluate(input) << endl;
    }
}