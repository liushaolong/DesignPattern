#include "command.hpp"
#ifndef CONCRETE_COMMAND2
#define CONCRETE_COMMAND2

class concrete_command2 : public command
{
private:
    /* data */
public:
    concrete_command2(/* args */);
    ~concrete_command2();
    virtual void execute() override;
};


#endif