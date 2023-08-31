#include <iostream>

using std::cout;
using std::endl;

// conflict of overload and default argument

/*
void foo(int a)
{

}
*/

void foo(int a, int b = 5)
{

}

int main()
{
    foo(5, 10);
    foo(42);

    return 0;
}