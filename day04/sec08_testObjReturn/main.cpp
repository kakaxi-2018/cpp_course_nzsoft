#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    A()
    {
        cout << this << " constructor" << endl;
    }

    ~A()
    {
        cout << this << " ~destructor" << endl;
    }

    A(const A &another)
    {
        cout << this << " copy from " << &another << endl;
    }

    A & operator=(const A &another)
    {
        cout << this << " operator = " << &another << endl;
        return *this;
    }
private:
};

#if 0
void func(A &a)
{

}

int main()
{
    A a;
    func(a);

    return 0;
}
#endif

#if 0
A foo()
{
    //return A();

    A a;
    return a;
}

int main()
{
    A  a;
    a = foo();

    return 0;
}
#endif

A & foo()
{
    // return A();  
    // error, cannot bind non-cast lvalue reference of type 'A&' to an rvalue 
    // of type 'A'

    A a;
    return a;
}

int main()
{
    //A t= foo();  // error method, donn't return local variable 'a' 

    return 0;
}