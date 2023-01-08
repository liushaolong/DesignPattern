#include <iostream>

#ifndef MEMENTO
#define MEMENTO

class memento
{ 
public:
    std::string state;
    memento(std::string s) : state(s) {}
    virtual ~memento() {}
};

#endif