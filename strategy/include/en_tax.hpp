#include "tax_strategy.hpp"
#ifndef EN_TAX
#define EN_TAX

class en_tax :public tax_strategy
{
private:
    /* data */
public:
    en_tax(/* args */);
    ~en_tax();
    virtual double calulate(const context &txt) override;
};

#endif
