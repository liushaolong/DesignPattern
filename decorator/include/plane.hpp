#include "machine.hpp"
#ifndef PLANE
#define PLANE

class plane : public machine
{
private:
    /* data */
public:
    plane(/* args */);
    ~plane();  
    void run() override;
};



#endif