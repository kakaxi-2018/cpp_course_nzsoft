#include <iostream>

using std::cout;
using std::endl;

class Complex
{
    friend Complex add(const Complex & c1, const Complex & c2);
    friend Complex operator+(const Complex & c1, const Complex & c2);
public:
    Complex(double r = 0.0, double i = 0.0)
        : m_real(r), m_image(i)
    {
    }

    void dumpFormat()
    {
        cout << "(" << m_real << "," << m_image << ")" << endl;
    }

private:
    double m_real;
    double m_image;
};

Complex add(const Complex & c1, const Complex & c2)
{
    return Complex(c1.m_real + c2.m_real, c1.m_image + c2.m_image);
}

Complex operator+(const Complex & c1, const Complex & c2)
{
    return Complex(c1.m_real + c2.m_real, c1.m_image + c2.m_image);
}

int main()
{
    Complex c1(1.0, 2.0);
    Complex c2(3.0, 4.0);
    Complex cc = add(c1, c2);
    cc.dumpFormat();

    cout << "==========" << endl;
    //Complex cc2 = c1 + c2;
    Complex cc2 = operator+(c1, c2);
    cc2.dumpFormat();

    return 0;
}