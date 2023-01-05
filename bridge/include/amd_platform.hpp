#include "platform.hpp"
 
#ifndef AMD_PLATFORM
#define AMD_PLATFORM


class amd_platform : public platform
{
private:
    /* data */
public:  
    void platform_init() override;
};

 

#endif