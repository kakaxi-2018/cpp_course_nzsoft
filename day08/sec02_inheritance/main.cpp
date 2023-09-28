#include <iostream>

using std::cout;
using std::endl;

class Base
{
public:
    int m_pub;
protected:
    int m_pro;
private:
    int m_pri;
};

class Derive: public Base
{
public:
    int m_c;
    void foo()
    {
        cout << "Derive::foo()" << endl;
        cout << m_pub << endl;
        cout << m_pro << endl;
    }
protected:
    int m_b;
private:
    int m_a;
};

class M: public Derive
{
public:
    void func()
    {
        cout << "M::func()" << endl;
        cout << m_pub << endl;
        cout << m_pro << endl;
    }
private:
};

int main()
{
    Derive d;
    //cout << d.m_pub << endl;

    return 0;
}