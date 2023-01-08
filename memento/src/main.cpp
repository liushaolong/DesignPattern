#include "memento.hpp"
#include "caretaker.hpp"
#include "originator.hpp"

int main(int, char **)
{
    // std::cout << "Hello, world!\n";
    caretaker care;
    originator orig;
    memento *mem1 = orig.save("m1");
    care.add((*mem1));
    std::cout << care.get(0).state << std::endl;
}
