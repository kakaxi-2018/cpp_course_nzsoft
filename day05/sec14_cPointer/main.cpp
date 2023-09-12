#include <iostream>

using std::cout;
using std::endl;

void func(int i)
{
    cout << "void func() " << i << endl;
}

int main()
{
    int a = 42;
    int *pa = &a;

    void (*pFunc)(int) = func;
    //pFunc = func;
    pFunc(10);

    return 0;
}