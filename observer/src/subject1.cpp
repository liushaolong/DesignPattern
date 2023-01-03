#include "subject1.hpp"
subject1::subject1(/* args */)
{
}

subject1::~subject1()
{
}
void subject1::do_nodify(std::string key, int i)
{
    std::cout << "notify->" << key << "\n";
}