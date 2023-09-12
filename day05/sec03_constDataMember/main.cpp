#include <iostream>

using std::cout;
using std::endl;

#if 0
class A
{
public:
    A(int t, int yy, int &zz)
        :m_age(t), y(yy), z(zz)
    {
    }

    void dis()
    {
        cout << z << endl;
    }

    void set(int d)
    {
        //m_age = 15;
    }
private:
    const int m_age;
    int y;
    int &z;
};

int main()
{
    int z = 25;
    A a(42, 15, z);
    a.dis();

    z = 28;
    a.dis();

    return 0;
}
#endif

class A
{
public:
    A(int a)
        :m_a(a)
    {
    }

    void dis()
    {
        cout << m_a << endl;
    }
private:
    const int m_a;
};

int main()
{
    A a(20);
    a.dis();

    A a2(42);
    a2.dis();


    return 0;
}