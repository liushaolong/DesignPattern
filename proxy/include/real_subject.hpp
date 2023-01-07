#include "subject.hpp"

#ifndef REAL_SUBJECT
#define REAL_SUBJECT

class real_subject : public subject
{
private:
    /* data */
public:
    real_subject(/* args */);
    ~real_subject();
    virtual void say() override;
};



#endif