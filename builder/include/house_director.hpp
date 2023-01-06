#include "house_builder.hpp"
#ifndef HOUSE_DIRECTOR
#define HOUSE_DIRECTOR

class house_director
{
private:
    house_builder *hb;
    /* data */
public:
    house_director(house_builder *h) : hb(h)
    {
        
    }

    house *construct();
};

#endif