#include <iostream>

using std::cout;
using std::endl;

int a = 10;

void foo()
{
    cout << "foo()" << endl;
}

int main()
{
    int a = 20;
    cout << "a = " << a << endl;
    cout << "::a = " << ::a << endl;

    ::foo();

    return 0;
}