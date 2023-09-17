#include <iostream>
#include <cmath>

using std::cout;
using std::endl;

class Point
{
    friend class ManagePoint;
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

class ManagePoint
{
public:
    double getDistance(const Point & pFir, const Point & pSec);
    double getArea(const Point & pFir, const Point & pSec, const Point &pThr);
private:
};

double ManagePoint::getDistance(const Point & pFir, const Point & pSec)
{
    double dx = pFir.m_x - pSec.m_x;
    double dy = pFir.m_y - pSec.m_y;
    return sqrt(dx * dx + dy * dy);
}

double ManagePoint::getArea(const Point & pFir, const Point & pSec, const Point &pThr)
{
    double d1 = getDistance(pFir, pSec);
    double d2 = getDistance(pFir, pThr);
    double d3 = getDistance(pSec, pThr);
    double HalfCircumference = (d1 + d2+ d3) / 2;
    return sqrt((HalfCircumference - d1) * (HalfCircumference - d2) * 
        (HalfCircumference - d3) * HalfCircumference);
}

int main()
{
    Point p1(1, 1);
    p1.dumpPoint();
    Point p2(4, 5);
    p2.dumpPoint();
    Point p3(-100, 99);
    p3.dumpPoint();

    ManagePoint mp;
    cout << mp.getDistance(p2, p3) << endl;
    cout << mp.getArea(p1, p2, p3) << endl;

    return 0;
}