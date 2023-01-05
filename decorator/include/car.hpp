#include "machine.hpp"
#ifndef CAR
#define CAR

class car : public machine
{
private:
    /* data */
public:
    car(/* args */);
    ~car();    
    void run() override;              
};



#endif