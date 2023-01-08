#include "chat_room.hpp"

void chat_room::show_message(user *u, std::string msg)
{
    std::cout << u->name<<msg<<std::endl;
}