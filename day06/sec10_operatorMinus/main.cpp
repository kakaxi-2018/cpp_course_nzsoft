#include <iostream>

// -n, -(-n), -n = 10, 

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

    void dumpFormat()  const
    {
        cout << "(" << m_real << "," << m_image << ")" << endl;
    }

    const Complex operator-() const;

private:
    double m_real;
    double m_image;
};

const Complex Complex::operator-() const
{
    return Complex(-this->m_real, -this->m_image);
}

int main()
{
    int a = 10;
    cout << -a << endl;
    cout << -(-a) << endl;
    //-a = 20;  // compile error

    cout << "==========" << endl;
    Complex ca(10, 10);
    (-ca).dumpFormat();

    (-(-ca)).dumpFormat();

    //-ca = Complex(20, 20);  // make it error, add const

    return 0;
}