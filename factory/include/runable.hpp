
#include "factory.hpp"
#include "animal.hpp"

#ifndef RUNABLE
#define RUNABLE

class runable
{
protected:
    /* data */
    factory *ft;

public:
    runable(factory *f) : ft(f){

                          };
    ~runable()
    {
    }

    void action();
};

#endif