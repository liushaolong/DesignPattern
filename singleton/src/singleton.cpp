#include "singleton.hpp"

singleton *singleton::get_instance()
{
    if (instance == nullptr)
    {
        instance = new singleton();
    }
    return instance;
}
singleton *singleton::get_instance2()
{
    std::lock_guard<std::mutex> locak(singleton::mutex);
    if (instance == nullptr)
    {
        instance = new singleton();
    }
    return instance;
}

singleton *singleton::get_instance3()
{
    if (instance == nullptr)
    {

        std::lock_guard<std::mutex> locak(singleton::mutex);
        if (instance == nullptr)
        {
            instance = new singleton();
        }
    }
    return instance;
}
singleton *singleton::instance = nullptr;

singleton *singleton::get_instance4()
{
    singleton *tmp = atomic_instance.load(std::memory_order_relaxed);
    std::atomic_thread_fence(std::memory_order_acquire);
    if (tmp == nullptr)
    {
        std::lock_guard<std::mutex> lock(mutex);
        tmp = atomic_instance.load(std::memory_order_relaxed);
        if (tmp == nullptr)
        {
            tmp = new singleton();
            std::atomic_thread_fence(std::memory_order_release);
            atomic_instance.store(tmp, std::memory_order_relaxed);
        }
    }
    return tmp;
}
std::atomic<singleton *> singleton::atomic_instance;
std::mutex singleton::mutex;
