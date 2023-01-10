#include "element1.hpp"

element1::element1(/* args */)
{
}

element1::~element1()
{
}

void element1::execute(visitor &v)
{
    std::cout << "element1::execute!\n";
    v.visitor_element(this);
 
}
