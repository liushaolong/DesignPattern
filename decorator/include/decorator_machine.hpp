#include "machine.hpp"
#ifndef DECORATOR_MACHINE
#define DECORATOR_MACHINE

class decorator_machine : public machine
{
protected:
    /* data */
    machine *mach; 
public:
    decorator_machine(machine *mac) : mach(mac){

                                      };
    virtual ~decorator_machine(){

    };
};

#endif