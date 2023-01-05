#include "animal.hpp"

#ifndef FACTORY
#define FACTORY

class factory
{
private:
    /* data */
public:
    virtual animal * create_animal() =0 ;
    virtual ~factory() {}
};

#endif