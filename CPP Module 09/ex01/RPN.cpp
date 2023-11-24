#include "RPN.hpp"
#include <cstring>
#include <cstdlib>

RPN::RPN() {}

RPN::~RPN() {}

RPN::RPN(const RPN& other) { *this = other; }

RPN& RPN::operator=(const RPN& other) { mStack = other.mStack; return *this; }

void RPN::exit_error() { std::cout << "Error" << std::endl; exit(1); }

std::string RPN::checkInput(char* input)
{
    size_t i = 0, j = 0;
    std::string ret;
    char *tmp = std::strtok(input, " ");
    while (tmp != NULL)
    {
        if ((tmp[0] && !tmp[1]))
        {
            if (!(tmp[0] == PLUS || tmp[0] == MINUS
                || tmp[0] == MULTI || tmp[0] == DIVIDE) && !isdigit(tmp[0]))
                exit_error();
            if (tmp[0] == PLUS || tmp[0] == MINUS
                || tmp[0] == MULTI || tmp[0] == DIVIDE)
                ++i;
            else
                ++j;
            ret += tmp[0];
        }
        else
            exit_error();
        tmp = std::strtok(NULL, " ");
    }
    if (i == 0 || j == 1)
        exit_error();
    return ret;
}

void RPN::processInput(char* input)
{
    std::string mStr = checkInput(input);
    std::stack<int> mStack;
    int x = 0, y = 0;

    for (size_t i = 0; i < mStr.size(); ++i) {
        if (isdigit(mStr[i]))
            mStack.push(mStr[i] - 48);
        else
        {
            x = mStack.top(); mStack.pop();
            y = mStack.top(); mStack.pop();
            if (mStr[i] == PLUS)
                mStack.push(x + y);
            else if (mStr[i] == MINUS)
                mStack.push(y - x);
            else if (mStr[i] == MULTI)
                mStack.push(x * y);
            else if (mStr[i] == DIVIDE)
                mStack.push(y / x);
        }
    }
    std::cout << mStack.top() << std::endl;
}
