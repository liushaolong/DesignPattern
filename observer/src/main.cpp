#include "action.hpp"
#include "subject1.hpp"
#include "subject2.hpp"
int main(int, char**) {
    action a;
    subject1 sub1;
    subject2 sub2;
    a.add_observer("subject1",&sub1);
    a.do_catch();
    std::cout << "---------------\n";
    a.add_observer("subject2",&sub2);
    a.do_catch();
}
