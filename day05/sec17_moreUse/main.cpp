#include <iostream>

using std::cout;
using std::endl;

struct Point
{
    int plus(int x, int y)
    {
        return x + y;
    }

    int minus(int x, int y)
    {
        return x - y;
    }

    int mult(int x, int y)
    {
        return x * y;
    }

    int div(int x, int y)
    {
        return x / y;
    }

    int x;
    int y;
};

int oper(Point &p, int (Point::*pf)(int lhs, int rhs), int lhs, int rhs)
{
    return (p.*pf)(lhs, rhs);
}

typedef int (Point::*pFunc)(int, int);

int main()
{
    Point p;
    pFunc pf = &Point::plus;
    cout << oper(p, pf, 3, 5) << endl;

    pf = &Point::minus;
    cout << oper(p, pf, 3, 5) << endl;

    pf = &Point::mult;
    cout << oper(p, pf, 3, 5) << endl;

    pf = &Point::div;
    cout << oper(p, pf, 10, 3) << endl;

    return 0;
}