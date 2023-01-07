#include <iostream>
#include "singleton.hpp"

int main(int, char **)
{
    singleton *s = singleton::get_instance();
    std::cout << "Hello, world!\n";
}
