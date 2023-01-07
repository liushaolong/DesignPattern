#include "subject.hpp"
#include "proxy_subject.hpp"

int main(int, char **)
{
    subject *s = new proxy_subject();
    s->say();
}
