#include "machine.hpp"
#ifndef BOAT
#define BOAT

class boat : public machine
{
private:
    /* data */
public:
    boat(/* args */);
    ~boat();
    void run() override;
};


#endif