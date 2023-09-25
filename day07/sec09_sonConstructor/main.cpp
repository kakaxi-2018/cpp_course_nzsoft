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

    int m_a;
private:
};

class C
{
public:
    C(int k = 0)
        :m_c(k)
    {
        cout << "C()" << endl;
    }

    int m_c;
private:
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

    void dis()
    {
        cout << "a: " << m_a << endl;
        cout << "b: " << m_b << endl;
        cout << "c: " << m_cc.m_c << endl;
    }

    int m_b;
    C m_cc;
private:
};

int main()
{
    B bb(10, 20, 56);
    bb.dis();

    return 0;
}