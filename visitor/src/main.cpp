#include "visitor1.hpp"
#include "element1.hpp"

int main(int, char **)
{
    visitor1 vis1;
    element1 elem1;
    elem1.execute(vis1);
}
