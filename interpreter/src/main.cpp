#include <map>
#include <stack>
#include <iostream>
#include "var_expression.hpp"
#include "add_expression.hpp"

expression *analyse(std::string exp_str)
{
    std::stack<expression *> exp_stack;
    expression *exp1 = nullptr;
    expression *exp2 = nullptr;
    for (int i = 0; i < exp_str.size(); i++)
    {
        switch (exp_str.at(i))
        {
        case '+':
            exp1 = exp_stack.top();
            exp2 = new var_expression(exp_str[++i]);
            exp_stack.push(new add_expression(exp1, exp2));
            break;

        default:
            exp_stack.push(new var_expression(exp_str[i]));
            break;
        }
    }
    expression *e = exp_stack.top();
    return e;
}

int main(int, char **)
{
    std::string exp_str = "a+b+a";
    std::map<char, int> var;
    var.insert(std::make_pair('a', 1));
    var.insert(std::make_pair('b', 1));
    expression *e = analyse(exp_str);
    int result = e->interpreter(var);
    std::cout << "Hello, world!" << result << std::endl;
}
