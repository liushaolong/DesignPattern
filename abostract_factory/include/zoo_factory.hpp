#include "zoo.hpp"
#include "lion.hpp"
#include "snake.hpp"

#ifndef ZOO_FACTORY
#define ZOO_FACTORY

class zoo_factory : public zoo
{
private:
    /* data */
public:
    virtual mammal *create_mammal() override;
    virtual reptiles *create_reptiles() override;
};
  
#endif