#include "splitter.hpp"
#ifndef BINARY_SPLITTER
#define BINARY_SPLITTER

class binary_splitter : public splitter
{
private:
    /* data */
public: 
    binary_splitter();
    binary_splitter(const binary_splitter &b);
    virtual splitter * clone() override;
};
 


#endif