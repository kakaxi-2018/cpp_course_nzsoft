#include <iostream>
#include <cmath>

using std::cout;
using std::endl;
using std::cin;

double triagnleArea(double x, double y, double z)
{
    double area;
    double s = (x+y+z) / 2;

    if (x+y > z && x+z > y && y+z > x)
    {
        area = sqrt(s * (s-x) * (s-y) * (s-z));
    }
    else
    {
        throw -1.0;
    }

    return area;
}

int main()
{
    int a, b, c;
    double area;

    try
    {
        while (1)
        {
            cin >> a >> b >> c;

            if (a>0 && b>0 && c>0)
            {
                area = triagnleArea(a, b, c);
                cout << "area: " << area << endl;
            }
        }
    }
    catch (double e)
    {
        cout << "input triangle is illegal" << endl;
    }
    catch (...)
    {
        cout << "unknown error" << endl;
    }

    cout << "finished.\n";

    return 0;
}