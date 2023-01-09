#include "aggregate.hpp"
#include "iterator.hpp"
#ifndef CONCRETE_ITERATOR
#define CONCRETE_ITERATOR
template <typename T>
class concrete_iterator : public iterator<T>
{
private:
    /* data */
    aggregate<T> *aggr;
    int cur;

public:
    concrete_iterator(aggregate<T> *a) : aggr(a), cur(0){};
    virtual ~concrete_iterator() {}

    virtual void first() override;
    virtual void next() override;
    virtual T *cur_item() override;
    virtual bool is_done() override;
};

template <typename T>
inline void concrete_iterator<T>::first()
{
    cur = 0;
}

template <typename T>
void concrete_iterator<T>::next()
{
    if (cur < aggr->get_size())
    {
        cur++;
    }
}

template <typename T>
T *concrete_iterator<T>::cur_item()
{
    if (cur < aggr->get_size())
    {
        return &(*aggr)[cur];
    }
    else
    {
        return NULL;
    }
}

template <typename T>
bool concrete_iterator<T>::is_done()
{
    return cur >= aggr->get_size();
}

#endif
