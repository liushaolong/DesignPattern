#include <iostream>
#ifndef SPLITTER
#define SPLITTER

class splitter
{
private:
    /* data */
public:
    virtual splitter *clone() = 0;
    virtual ~splitter() {}
};

#endif