#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    A(int i = 0)
        :m_a(i)
    {
        cout <<"A()" << endl;
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
    C(int k = 0)
        :m_c(k)
    {
        cout << "C()" << endl;
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
    B(int i = 0, int j = 0, int k = 0)
        :A(i), m_cMem(k)
    {
        cout << "B()" << endl;
        m_b = j;
    }

    B & operator=(const B & another)
    {
        cout << "B & operator=(const B & another)" << endl;

        if (this == &another)
        {
            return *this;
        }

        A::operator=(another);
        this->m_cMem = another.m_cMem;
        this->m_b = another.m_b;
        return *this;
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
    B bb2(40, 50, 60);
    bb2 = bb;
    bb2.dis();

    return 0;
}