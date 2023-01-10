#include "command.hpp"
#ifndef CONCRETE_COMMAND1
#define CONCRETE_COMMAND1

class concrete_command1 : public command
{
private:
    /* data */
public:
    concrete_command1(/* args */);
    ~concrete_command1();
    virtual void execute() override;
};

#endif