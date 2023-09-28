#include <iostream>

using std::cout;
using std::endl;

class Shape
{
public:
    Shape(int i, int j)
        :m_x(i), m_y(j)
    {}

    virtual void draw() = 0;
protected:
    int m_x;
    int m_y;
};

class Circle: public Shape
{
public:
    Circle(int i, int j, int k)
        :Shape(i, j), m_redius(k)
    {}

    virtual void draw() override
    {
        cout << "x: " << m_x << " y: " << m_y << " redius: " << m_redius << endl;
    }
protected:
    int m_redius;
};

class Rect: public Shape
{
public:
    Rect(int i, int j, int m, int n)
        :Shape(i, j), m_m(m), m_n(n)
    {}

    virtual void draw() override
    {
        cout << "x: " << m_x << " y: " << m_y << " m: " << m_m << " n: " << m_n 
            << endl;
    }
protected:
    int m_m;
    int m_n;
};

int main()
{
    //Shape s(1, 2);  // compile error
    Circle cc(1, 2, 3);
    Shape * ps;

    ps = &cc;
    ps->draw();

    cout << "==========" << endl;
    Rect r(50, 60, 70, 80);
    ps = &r;
    ps->draw();

    return 0;
}