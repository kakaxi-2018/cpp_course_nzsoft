#include <iostream>

using std::cout;
using std::endl;

void mySwap(int *pa, int *pb)
{
    *pa ^= *pb;
    *pb ^= *pa;
    *pa ^= *pb;
}

void mySwap(int &a, int &b)
{
    a ^= b;
    b ^= a;
    a ^= b;
}

int main()
{
    int a = 3;
    int b = 5;
    //mySwap(&a, &b);
    mySwap(a, b);

    cout << "a = " << a << ", " << "b = " << b << endl;

    return 0;
}