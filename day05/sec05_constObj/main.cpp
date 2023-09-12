#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    A(int x, int y)
        :m_x(x), m_y(y)
    {}

    void foo() const
    {
        cout << "foo() const" << endl;
        cout << m_x << " " << m_y << endl;
    }

    void foo()
    {
        cout << "foo() non-const" << endl;
        cout << m_x << " " << m_y << endl;
    }
private:
    int m_x;
    int m_y;
};

void func(const A &a)
{
    a.foo();
}

int main()
{
    A a(3, 5);
    //a.foo();

    func(a);

    return 0;
}