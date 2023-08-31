#include <iostream>
#include "a.h"
#include "b.h"

using std::cout;
using std::endl;

int main()
{
    cout << NS::x << endl;
    NS::foo();

    NS::A aa;
    
    CC::B b;

    return 0;
}