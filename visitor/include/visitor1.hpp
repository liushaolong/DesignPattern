#include "visitor.hpp"
#ifndef VISITOR1
#define VISITOR1

class visitor1 : public visitor
{
private:
    /* data */
public:
    visitor1(/* args */);
    ~visitor1();
    virtual void visitor_element(element *elem) override; 
};


#endif