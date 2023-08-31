#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 42;
    int &ra = a;

    int *p = &a;
    int * &rp = p;  // reference of pointer

    //int & *pp = &ra;  // pointer of reference, compile error

    return 0;
}