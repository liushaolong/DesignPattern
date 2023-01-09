#ifndef ITERATOR
#define ITERATOR
template <typename T>
class iterator
{
private:
    /* data */
public:
    virtual ~iterator() {}

    virtual void first() = 0;
    virtual void next() = 0;
    virtual T *cur_item() = 0;
    virtual bool is_done() = 0;
};

#endif