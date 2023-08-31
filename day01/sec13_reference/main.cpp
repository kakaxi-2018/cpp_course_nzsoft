#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 42;
    int &ra = a;

    cout << "a  = " << a << endl;
    cout << "ra = " << ra << endl;
    cout << "&a  = " << &a << endl;
    cout << "&ra = " << &ra << endl;
    cout << "sizeof(a)  = " << sizeof(a) << endl;
    cout << "sizeof(ra) = " << sizeof(ra) << endl;

    cout << "==========" << endl;
    int b = 10;
    //int &ra = b;  // error, redeclaration

    int &xra = a;
    int &yra = a;
    int &zra = yra;

    double d = 3.45;
    double &rd = d;  // &, left of '='
    double *pd = &d;  // &, right of '='
    int m = 128 & 127;  // &, binary operator


    return 0;
}