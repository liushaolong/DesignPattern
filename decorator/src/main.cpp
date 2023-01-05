
#include "walkup.hpp"
#include "boat.hpp"
int main(int, char**) {
    boat *b =new boat();
    walkup *w= new walkup(b," at sea walk up");
    w->run();
}
