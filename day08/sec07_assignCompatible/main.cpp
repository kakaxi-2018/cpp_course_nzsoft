#include <iostream>
#include <typeinfo>

using std::cout;
using std::endl;

class Shape
{
public:
    Shape(int i, int j)
        :m_x(i), m_y(j)
    {
        cout << "Shape this: " << this << endl;
        cout << typeid(this).name() << endl;
    }

    void draw()
    {
        cout << "x: " << m_x << " " << "y: " << m_y << endl;
    }
protected:
    int m_x;
    int m_y;
};

class Circle: public Shape
{
public:
    Circle(int i, int j, int r)
    :Shape(i, j), m_redius(r)
    {
        cout << "Circle this: " << this << endl;
        cout << typeid(this).name() << endl;
    }

    void draw()
    {
        cout << "x: " << m_x << " " << "y: " << m_y << " " 
            << "z: " << m_redius << endl;
    }
protected:
    int m_redius;
};

int main()
{
    Shape s(1, 2);
    Circle c(10, 20, 30);

    //s = c;
    //s.draw();

    //Shape & rs = c;
    //rs.draw();

    Shape * ps = &c;
    ps->draw();

    cout << "==========" << endl;
    //double a;
    //char * p = (char *)&a;

    //char p;
    //double * pd = (double *)&p;  // error
    //*pd = 100;  // dangerous


    return 0;
}