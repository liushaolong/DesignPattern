
#include <iostream>

#ifndef COMPONENT
#define COMPONENT

class component
{
private:
    /* data */
public:
    virtual ~component() {}
    virtual void process() = 0;
};

#endif