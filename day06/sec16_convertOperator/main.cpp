#include <iostream>

// 2D -> 3D, convert, operator

using std::cout;
using std::endl;



class Point3D
{
public:
    Point3D(int x = 0, int y = 0, int z = 0)
        :m_x(x), m_y(y), m_z(z)
    {}

    void dis()
    {
        cout << "("<< m_x << ", " << m_y << ", " << m_z << ")" << endl;
    }
private:
    int m_x;
    int m_y;
    int m_z;
};

class Point2D
{
public:
    Point2D(int x = 0, int y = 0)
        :m_x(x), m_y(y)
    {}

    explicit operator Point3D()
    {
        return Point3D(this->m_x, this->m_y, rand() % 100);
    }
private:
    int m_x;
    int m_y;
};

// operator Point2D::Point3D()
// {
//     return Point3D(this->m_x, this->m_y, rand() % 100);
// }

Point3D convert(Point2D & d2)  // need't const
{
    return Point3D(d2);
}

int main()
{
    srand(time(nullptr));

    Point2D d2(10, 20);
    Point3D d3(d2);
    //Point3D d3 = static_cast<Point3D>(d2);
    //Point3D d3 = d2;

    //Point3D d3 = convert(d2);  // compile error when add 'explicit'
    d3.dis();

    return 0;
}