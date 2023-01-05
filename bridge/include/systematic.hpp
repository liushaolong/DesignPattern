#include "platform.hpp"
#ifndef SYSTEM
#define SYSTEM

class systematic
{
protected:
    /* data */
    platform *plat;

public:
    systematic(/* args */ platform *p) : plat(p)
    {
        
    }
    virtual ~systematic() {

    }; 
};

#endif
