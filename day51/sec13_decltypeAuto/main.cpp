#include <iostream>

using std::cout;
using std::endl;

template<class T2, class T3>
auto sum(T2 a, T3 b)->decltype(a+b)
{
    return a + b;
}

int main()
{
    int i = 200;
    double d = 200.12; 

    //decltype(i+d) m = sum(i, d);
    auto m = sum(i, d);
    cout << m << endl;

    return 0;
}