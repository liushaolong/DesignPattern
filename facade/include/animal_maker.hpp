#include "horse.hpp"
#include "monkey.hpp"
#ifndef ANIMAL_MAKER
#define ANIMAL_MAKER

class animal_maker
{
private:
    /* data */
    animal *h;
    animal *m;

public:
    animal_maker(/* args */);
    ~animal_maker();
};

animal_maker::animal_maker(/* args */)
{
    h = new horse();
    m = new monkey();
}

animal_maker::~animal_maker()
{
}

#endif