#include <iostream>

class library
{
private:
    /* data */
public:
    void run();
    virtual ~library()
    {
        std::cout << "~library!\n";
    }

protected:
    void step1();
    virtual void step2() {}
    virtual void step3() {}
    void step4();
};
