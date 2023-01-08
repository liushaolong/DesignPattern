#include <iostream>
#include "user.hpp"

#ifndef CHAT_ROOM
#define CHAT_ROOM

class chat_room
{
public:
    static void show_message(user *u, std::string msg);
};
#endif