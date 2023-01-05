#include "systematic.hpp"
#include "platform.hpp"
#ifndef WINDOWS
#define WINDOWS

class windows : public systematic
{
private:
    /* data */
public:
    windows(/* args */ platform *p) : systematic(p)
    {
        p->platform_init();
        std::cout << "windows, system!\n";
    }
};

#endif