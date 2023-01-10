#include <iostream>
#include "visitor.hpp"
#ifndef ELEMENT
#define ELEMENT 

class element
{
private:
    /* data */
public:
    virtual ~element(){};
    virtual void execute(visitor &v) = 0;
};

#endif