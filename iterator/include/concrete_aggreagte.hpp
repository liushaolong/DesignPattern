#include "vector"
#include "aggregate.hpp" 
#include "concrete_iterator.hpp"
#ifndef CONCRETE_AGGREAGTE
#define CONCRETE_AGGREAGTE

template <typename T>
class concrete_aggreagte : public aggregate<T>
{
private:
    /* data */
    std::vector<T> data;
public:
    virtual ~concrete_aggreagte() {}
    virtual void push_data(T t) override;
    virtual iterator<T> *create_iterator() override;
    virtual T &operator[](int index) override;
    virtual int get_size() override;
};
template <typename T>
inline void concrete_aggreagte<T>::push_data(T t)
{
    data.push_back(t);
}

template <typename T>
iterator<T> *concrete_aggreagte<T>::create_iterator()
{
    return new concrete_iterator<T>(this);
}

template <typename T>
T &concrete_aggreagte<T>::operator[](int index)
{
    return data[index];
}

template <typename T>
int concrete_aggreagte<T>::get_size()
{
    return data.size();
}

#endif


