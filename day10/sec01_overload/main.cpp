#include <iostream>

using std::cout;
using std::endl;

void myswap(int & ra, int & rb)
{
    int temp = ra;
    ra = rb;
    rb = temp;
}

void myswap(double & ra, double & rb)
{
    double temp = ra;
    ra = rb;
    rb = temp;
}

// void myswap(long & ra, long & rb)
// {
//     long temp = ra;
//     ra = rb;
//     rb = temp;
// }

int main()
{
    long a = 2;
    long b = 3;
    //myswap(a, b);  // ambigious
    cout << a << " " << b << endl;

    return 0;
}