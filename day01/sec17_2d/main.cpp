#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 42;
    int *p = &a;
    int **pp = &p;
    int ***ppp = &pp;
    int ****pppp = &ppp;

    int x = 15;
    int &rx = x;
    int &ry = x;
    int &rz = ry;

    return 0;
}