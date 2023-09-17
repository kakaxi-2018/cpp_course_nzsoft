#include <iostream>

// 3D -> 2D

using std::cout;
using std::endl;

class Point2D
{
public:
    Point2D(int x = 0, int y = 0)
        : m_x(x), m_y(y)
    {
    }

    void dumpFormat()
    {
        cout << "(" << m_x << ", " << m_y << ")" << endl;
    }

private:
    int m_x;
    int m_y;
};

class Point3D
{
public:
    Point3D(int x = 0, int y = 0, int z = 0)
        : m_x(x), m_y(y), m_z(z)
    {
    }

    explicit operator Point2D()
    {
        return Point2D(this->m_x, this->m_y);
    }

    void dis()
    {
        cout << "(" << m_x << ", " << m_y << ", " << m_z << ")" << endl;
    }

private:
    int m_x;
    int m_y;
    int m_z;
};

Point2D convert(Point3D & d3)
{
    return Point2D(d3);
}

int main()
{
    Point3D d3(10, 20, 30);
    Point2D d2(d3);
    //Point2D d2 = d3;  // compile error when add 'explicit'
    //Point2D d2 = static_cast<Point2D>(d3);
    //Point2D d2 = convert(d3);
    d2.dumpFormat();

    return 0;
}