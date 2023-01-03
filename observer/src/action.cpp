
#include "action.hpp"

action::action(/* args */)
{
}

action::~action()
{
}

void action::attach(std::string key, notify *obj)
{
    if (observers.find(key) == observers.end())
    {
        observers[key] = obj;
    }
}

void action::detach(std::string key)
{
    if (observers.find(key) != observers.end())
    {
        observers.erase(key);
    }
}

void action::do_notify()
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
