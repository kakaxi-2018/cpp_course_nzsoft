#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Shape
{
public:
    Shape(int i, int j)
        :m_x(i), m_y(j)
    {
    }

    virtual void draw()
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
    }

    virtual void draw() override
    {
        cout << "x: " << m_x << " " << "y: " << m_y << " " 
            << "redius: " << m_redius << endl;
    }
protected:
    int m_redius;
};

class Rect: public Shape
{
public:
    Rect(int i, int j, int m, int n)
        :Shape(i, j)
        {
            m_m = m;
            m_n = n;
        }

    virtual void draw()
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
    Circle c(10, 20, 30);
    Shape * ps;

    //ps = &c;
    //ps->draw();
    cout << "==========" << endl;

    Rect r(60, 70, 80, 90);
    //ps = &r;
    //ps->draw();

    int choice;
    int flag = 0;

    while (1)
    {
        cout << "please input 1 or 2 to continue: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            ps = &c;
            break;
        case 2:
            ps = &r;
            break;
        default:
            flag = 1;
            break;
        }

        if (flag)
        {
            break;
        }

        ps->draw();
    }

    cout << "done" << endl;

    return 0;
}