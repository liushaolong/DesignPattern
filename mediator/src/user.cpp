#include "user.hpp"
#include "chat_room.hpp"
user::user(/* args */)
{
}

user::~user()
{
}

void user::show_message(std::string msg)
{
    chat_room::show_message(this, msg);
}