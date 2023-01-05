#include <iostream>

#ifndef PLATFORM
#define PLATFORM

class platform
{
private:
    /* data */
public:
    virtual ~platform(){};
    virtual void platform_init() = 0;
};

#endif