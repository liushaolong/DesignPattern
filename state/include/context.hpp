#ifndef CONTEXT
#define CONTEXT

#include <string> 

class state;

class context
{
private:
    state *st;
    /* data */
public:
    context(/* args */);
    ~context();
    void set_state(state *s);
    state *get_state();
};

#endif