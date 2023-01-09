#include "vector"
#include "component.hpp"
#ifndef COMPOSITE
#define COMPOSITE

class composite : public component
{
private:
    /* data */
    std::vector<component *> vec_component;
public:
    composite(/* args */);
    ~composite();
    void add(component *c);
    std::vector<component *>  get();
    virtual void process() override;
};


#endif