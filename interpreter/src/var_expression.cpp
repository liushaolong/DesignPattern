#include "var_expression.hpp"

int var_expression::interpreter(std::map<char, int> v)
{
      return v[key];
}
