#include <iostream>
#include <memory>

using std::cout;
using std::endl;

class A
{
public:
    A()
    {
        cout << "A()" << endl;
    }

    ~A()
    {
        cout << "~A()" << endl;
    }

    void dis()
    {
        cout << "dis()" << endl;
    }
};

void foo()
{
    // A a;
    // a.dis();

    //A * pa = new A;
    //pa->dis();
    // (*pa).dis();
    // delete pa;

    std::auto_ptr<A> ppa(new A);
    ppa->dis();
    (*ppa).dis();
}

int main()
{
    foo();

    return 0;
}