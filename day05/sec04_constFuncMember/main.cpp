#include <iostream>

using std::cout;
using std::endl;

#if 0
int add(int &x, int &y)
{
    return x + y;
}


int add(const int &x, const int &y)
{
    return x + y;
}

int main()
{
    int a = 3;
    int b = 5;
    cout << add(a, b) << endl;

    cout << add(3, 5) << endl;

    return 0;
}
#endif

/*
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

        func();
    }

    // void foo()
    // {
    //     cout << "foo()" << endl;
    //     cout << m_x << " " << m_y << endl;
    // }

    void func() const
    {}
private:
    int m_x;
    int m_y;
};

int main()
{
    A a(3, 5);
    a.foo();

    return 0;
}
*/

// constitutive overload
class A
{
public:
    A(int x, int y)
        :m_x(x), m_y(y)
    {}

    void foo();
    void foo() const;
private:
    int m_x;
    int m_y;
};

void A::foo()
{
    cout << "foo() non-const" << endl;
    cout << m_x << " " << m_y << endl;
}


void A::foo() const
{
    cout << "foo() const" << endl;
    cout << m_x << " " << m_y << endl;
}

int main()
{
    A a(3, 5);
    a.foo();

    const A a2(5, 8);
    a2.foo();

    return 0;
}