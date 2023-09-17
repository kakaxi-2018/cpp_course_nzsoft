#include <iostream>

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

    Complex & operator=(const Complex & another);
    const Complex operator+(const Complex & another);
private:
    double m_real;
    double m_image;
};

Complex & Complex::operator=(const Complex & another)
{
    if (this == &another)
    {
        return *this;
    }

    this->m_real = another.m_real;
    this->m_image = another.m_image;
    return *this;
}

const Complex Complex::operator+(const Complex & another)
{
    return Complex(this->m_real + another.m_real, 
        this->m_image + another.m_image);
}


int main()
{
    Complex c1(1.0, 2.0);
    Complex c2(3.0, 4.0);
    Complex c3(5, 6);
    //c1 = c2;
    //c1.operator=(c2);
    (c1 = c2) = c3;
    c1.dumpFormat();
    c2.dumpFormat();

    cout << "==========" << endl;
    int a = 1;
    int b = 3;
    int c = 5;
    (a = b) = c;
    cout << a << endl;
    cout << b << endl;

    return 0;
}

int main2()
{
    Complex c1(1.0, 2.0);
    Complex c2(3.0, 4.0);
    //Complex c3 = c1 + c2;
    Complex c3 = c1.operator+(c2);
    c3.dumpFormat();
    //c1 + c2 = c3;  // add const to returnValue, make it compile error

    cout << "==========" << endl;
    int a;
    int b;
    int c;
    //a + b = c;  // compile error

    return 0;
}