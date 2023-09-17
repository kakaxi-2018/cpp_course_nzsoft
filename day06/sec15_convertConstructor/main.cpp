#include <iostream>

// 2D -> 3D, convert constructor

using std::cout;
using std::endl;

class Point2D
{
    friend class Point3D;
public:
    explicit Point2D(int x = 0, int y = 0)
        :m_x(x), m_y(y)
    {}
private:
    int m_x;
    int m_y;
};

class Point3D
{
public:
    explicit Point3D(int x = 0, int y = 0, int z = 0)
        :m_x(x), m_y(y), m_z(z)
    {}

    explicit Point3D(const Point2D & d2)
    {
        this->m_x  = d2.m_x;
        this->m_y = d2.m_y;
        this->m_z = rand() % 100;
    }

    void dis()
    {
        cout << "("<< m_x << ", " << m_y << ", " << m_z << ")" << endl;
    }
private:
    int m_x;
    int m_y;
    int m_z;
};

Point3D convert(const Point2D & d2)
{
    //return Point3D(d2.m_x, d2.m_y, rand() % 100);
    return Point3D(d2);
}

int main1()
{
    srand(time(nullptr));
    Point2D p2(10, 20);
    Point3D p3(p2);
    //Point3D p3 = static_cast<Point3D>(p2);
    //Point3D p3 = p2;  // compile error when add 'explicit'
    
    //Point3D p3 = convert(p2);

    p3.dis();

    return 0;
}

int main()
{
    Point3D d3;
    d3.dis();

    Point3D * pd = new Point3D;
    pd->dis();
    delete pd;

    return 0;
}