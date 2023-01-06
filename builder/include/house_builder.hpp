#include "house.hpp"
#ifndef HOUSE_BUILDER
#define HOUSE_BUILDER

class house_builder
{
protected:
    /* data */
    house *ho;

public:
    house_builder(house *h) : ho(h)
    {
    }
    void init();
    house *get_result()
    {
        std::cout << "house_builder::get_result\n";
        return ho;
    }
    virtual ~house_builder() {}
};

#endif