#include <iostream>
#ifndef ANIMAL
#define ANIMAL

class animal
{
private:
    /* data */
public:
    virtual void roar() = 0;
    virtual void run() = 0;
    virtual ~animal() {}
};

#endif