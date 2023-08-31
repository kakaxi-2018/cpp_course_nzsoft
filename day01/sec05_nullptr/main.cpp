#include <iostream>

using std::cout;
using std::endl;

void func(int a)
{
    cout << "a = " << a << endl;
}

void func(int *pa)
{
    cout << "pa = " << pa << endl;
}

int main()
{
    func(10);
    func((int *)1);
    func(nullptr);

    return 0;
}