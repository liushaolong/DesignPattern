#include "tax_strategy.hpp"
#ifndef SALE_ORDER
#define SALE_ORDER

class sale_order
{
private:
    /* data */
    tax_strategy *tax;
public:
    sale_order(tax_strategy *t);
    ~sale_order();
    double calculate_tax();
};
 

#endif
