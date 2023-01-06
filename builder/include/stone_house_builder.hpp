#include "house_builder.hpp"
#ifndef STONE_HOUSE_BUILDER
#define STONE_HOUSE_BUILDER

class stone_house_builder : public house_builder
{
private:
    /* data */
public:
    stone_house_builder(house *h) : house_builder(h)
    {
        
    }
    virtual ~stone_house_builder() {}
};

#endif