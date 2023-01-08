#include "state.hpp"
#ifndef CONCRETE_STATE2
#define CONCRETE_STATE2

class concrete_state2 : public state
{
private:
    /* data */
public:
    concrete_state2(/* args */);
    ~concrete_state2();
    virtual void handle(context * c) override;
};

#endif