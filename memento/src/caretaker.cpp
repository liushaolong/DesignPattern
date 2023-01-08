#include "caretaker.hpp"
caretaker::caretaker(/* args */)
{
}

caretaker::~caretaker()
{
}

void caretaker::add(memento m)
{
    mem_vec.push_back(m);
}

memento caretaker::get(int index)
{
    return mem_vec.at(index);
}
