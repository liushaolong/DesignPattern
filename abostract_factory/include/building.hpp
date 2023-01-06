#include "zoo.hpp"
#ifndef BUILDING
#define BUILDING

class building
{
private:
    /* data */
    zoo *zo;

public:
    building(zoo *z) : zo(z)
    {
        z->create_mammal();
        z->create_reptiles();
    }
    virtual ~building() {

    }
};

#endif