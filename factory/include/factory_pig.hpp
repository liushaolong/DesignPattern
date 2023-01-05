#include "factory.hpp"
#include "pig.hpp"
#ifndef FACTORY_PIG
#define FACTORY_PIG

class factory_pig : public factory
{
private:
    /* data */
public:
    animal * create_animal() override;
};
 


#endif