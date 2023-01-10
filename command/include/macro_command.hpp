
#include "command.hpp"
#ifndef MACRO_COMMAND
#define MACRO_COMMAND

class macro_command : public command
{
private:
    /* data */
    std::vector<command *> vec_command;
public:
    macro_command(/* args */);
    ~macro_command();
    virtual void execute() override;
    void add_command(command * c);

};


#endif