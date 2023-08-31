#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // both directions can be implicitly converted
    double d;
    int i;
    d = static_cast<double>(i);
    i = static_cast<int>(d);

    d = static_cast<double>(10) / 3;
    cout << d << endl;

    // one way can be implicitly converted
    void *p;
    int *q;
    q = static_cast<int *>(malloc(sizeof(int) * 10));

    p = q;
    q = static_cast<int *>(p);



    return 0;
}