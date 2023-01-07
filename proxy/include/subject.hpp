#include <iostream>

#ifndef SUBJECT
#define SUBJECT

class subject
{
private:
    /* data */
public:
    virtual ~subject() {}
    virtual void say() = 0;
};

#endif