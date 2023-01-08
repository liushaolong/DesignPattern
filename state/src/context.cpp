#include "context.hpp"

context::context(/* args */)
{
}

context::~context()
{
}

void context::set_state(state *s)
{
    this->st = s;
}

state *context::get_state()
{
    return this->st;
}
