#include "notify.hpp"
#ifndef SUBJECT1
#define SUBJECT1

class subject1 :public notify
{
private:
    /* data */
public:
    subject1(/* args */);
    ~subject1();
    void do_nodify(std::string key,int i) override;
};




#endif