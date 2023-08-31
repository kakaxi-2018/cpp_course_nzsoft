#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a;
    int b = 42;
    int c = 100;

    (a = b) = c;

    cout << "a = " << a << endl;

    return 0;
}