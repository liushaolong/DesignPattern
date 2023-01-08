#include "state.hpp" 
#ifndef CONCRETE_STATE1
#define CONCRETE_STATE1



class concrete_state1 : public state
{
private:
    /* data */
public:
    concrete_state1(/* args */);
    ~concrete_state1();
    virtual void handle(context * c) override;
};

#endif
 