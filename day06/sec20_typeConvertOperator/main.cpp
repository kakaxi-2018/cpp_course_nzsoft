#include <iostream>

// task 7.6.5.2
// Complex c(1, 2);
// double a = c + 2.0;

using std::cout;
using std::endl;

class Complex
{
public:
    Complex(double r, double i)
        : m_real(r), m_image(i)
    {
    }

    explicit operator double()
    {
        return this->m_real;
    }

    void dumpFormat()
    {
        cout << "(" << m_real << "," << m_image << ")" << endl;
    }

private:
    double m_real;
    double m_image;
};

int main()
{
    Complex c1(10, 10);
    //double d = c1 + 20.0;  // compile error when add 'explicit'
    double d = double(c1) + 20.0;
    //double d = static_cast<double>(c1) + 20.0;
    cout << d << endl;

    return 0;
}