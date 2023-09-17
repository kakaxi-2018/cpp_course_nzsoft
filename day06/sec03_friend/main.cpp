#include <iostream>

using std::cout;
using std::endl;

class Complex
{
    friend Complex operator+(const Complex c1, const Complex c2);
public:
    Complex(double r = 0.0, double i = 0.0)
        :m_real(r), m_image(i)
    {}

    void dumpFormat()
    {
        cout << "(" << m_real << "," << m_image << ")" << endl;
    }
private:
    double m_real;
    double m_image;
};

Complex operator+(const Complex c1, const Complex c2)
{
    /*
    Complex cc;
    cc.m_real = c1.m_real + c2.m_real;
    cc.m_image = c1.m_image + c2.m_image;
    return cc;
    */

   return Complex(c1.m_real + c2.m_real, c1.m_image + c2.m_image);
}

int main()
{
    Complex c1(1, 2);
    Complex c2(3, 4);
    Complex c3 = c1 + c2;
    c3.dumpFormat();

    return 0;
}