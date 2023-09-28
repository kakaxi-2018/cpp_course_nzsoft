#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    void foo()
    {
        cout << "A::foo()" << endl;
    }

    A & operator=(const A & another)
    {
        cout << "A & operator=(const A & another)" << endl;
        return *this;
    }
protected:
};

class B: public A
{
public:
    void foo()
    {
        cout << "B::foo()" << endl;
        A::foo();
    }

    B & operator=(const B & another)
    {
        cout << "B & operator=(const B & another)" << endl;
        A::operator=(another);
        return *this;
    }
protected:
};

int main()
{
    B bb;
    bb.foo();

    return 0;
}