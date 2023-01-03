#include <iostream>

#ifndef NOTIFY
#define NOTIFY

class notify
{ 
public: 
    virtual void do_nodify(std::string key,int i)=0;
};
 

#endif