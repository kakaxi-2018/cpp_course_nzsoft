#include <iostream>
#include "b.h"

using std::cout;
using std::endl;

class A
{
public:
    static const int m_num = 42;  // method one
    static const int m_age;
};

const int A::m_age = 25;  // method two

int main()
{
    cout << A::m_num << endl;
    cout << A::m_age << endl;

    cout << "==========" << endl;
    cout << B::m_count << endl;

    return 0;
}