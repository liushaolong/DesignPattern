
#include "building.hpp"
#include "zoo_factory.hpp"
int main(int, char**) {
    // std::cout << "Hello, world!\n";
    building b(new zoo_factory());
}
