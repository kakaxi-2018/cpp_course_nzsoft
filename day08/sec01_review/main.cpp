#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    A(int i)
        :m_a(i)
    {
        cout << "A()" << endl;
    }

    ~A()
    {
        cout << "~A()" << endl;
    }

    A & operator=(const A & another)
    {
        cout << "A & operator=(const A & another)" << endl;

        if (this == &another)
        {
            return *this;
        }

        this->m_a = another.m_a;
        return *this;
    }

    int m_a;
};

class C
{
public:
    C(int i)
        :m_c(i)
    {
        cout << "C()" << endl;
    }

    ~C()
    {
        cout << "~C()" << endl;
    }

    C & operator=(const C & another)
    {
        cout << "C & operator=(const C & another)" << endl;

        if (this == &another)
        {
            return *this;
        }

        this->m_c = another.m_c;
        return *this;
    }

    int m_c;
};

class B: public A
{
public:
    B(int i, int j, int k)
        :A(i), m_cc(k)
    {
        m_b = j;
        cout << "B()" << endl;
    }

    ~B()
    {
        cout << "~B()" << endl;
    }

    B & operator=(const B & another)
    {
        cout << "B & operator=(const B & another)" << endl;

        if (this == &another)
        {
            return *this;
        }

        A::operator=(another);
        this->m_cc = another.m_cc;
        this->m_b = another.m_b;
        return *this;
    }

    void dis()
    {
        cout << "a: " << m_a << endl;
        cout << "b: " << m_b << endl;
        cout << "c: " << m_cc.m_c << endl;
    }

    int m_b;
    C m_cc;
};

int main()
{
    B bb(1, 2, 3);
    bb.dis();
    cout << "==========" << endl;

    B bb2(4, 5, 6);
    bb2 = bb;
    bb2.dis();

    return 0;
}