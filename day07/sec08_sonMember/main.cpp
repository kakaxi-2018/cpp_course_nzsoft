#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

class A
{
public:
    A()
    {
        cout << "A()" << endl;
        cout << "A this : " << this << endl;
        cout << "&m_a: " << &m_a << endl;
        cout << "type A this: " << typeid(this).name() << endl;
    }

    int m_a;
};

class B: public A
{
public:
    B()
    {
        cout << "B()" << endl;
        cout << "B this: " << this << endl;
        cout << "&m_b: " << &m_b << endl;
        cout << "type B this: " << typeid(this).name() << endl;
    }

    int m_b;
};

class C: public B
{
public:
    C()
    {
        cout << "C()" << endl;
        cout << "C this: " << this << endl;
        cout << "&m_c: " << &m_c << endl;
        cout << "type C this: " << typeid(this).name() << endl;
    }

    int m_c;
};

int main()
{
    C cc;
    cout << "&cc: " << &cc << endl;

    return 0;
}