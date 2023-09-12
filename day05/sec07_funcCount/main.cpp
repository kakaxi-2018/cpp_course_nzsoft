#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    void foo()
    {
        cout << "void foo()" << endl;
        ++m_funcCount;
    }

    static int getInvokeFuncCount()
    {
        return m_funcCount;
    }
private:
    static int m_funcCount;
};

int A::m_funcCount = 0;

int main()
{
    {
        A a;
        A b;
        A c;

        a.foo();
        b.foo();
        c.foo();
    }

    cout << A::getInvokeFuncCount() << endl;

    return 0;
}