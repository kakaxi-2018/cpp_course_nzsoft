#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    virtual void foo()
    {
        cout << "A::foo()" << endl;
    }
};

class B: public A
{
public:
    // virtual int foo() override
    // {
    //     cout << "B::foo()" << endl;
    // }

    // virtual void foo(int a) override
    // {
    //     cout << "B::foo()" << endl;
    // }

    // virtual void foox() override
    // {
    //     cout << "B::foo()" << endl;
    // }

    // virtual void foo() const override
    // {
    //     cout << "B::foo()" << endl;
    // }

    virtual void foo()
    {
        cout << "B::foo()" << endl;
    }

};

int main()
{
    B bb;
    A * pa = &bb;
    pa->foo();

    return 0;
}