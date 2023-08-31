#include <iostream>

using std::cout;
using std::endl;

int func()
{
    int a = 15;
    return a;
}

int main1()
{
    const int &a = 42;
    cout << "a = " << a << endl;

    int m = 3;
    int n = 5;
    const int &x = m + n;
    cout << "x = " << x << endl;

    const int &val = func();
    cout << "val = " << val << endl;

    return 0;
}

int main()
{
    double d = 3.45;
    const int &rd = d;  // int &t = d; const int rd = t;
    cout << "d  = " << d << endl;
    cout << "rd = " << rd << endl;

    d = 4.14;
    cout << "d  = " << d << endl;
    cout << "rd = " << rd << endl;

    return 0;
}