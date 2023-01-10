#include "element.hpp"

#ifndef ELEMENT2
#define ELEMENT2

class element2 : public element
{
private:
    /* data */
public:
    element2(/* args */);
    ~element2();
    virtual void execute(visitor &v) override;
};


#endif