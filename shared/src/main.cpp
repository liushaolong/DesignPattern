#include "zoo.hpp"
#include <iostream>

int main(int, char **)
{
    zoo z;
    animal *a = z.get_animal("mouse");
    
    std::cout << "Hello, world!\n";
}
