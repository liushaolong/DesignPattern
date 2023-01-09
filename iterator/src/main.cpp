#include "iterator.hpp"
#include "concrete_aggreagte.hpp"
#include "aggregate.hpp"
#include <iostream>

int main(int, char **)
{
    aggregate<int> *agg = new concrete_aggreagte<int>();
    agg->push_data(1);
    agg->push_data(2);
    agg->push_data(3);
    iterator<int> *it = agg->create_iterator();
    
    for (it->first(); !it->is_done(); it->next())
    {
        /* code */
        std::cout << *it->cur_item() << std::endl;
    }

    std::cout << "Hello, world!\n";
}
