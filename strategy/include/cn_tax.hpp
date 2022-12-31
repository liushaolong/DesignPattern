#include "tax_strategy.hpp"

#ifndef CN_TAX
#define CN_TAX

class cn_tax :public tax_strategy
{
private:
    /* data */
public:
    cn_tax(/* args */);
    ~cn_tax();
    virtual double calulate(const context &txt) override;
};

#endif

