#include "animal.hpp"
#include <map>
#ifndef ZOO
#define ZOO

class zoo
{
private:
    /* data */
    std::map<std::string, animal *> z;

public:
    zoo(/* args */);
    ~zoo();
    animal *get_animal(std::string key)
    {
        std::map<std::string, animal *>::iterator it = z.find(key);
        if (it != z.end())
        {
            return z[key];
        }
        else
        {
            z[key] = new animal();
            return z[key];
        }
    }
};

zoo::zoo(/* args */)
{
}

zoo::~zoo()
{
}

#endif