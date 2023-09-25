#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    A(int i = 0)
        :m_a(i)
    {
        cout << "A()" << endl;
    }

    A(const A & another)
    {
        cout << "A(const A & another)" << endl;

        this->m_a = another.m_a;
    }

    int m_a;
};

class C
{
public:
    C(int k = 0)
        :m_c(k)
    {
        cout << "C()" << endl;
    }

    C(const C & another)
    {
        cout << "C(const C & another)" << endl;

        this->m_c = another.m_c;
    }

    int m_c;
};

class B: public A
{
public:
    B(int i = 0, int j = 0, int k = 0)
        :A(i), m_cMem(k)
    {
        cout << "B()" << endl;
        m_b = j;
    }

    B(const B & another)
        :A(another), m_cMem(another.m_cMem)
    {
        cout << "B(const B & another)" << endl;

        m_b = another.m_b;
    }

    void dis()
    {
        cout << "a: " << m_a << endl;
        cout << "b: " << m_b << endl;
        cout << "c: " << m_cMem.m_c << endl;
    }

    int m_b;
    C m_cMem;
};

int main()
{
    B bb(1, 2, 3);
    bb.dis();
    cout << "==========" << endl;

    B bb2(bb);
    bb2.dis();

    return 0;
}