
#include "element.hpp"


#ifndef ELEMENT1
#define ELEMENT1

class element1 : public element
{
private:
    /* data */
public:
    element1(/* args */);
    ~element1();
    virtual void execute(visitor &v) override;
};


#endif