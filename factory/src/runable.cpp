#include "runable.hpp"

void runable::action()
{
     animal *a=ft->create_animal();
     a->roar();
     a->run();
}