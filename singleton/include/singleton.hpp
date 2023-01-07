#include <mutex> 
#include <atomic>

#ifndef SINGLETON
#define SINGLETON

class singleton
{
private:
    /* data */
    singleton(/* args */) {}
    singleton(const singleton &s) {}
    
public:
    static singleton *get_instance();
    static singleton *get_instance2();
    static singleton *get_instance3();
    static singleton *get_instance4();
    static singleton *instance;
    static std::atomic<singleton * > atomic_instance;
    static std::mutex mutex;
    virtual ~singleton() {}
};
#endif