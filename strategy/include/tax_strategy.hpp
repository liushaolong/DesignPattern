#ifndef TAX_STRATEGY
#define TAX_STRATEGY

#include "context.hpp"

class tax_strategy
{
private:
    /* data */
public:
    virtual double calulate(const context &txt) = 0;
    virtual ~tax_strategy() {}
};


#endif