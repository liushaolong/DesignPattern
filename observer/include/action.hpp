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
    void attach(std::string, notify*);
    void detach(std::string);
    void do_notify();
};



#endif