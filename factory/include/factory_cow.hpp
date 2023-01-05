#include "factory.hpp"
#include "cow.hpp"
#ifndef FACTORY_COW
#define FACTORY_COW

class factory_cow : public factory
{
private:
    /* data */
public:
    animal * create_animal() override;

};

#endif