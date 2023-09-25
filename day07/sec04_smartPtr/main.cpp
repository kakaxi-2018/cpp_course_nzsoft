#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    A()
    {
        cout << "A()" << endl;
    }

    ~A()
    {
        cout << "~A()" << endl;
    }

    void dis()
    {
        cout << "dis()" << endl;
    }
};

class SmartPtr
{
public:
    SmartPtr(A * pa)
    {
        m_a = pa;
    }

    A & operator*()
    {
        return *m_a;
    }

    A * operator->()
    {
        return m_a;
    }

    ~SmartPtr()
    {
        delete m_a;
    }
private:
    A * m_a;
};

void foo()
{
    SmartPtr sp(new A);
    (*sp).dis();  // operator. => operator*
    sp->dis();  // operator->
}

int main()
{
    foo();

    return 0;
}