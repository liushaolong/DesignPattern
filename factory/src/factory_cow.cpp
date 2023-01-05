#include "factory_cow.hpp"

animal * factory_cow::create_animal()
{
    return new cow();
}