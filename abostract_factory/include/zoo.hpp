#include "mammal.hpp"
#include "reptiles.hpp"
#ifndef ZOO
#define ZOO

class zoo
{
private:
    /* data */
public:
    virtual mammal *create_mammal() = 0;
    virtual reptiles *create_reptiles() = 0;
    virtual ~zoo(){};
};

#endif