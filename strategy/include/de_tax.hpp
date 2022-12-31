#include "tax_strategy.hpp"
#ifndef DE_TAX
#define DE_TAX

class de_tax :public tax_strategy
{
private:
    /* data */
public:
    de_tax(/* args */);
    ~de_tax();
    virtual double calulate(const context &txt) override;
};

#endif

