#include "expression.hpp"
#ifndef VAR_EXPRESSION
#define VAR_EXPRESSION

class var_expression : public expression
{
private:
    /* data */
protected:
    char key;

public:
    var_expression(const char &k)
    {
        this->key = k;
    };
    virtual ~var_expression(){};
    virtual int interpreter(std::map<char, int> v) override;
};

#endif