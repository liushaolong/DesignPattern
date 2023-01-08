#include "memento.hpp"
#ifndef ORIGINATOR
#define ORIGINATOR

class originator
{
private:
    /* data */
    memento *mem;

public:
    originator(/* args */);
    ~originator();
    memento *save(std::string str);
    void getmemento(memento * m);
};

#endif