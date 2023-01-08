#include "concrete_state1.hpp"

concrete_state1::concrete_state1(/* args */)
{
}

concrete_state1::~concrete_state1()
{
}

void concrete_state1::handle(context * c)
{
    this->s = "state1";
    c->set_state(this);
}
