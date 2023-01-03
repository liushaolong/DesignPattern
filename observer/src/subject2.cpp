#include "subject2.hpp"
subject2::subject2(/* args */)
{
}

subject2::~subject2()
{
}
void subject2::do_nodify(std::string key, int i)
{
    std::cout << "notify->" << key << "\n";
}