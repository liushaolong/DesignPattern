
#include "concrete_command1.hpp"
#include "concrete_command2.hpp"
#include "macro_command.hpp"

int main(int, char **)
{
    concrete_command1 command1;
    concrete_command2 command2;

    macro_command m_command;
    m_command.add_command(&command1);
    m_command.add_command(&command2);
    m_command.execute();
}
