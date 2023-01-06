#include "splitter.hpp"
#ifndef RUNABLE
#define RUNABLE

class runable
{
private:
    /* data */
    splitter *sp;

public:
    runable(splitter *s) : sp(s)
    {
        sp->clone();
    }
    virtual ~runable() {}
};

#endif