#include <iostream>

using std::cout;
using std::endl;

void mySwap(int *pa, int *pb)
{
    int temp = *pa;
    *pa = *pb;
    *pb = temp;
}

void mySwap(int &ra, int &rb)
{
    int temp = ra;
    ra = rb;
    rb = temp;
}

int main()
{
    int a = 3;
    int b = 5;
    //mySwap(&a, &b);
    mySwap(a, b);
    cout << "a = " << a << " b = " << b << endl;

    return 0;
}