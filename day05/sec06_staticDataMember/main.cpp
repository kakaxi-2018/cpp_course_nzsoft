#include <iostream>
#include "b.h"

using std::cout;
using std::endl;

class A
{
public:
    int m_x;
    int m_y;
    static int m_share;
private:
};

int A::m_share = 42;

int main1()
{
    A a;
    cout << a.m_share << endl;
    cout << A::m_share << endl;

    cout << "sizeof(A): " << sizeof(A) << endl;
    cout << "sizeof(a): " << sizeof(a) << endl;

    return 0;
}

int main()
{
    cout << B::m_shareData << endl;
    cout << "==========" << endl;
    B b;
    cout << b.m_shareData << endl;

    return 0;
}