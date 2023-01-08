#include "concrete_state2.hpp"


concrete_state2::concrete_state2(/* args */)
{
}

concrete_state2::~concrete_state2()
{
}

void concrete_state2::handle(context * c)
{
    this->s = "state2"; 
    c->set_state(this);
}