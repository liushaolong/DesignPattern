
#include "concrete_handle1.hpp"
#include "concrete_handle2.hpp"

int main(int, char **)
{
    handler *h1 = new concrete_handle2(nullptr);
    handler *h = new concrete_handle1(h1);
    h->handle_request(2);
}
