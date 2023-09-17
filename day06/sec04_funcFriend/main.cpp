#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class Point;

class ManagePoint
{
public:
    double getDistance(const Point * pFir, const Point * pSec);
private:
};

class Point
{
    friend double ManagePoint::getDistance(const Point * pFir, const Point * pSec);
public:
    Point(double x = 0, double y = 0)
        :m_x(x), m_y(y)
    {}

    void dumpPoint()
    {
        cout << "(" << m_x << ", " << m_y << ")" << endl;
    }
private:
    double m_x;
    double m_y;
};

double ManagePoint::getDistance(const Point * pFir, const Point * pSec)
{
    double dx = pFir->m_x - pSec->m_x;
    double dy = pFir->m_y - pSec->m_y;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    Point p1(1, 2);
    Point p2(4, 6);
    ManagePoint mp;
    cout << mp.getDistance(&p1, &p2) << endl;

    return 0;
}


//#################### 
#if 0
class Point;

class ManagePoint
{
public:
    double getDistance(const Point & p1, const Point &p2);
private:
};

class Point
{
    friend double ManagePoint::getDistance(const Point & p1, const Point &p2);
public:
    Point(double x = 0, double y = 0)
        :m_x(x), m_y(y)
    {}

    void dumpPoint()
    {
        cout << "(" << m_x << ", " << m_y << ")" << endl;
    }
private:
    double m_x;
    double m_y;
};

double ManagePoint::getDistance(const Point & p1, const Point &p2)
{
    double dx = p1.m_x - p2.m_x;
    double dy = p1.m_y - p2.m_y;
    return sqrt(dx * dx + dy * dy);
}

int main()
{
    Point p1(1.0, 2.0);
    p1.dumpPoint();
    Point p2(4.0, 6.0);
    p2.dumpPoint();

    ManagePoint mp;
    cout << mp.getDistance(p1, p2) << endl;

    return 0;
}
#endif