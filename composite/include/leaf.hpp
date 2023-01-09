#include "component.hpp"
#ifndef LEAF
#define LEAF

class leaf : public component
{
private:
    /* data */
public:
    leaf(/* args */);
    ~leaf();
    virtual void process() override;
};

#endif