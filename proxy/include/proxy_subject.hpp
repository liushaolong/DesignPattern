#include "real_subject.hpp"
#ifndef PROXY_SUBJECT
#define PROXY_SUBJECT

class proxy_subject : public subject
{
private:
    /* data */
    real_subject real;
public:
    proxy_subject(/* args */);
    ~proxy_subject();
    virtual void say() override;
};



#endif