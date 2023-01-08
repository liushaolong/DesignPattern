

#ifndef STATE
#define STATE


#include <string>
#include "context.hpp"

class state
{
private:
    /* data */ 
public:
    std::string s;
    virtual void handle(context * c) = 0;
    virtual ~state() {}
};

#endif