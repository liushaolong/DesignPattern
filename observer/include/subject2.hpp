
#include "notify.hpp"
#ifndef SUBJECT2
#define SUBJECT2

class subject2 :public notify
{
private:
    /* data */
public:
    subject2(/* args */);
    ~subject2();
    void do_nodify(std::string key,int i) override;
};



#endif