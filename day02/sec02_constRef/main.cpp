#include <iostream>

using std::cout;
using std::endl;

int main()
{
    const int a = 42;
    const int &ra = a;

    int b = 100;
    int &rb = b;
    rb = 200;
    cout << "b = " << b << endl;

    const int &rc = b;
    //rc = 300;  // compile error

    return 0;
}