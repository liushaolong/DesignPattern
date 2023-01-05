#include "animal.hpp"

#ifndef PIG
#define PIG

class pig : public animal
{
private:
    /* data */
public:
    void run() override;
    void roar() override;
};

#endif