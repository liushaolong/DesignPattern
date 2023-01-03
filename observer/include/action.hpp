#include "notify.hpp" 
#include <map>
#include <string>
#ifndef ACTION
#define ACTION

class action
{
private:
    /* data */
    std::map<std::string, notify*> observers;
public:
    action(/* args */);
    ~action();
    void add_observer(std::string, notify*);
    void remove_observer(std::string);
    void do_catch();
};



#endif