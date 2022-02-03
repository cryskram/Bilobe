#include <cmath>
#include <iostream>
#include <cmath>
#include <stack>

// file to conduct math
int precedence(char op)
{
    if (op == '+' || op == '-')
        return 1;
    if (op == '*' || op == '/')
        return 2;
    return 0;
}
long double applyOp(long double a, long double b, char op)
{
    switch (op)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '^':
        return std::pow(a, b);
    }
    return 0;
}
long double evaluate(std::string tokens)
{
    unsigned i;
    std::stack<long double> values;
    std::stack<char> ops;

    for (i = 0; i < tokens.length(); i++)
    {
        if (tokens[i] == ' ')
            continue;
        else if (tokens[i] == '(')
        {
            ops.push(tokens[i]);
        }
        else if (isdigit(tokens[i]))
        {
            long double val = 0;
            while (i < tokens.length() &&
                   isdigit(tokens[i]))
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
                long double val2 = values.top();
                values.pop();

                long double val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }
            if (!ops.empty())
                ops.pop();
        }
        else
        {
            while (!ops.empty() && precedence(ops.top()) >= precedence(tokens[i]))
            {
                long double val2 = values.top();
                values.pop();

                long double val1 = values.top();
                values.pop();

                char op = ops.top();
                ops.pop();

                values.push(applyOp(val1, val2, op));
            }
            ops.push(tokens[i]);
        }
    }
    while (!ops.empty())
    {
        long double val2 = values.top();
        values.pop();

        long double val1 = values.top();
        values.pop();

        char op = ops.top();
        ops.pop();

        values.push(applyOp(val1, val2, op));
    }
    return values.top();
}