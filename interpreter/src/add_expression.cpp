#include "add_expression.hpp"

int add_expression::interpreter(std::map<char, int> v)
{
    return exp1->interpreter(v) + exp2->interpreter(v);
}