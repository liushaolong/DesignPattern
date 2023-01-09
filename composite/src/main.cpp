#include "leaf.hpp"
#include "composite.hpp"

int main(int, char **)
{
    composite root;
    component *se = new composite();
    component *lf = new leaf();
    root.add(se);
    root.add(lf);
    std::vector<component *> vec_component = root.get();
    size_t count = vec_component.size();
    for (size_t i = 0; i < count; i++)
    {
        vec_component.at(i)->process();
        /* code */
    }
}
