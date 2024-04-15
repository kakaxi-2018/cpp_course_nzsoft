#include <iostream>

using std::cout;
using std::endl;

class A //final
{
public:
    virtual void func() //final
    {}
private:
};

class B: public A
{
public:
    virtual void func() override
    {}
private:
};

int main()
{

    return 0;
}

void foo(void *)
{
    cout << "foo(void *)" << endl;
}

void foo(int)
{
    cout << "foo(int)" << endl;
}

void foo(bool)
{
    cout << "foo(bool)" << endl;
}

int main2()
{
    foo(0);  // call foo(int)
    //foo(NULL);  // error, ambigious
    foo(nullptr);  // call foo(void *), overload

    return 0;
}