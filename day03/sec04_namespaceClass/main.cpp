#include <iostream>
#include "aa.h"

using std::cout;
using std::endl;

namespace xx
{
    int a = 30;
    void foo();
}

void xx::foo()
{
    cout << a << endl;
}

int main()
{
    xx::foo();

    cout << "aa::x = " << aa::x << endl;
    aa::foo();

    return 0;
}