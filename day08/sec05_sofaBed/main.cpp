#include <iostream>

using std::cout;
using std::endl;

class Funiture
{
public:
    void desc()
    {
        cout << "weight: " << m_weight << endl;
        cout << "height: " << m_height << endl;
    }
protected:
    double m_weight;
    double m_height;
};

class Sofa: virtual public Funiture
{
public:
    Sofa(int w = 0, int h = 0)
    {
        m_weight = w;
        m_height = h;
    }

    void sit()
    {
        cout << "sit down and have a rest" << endl;
    }
};

class Bed: virtual public Funiture
{
public:
    Bed(int w = 0, int h = 0)
    {
        m_weight = w;
        m_height = h;
    }

    void sleep()
    {
        cout << "sleep, have a good night" << endl;
    }
};

class SofaBed: public Sofa, public Bed
{
public:
    SofaBed(double w, double h)
    {
        m_weight = w;
        m_height = h;
    }
};

int main()
{
    SofaBed sf(10.0, 20.0);
    sf.sit();
    sf.sleep();
    cout << "==========" << endl;
    sf.desc();

    return 0;
}