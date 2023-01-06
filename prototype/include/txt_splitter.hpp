#include "splitter.hpp"
#ifndef TXT_SPLITTER
#define TXT_SPLITTER

class txt_splitter : public splitter
{
private:
    /* data */
public: 
    txt_splitter();
    txt_splitter(const txt_splitter &t);
    virtual splitter * clone() override;
};
 


#endif