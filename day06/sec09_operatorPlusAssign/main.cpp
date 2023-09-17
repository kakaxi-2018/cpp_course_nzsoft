#include <iostream>

// a += b, b += c; a += b += c; (a += b) += c

using std::cout;
using std::endl;

class Complex
{
public:
    Complex(double r = 0.0, double i = 0.0)
        : m_real(r), m_image(i)
    {
    }

    void dumpFormat()
    {
        cout << "(" << m_real << "," << m_image << ")" << endl;
    }

    Complex & operator+=(const Complex & another);
private:
    double m_real;
    double m_image;
};

Complex & Complex::operator+=(const Complex & another)
{
    this->m_real += another.m_real;
    this->m_image += another.m_image;
    return *this;
}

int main()
{
    int a = 10;
    int b = 20;
    int c = 30;
    //a += b;
    //a += b += c;
    (a += b) += c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "==========" << endl;
    Complex c1(10, 10);
    Complex c2(20, 20);
    Complex c3(30, 30);
    //c1 += c2;
    //c1 += c2 += c3;
    //(c1 += c2) += c3;
    (c1.operator+=(c2)).operator+=(c3);
    c1.dumpFormat();
    c2.dumpFormat();
    c3.dumpFormat();

    return 0;
}