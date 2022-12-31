#include "sale_order.hpp"

sale_order::sale_order(tax_strategy *t)
{
    this->tax=t;
}

sale_order::~sale_order()
{
    delete this->tax;
}

double sale_order::calculate_tax()
{
    context txt;
    return tax->calulate(txt);
}
