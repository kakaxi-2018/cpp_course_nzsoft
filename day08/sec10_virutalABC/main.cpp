#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    virtual void foo() = 0;
};

class B: public A
{
public:
};

class C: public B
{
public:
    virtual void foo() override
    {
        cout << "C::foo()" << endl;
    }
};

int main()
{
    C cc;
    A * pa = &cc;
    pa->foo();

    cout << "==========" << endl;
    B * pb = &cc;
    pb->foo();

    return 0;
}