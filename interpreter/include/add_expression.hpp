#include "symbol_expression.hpp"
#ifndef ADD_EXPRESSION
#define ADD_EXPRESSION

class add_expression : public symbol_expression
{
private:
    /* data */
public:
    add_expression(expression *e1, expression *e2) : symbol_expression(e1, e2) {

    }
    virtual ~add_expression() {}
    virtual int interpreter(std::map<char, int> v) override;
};

#endif