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
protected:
};

int divide(int x, int y)
{
    //A a;
    //A * pa = new A;  // memoryleak
    std::shared_ptr<A> pa(new A);

    if (0 == y)
    {
        throw('a');
    }

    return x / y;
}

void myDivide(int x, int y)
{
    //A b;
    //A * pb = new A;  // memoryleak
    std::shared_ptr<A> pb(new A);
    divide(x, y);
}

int main()
{
    try
    {
        myDivide(4, 0);
    }
    catch(int x)
    {
        cout << "x: " << x << endl;
    }
    catch(double y)
    {
        cout << "y: " << y << endl;
    }
    catch(...)
    {
        cout << "not x, not y" << endl;
    }

    return 0;
}