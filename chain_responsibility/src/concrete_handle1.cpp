#include "concrete_handle1.hpp"

void concrete_handle1::handle_request(int request_type)
{
    if (request_type > 0)
    {
        std::cout << "concrete_handle1::handle_request\n";
        if (next_handler != nullptr)
        {
            next_handler->handle_request(request_type);
        }
    }
}
