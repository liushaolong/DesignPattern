#include "originator.hpp"

originator::originator(/* args */)
{
}

originator::~originator()
{
}
memento *originator::save(std::string str)
{
    return new memento(str);
}

void originator::getmemento(memento *m)
{
    mem = m;
}
