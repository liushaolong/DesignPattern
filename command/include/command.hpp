
#include <vector>
#include <iostream>

#ifndef COMMAND
#define COMMAND

class command
{
private:
    /* data */
public:
    virtual void execute() = 0;
    virtual ~command() {}
};

#endif