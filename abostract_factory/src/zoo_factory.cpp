#include "zoo_factory.hpp"

mammal *zoo_factory::create_mammal()
{
    return new lion();
};
reptiles *zoo_factory::create_reptiles()
{
    return new snake();
};