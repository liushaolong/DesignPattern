#include "action.hpp"
#include "subject1.hpp"
#include "subject2.hpp"
int main(int, char**) {
    action a;
    subject1 sub1;
    subject2 sub2;
    a.attach("subject1",&sub1);
    a.do_notify();
    std::cout << "---------------\n";
    a.attach("subject2",&sub2);
    a.do_notify();
}
