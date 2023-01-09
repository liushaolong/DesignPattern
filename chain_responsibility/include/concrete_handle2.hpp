#include "handler.hpp"
#ifndef CONCRETE_HANDLE2
#define CONCRETE_HANDLE2

class concrete_handle2 : public handler
{
private:
    /* data */
public:
    concrete_handle2(handler *h) : handler(h) {}
    ~concrete_handle2() {}
    virtual void handle_request(int request_type) override;
};

#endif