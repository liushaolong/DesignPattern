#include "windows.hpp"
#include "amd_platform.hpp"

int main(int, char **)
{
    platform *p = new amd_platform();
    systematic *s = new windows(p);
}
