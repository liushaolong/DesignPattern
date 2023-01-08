#include "adaptee.hpp"
#include "adapter.hpp"
#ifndef TARGET
#define TARGET

class target : public adapter
{
private:
    adaptee  adp;
    /* data */
public:
    target(/* args */);
    ~target();
    virtual void say() override;
};


#endif