#include "iterator.hpp"
#ifndef AGGREGATE
#define AGGREGATE

template <typename T>
class aggregate
{
private:
    /* data */
public: 
    virtual ~aggregate() {}
    virtual void push_data(T t) = 0;
    virtual iterator<T> *create_iterator() = 0;
    virtual T &operator[](int index) = 0;
    virtual int get_size() = 0;
};

#endif