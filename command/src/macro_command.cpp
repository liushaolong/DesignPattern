#include "macro_command.hpp"

macro_command::macro_command(/* args */)
{
}

macro_command::~macro_command()
{
}

void macro_command::execute()
{
    for (auto c : vec_command)
    {
        c->execute();
    }
}

void macro_command::add_command(command *c)
{
    vec_command.push_back(c);
}
