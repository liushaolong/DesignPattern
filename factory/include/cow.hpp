#include "animal.hpp"

#ifndef COW
#define COW

class cow : public animal
{
private:
    /* data */
public:  
    void run() override;
    void roar() override;
};
 

#endif