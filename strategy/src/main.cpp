#include <iostream>
#include "cn_tax.hpp"
#include "sale_order.hpp"


int main(int, char **)
{
    tax_strategy *tax= new cn_tax();
    sale_order so(tax);
    so.calculate_tax();
    std::cout << "Hello, world!\n";
}
