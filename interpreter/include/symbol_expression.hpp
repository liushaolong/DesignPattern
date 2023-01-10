#include "expression.hpp"

#ifndef SYMBOL_EXPRESSION
#define SYMBOL_EXPRESSION

class symbol_expression : public expression
{
private:
    /* data */
protected:
    expression *exp1;
    expression *exp2;

public:
    symbol_expression(expression *e1, expression *e2) : exp1(e1), exp2(e2){

                                                                  };
    virtual ~symbol_expression(){};
};
#endif