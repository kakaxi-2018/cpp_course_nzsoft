#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    A()
    {
        cout << "A()" << endl;
    }

    A(const A &another)
    {
        cout << "A(const A &another)" << endl;
    }

    ~A()
    {
        cout << "~A()" << endl;
    }
private:
};

void foo(A a)
{

}

int main()
{
    A a;
    //A b = a;  // copy constructor

    foo(a);  // copy constructor


    return 0;
}