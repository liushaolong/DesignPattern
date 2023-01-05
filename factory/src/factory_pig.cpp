#include "factory_pig.hpp"

animal* factory_pig::create_animal()
{
    return new pig();
}