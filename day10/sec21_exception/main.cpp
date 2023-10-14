#include <iostream>

using std::cout;
using std::endl;

void func() throw(char)
{
    throw 'a';
}

void foo()
{
    try
    {
        func();
    }
    catch(int i)
    {
        cout << "foo() catch " << i << endl;
    }
    catch(...)
    {
        cout << "log throw up " << endl;
        throw;
    }
}

int main()
{
    try
    {
        foo();
    }
    catch (int i)
    {
        cout << "main() catch int " << i << endl;
    }
    catch (double d)
    {
        cout << "main() catch double " << d << endl;
    }
    catch (...)
    {
        cout << "Game over" << endl;
    }

    return 0;
}