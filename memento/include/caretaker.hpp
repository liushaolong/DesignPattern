
#include <vector>
#include "memento.hpp"
#ifndef CARETAKER
#define CARETAKER

class caretaker
{
private:
    /* data */
    std::vector<memento> mem_vec;

public:
    caretaker(/* args */);
    ~caretaker();

    void add(memento m);
    memento get(int index);
};

#endif