
#include "action.hpp"

action::action(/* args */)
{
}

action::~action()
{
}

void action::add_observer(std::string key, notify *obj)
{
    if (observers.find(key) == observers.end())
    {
        observers[key] = obj;
    }
}

void action::remove_observer(std::string key)
{
    if (observers.find(key) != observers.end())
    {
        observers.erase(key);
    }
}

void action::do_catch()
{
    for (auto item = observers.begin(); item != observers.end(); item++)
    {

        auto val = item->second;
        for (int i = 0; i < 5; i++)
        {
            val->do_nodify(item->first,i);
        }
    }
}
