#include <map>
#ifndef EXPRESSION
#define EXPRESSION

class expression
{
private:
    /* data */
public:
    virtual int interpreter(std::map<char, int> v) = 0;
    virtual ~expression() {}
};
#endif