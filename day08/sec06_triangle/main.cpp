#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
protected:
    int m_data;
};

class X: virtual public A
{
public:
    X(int d = 0)
    {
        cout << "X()" << endl;
        m_data = d;
    }

    void setData(int d)
    {
        m_data = d;
    }
protected:
};

class Y: virtual public A
{
public:
    Y(int d = 0)
    {
        cout << "Y()" << endl;
        m_data = d;
    }

    int getData()
    {
        return m_data;
    }
protected:
};

class Z: public X, public Y
{
public:
    Z(int i, int j)
        :X(i), Y(j)
    {
    }

    void dis()
    {
        cout << "data: " << m_data << endl;
    }
protected:
};

int main()
{
    Z zz(20, 21);
    zz.dis();
    cout << "==========" << endl;
    zz.setData(35);
    zz.dis();

    return 0;
}