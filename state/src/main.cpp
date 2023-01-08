
#include <iostream> 
#include "concrete_state1.hpp"
#include "concrete_state2.hpp"

int main(int, char **)
{
    context txt;
    state *s1 = new concrete_state1();
    state *s2 = new concrete_state2();
    s1->handle(&txt);

    std::cout << "state:"<<txt.get_state()->s<<std::endl;
    
    s2->handle(&txt);
    std::cout << "state:"<<txt.get_state()->s<<std::endl;
    
 
}
