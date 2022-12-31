#include "application.hpp"

int main(int, char**) {
    library *app=new application();
    app->run();
    std::cout << "Hello, world!\n";
}
