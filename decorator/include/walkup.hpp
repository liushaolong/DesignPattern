#include "decorator_machine.hpp"
#ifndef RUN
#define RUN

class walkup : public decorator_machine
{
private:
    std::string sth;

public:
    walkup(machine *m, std::string s) : decorator_machine(m), sth(s)
    {
    }
    virtual ~walkup() {}
    void run() override;
};

#endif