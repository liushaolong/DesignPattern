#include <iostream>

#ifndef HANDLER
#define HANDLER

class handler
{
private:
    /* data */
protected:
    handler *next_handler;
    int weight;

public:
    handler(handler *h) : next_handler(h) {}
    virtual ~handler(){};
    virtual void handle_request(int request_type) = 0;
    virtual void set_next_handler(handler *h)
    {
        next_handler = h;
    };
};
#endif