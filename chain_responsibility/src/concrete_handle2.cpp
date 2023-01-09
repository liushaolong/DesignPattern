#include "concrete_handle2.hpp"

void concrete_handle2::handle_request(int request_type)
{
    if (request_type > 1)
    {
        std::cout << "concrete_handle2::handle_request\n";
        if (next_handler != nullptr)
        {
            next_handler->handle_request(request_type);
        }
    }
}
