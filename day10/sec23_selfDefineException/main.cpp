#include <iostream>

using std::cout;
using std::endl;

class MyException
{
public:
    MyException()
    {
        cout << "MyException()" << endl;
    }

    MyException(const MyException &)
    {
        cout << "MyException(const MyException &)" << endl;
    }

    ~MyException()
    {
        cout << "~MyException()" << endl;
    }
protected:
};

int  divide(int x, int y)
{
    if (0 == y)
    {
        throw(MyException());
    }

    return x / y;
}

void myDivide(int x, int y)
{
    divide(x, y);
}

int main()
{
    try
    {
        myDivide(4, 0);
    }
    catch(const MyException & another)
    {
        cout << "catch self define exception" << endl;
    }
    

    return 0;
}