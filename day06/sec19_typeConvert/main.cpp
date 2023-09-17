#include <iostream>

// task 7.6.5.2

// Complex c(1, 2)
// Complex c2 = c + 2;

using std::cout;
using std::endl;

class Complex
{
public:
    Complex(double r, double i)
        : m_real(r), m_image(i)
    {
    }

    void dumpFormat()
    {
        cout << "(" << m_real << "," << m_image << ")" << endl;
    }

    void dumpFormat() const
    {
        cout << "(" << m_real << "," << m_image << ")" << endl;
    }

    const Complex operator+(const Complex & another) const;
    Complex(const double & d);

private:
    double m_real;
    double m_image;
};

const Complex Complex::operator+(const Complex & another) const
{
    cout << "operator+" << endl;
    return Complex(this->m_real + another.m_real, this->m_image + another.m_image);
}

Complex::Complex(const double & d)
{
    cout << "conver constructor" << endl;
    this->m_real = d;
    this->m_image = 0;
}

// a + b, a + b + c, (a + b) + c, (a + b) = c
int main1()
{
    int a = 10;
    int b = 20;
    int c = 30;
    a + b;
    a + b + c;
    (a + b) + c;

    //cout << "a + b = " << a + b << endl;
    //cout << a + b + c << endl;
    //cout << (a + b) + c << endl;
    //a + b = c;  // compile error

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "==========" << endl;
    Complex c1(10, 10);
    Complex c2(20, 20);
    Complex c3(30, 30);
    (c1 + c2).dumpFormat();
    (c1 + c2 + c3).dumpFormat();
    ((c1 + c2) + c3).dumpFormat();
    c1.dumpFormat();
    c2.dumpFormat();
    c3.dumpFormat();

    //c1 + c2 = c3;  // compile error when add return type of const

    return 0;
}

int main()
{
    Complex c1(10, 20);
    
    Complex c2 = c1 + 30.0;
    c2.dumpFormat();

    return 0;
}