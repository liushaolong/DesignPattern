#include "handler.hpp"
#ifndef CONCRETE_HANDLE1
#define CONCRETE_HANDLE1

class concrete_handle1 : public handler
{
private:
    /* data */
public:
    concrete_handle1(handler *h) : handler(h)
    {
    }
    ~concrete_handle1()
    {
    }
    virtual void handle_request(int request_type) override;
};

#endif