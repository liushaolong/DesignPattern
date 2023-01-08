
#include <string>
#ifndef USER
#define USER

class user
{
private:
    /* data */
public:
    std::string name;
    user(/* args */);
    ~user();
    void show_message(std::string msg);
};



#endif