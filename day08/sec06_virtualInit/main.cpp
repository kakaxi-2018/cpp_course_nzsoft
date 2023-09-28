#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
protected:
    int m_data;
};

class B: virtual public A
{
public:
    B(int d = 0)
    {
        cout << "B()" << endl;
        m_data = d;
    }

    void setData(int d)
    {
        m_data = d;
    }
protected:
};

class C: virtual public A
{
public:
    C(int d = 0)
    {
        cout << "C()" << endl;
        m_data = d;
    }

    int getData()
    {
        return m_data;
    }
protected:
};

class D: public B, public C
{
public:
    D(int k)
    {
        cout << "D()" << endl;
        m_data = k;
    }

    void dis()
    {
        cout << "data: " << m_data << endl;
    }
protected:
};

int main()
{
    D dd(20);
    dd.dis();
    cout << "==========" << endl;
    dd.setData(50);
    dd.dis();

    return 0;
}