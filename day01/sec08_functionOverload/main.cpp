#include <iostream>

using std::cout;
using std::endl;

void func(int a)
{
    cout << "func(int a)" << endl;
}

void func(double a)
{
    cout << "func(double a)" << endl;
}

void func(char a)
{
    cout << "func(char a)" << endl;
}

int main1()
{
    int a = 42;
    double d = 3.45;
    char c = 'm';
    func(a);
    func(d);
    func(c);

    return 0;
}

int abs(int n)
{
    return n > 0 ? n : -n;
}

int abs(double n)
{
    return n > 0 ? n : -n;
}

int main2()
{
    int a = abs(-5);
    cout << a << endl;
    double d = abs(-3.45);
    cout << d << endl;

    return 0;
}

void foo(int a)
{

}

void foo(double a)
{

}

void foo(int a, double b)
{

}

void foo(double a, int )
{

}

void foo(int a, int b)
{

}

void foo(double a, double d)
{

}

void mf(double d)
{
    cout << "mf(double d)" << endl;
}

void mf(long d)
{
    cout << "mf(long d)" << endl;
}

void mf(int d)
{
    cout << "mf(int d)" << endl;
}

int main()
{
    int a = 1;
    double d = 3.45;
    mf(a);
    mf(d);

    return 0;
}