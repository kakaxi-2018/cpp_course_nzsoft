#include <iostream>

using std::cout;
using std::endl;

template<typename T1, typename T2>
void myswap(T1 & lhs, T2 & rhs)
{
    T2 temp = lhs;
    lhs = rhs;
    rhs = temp;
}

int main()
{
    int a = 1;
    double b = 3.4;
    myswap(a, b);

    return 0;
}