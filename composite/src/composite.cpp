#include "composite.hpp"

composite::composite(/* args */)
{
}

composite::~composite()
{
}

void composite::add(component *c)
{
    vec_component.push_back(c);
}

std::vector<component *> composite::get()
{
    return vec_component;
}

void composite::process()
{
    std::cout << "composite::process\n";
}