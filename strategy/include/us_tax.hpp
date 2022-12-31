#include "tax_strategy.hpp"

#ifndef US_TAX
#define US_TAX

class us_tax :public tax_strategy
{
private:
    /* data */
public:
    us_tax(/* args */);
    ~us_tax();
    virtual double calulate(const context &txt) override;
};

#endif


