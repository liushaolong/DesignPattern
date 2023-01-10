#include <iostream>

#ifndef VISITOR
#define VISITOR
class element;
class visitor
{
private:
    /* data */
public:
    virtual void visitor_element(element *elem) = 0;
    virtual ~visitor() {}
};

#endif