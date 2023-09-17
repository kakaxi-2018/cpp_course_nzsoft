#include <iostream>

using std::cout;
using std::endl;

int add(const int &x, const int &y)
{
    return x + y;
}

int add(int &x, int &y)
{
    return x + y;
}

class A
{
public:
    void dis()
    {
        cout << "dis() non-const" << endl;
    }

    void dis() const
    {
        cout << "dis() const" << endl;
    }
private:
};

void foo(const A &a)
{
    a.dis();
}

void foo(A &a)
{
    a.dis();
}

int main()
{
    int a = 3;
    int b = 5;
    add(a, b);
    add(3, 5);

    cout << "==========" << endl;
    A aa;
    foo(aa);

    const A aa2;
    foo(aa2);

    return 0;
}