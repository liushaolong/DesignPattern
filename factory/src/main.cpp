
#include "runable.hpp"
#include "factory_pig.hpp"

int main(int, char**) {
    runable r(new factory_pig());
    r.action();
    std::cout << "Hello, world!\n";
}
