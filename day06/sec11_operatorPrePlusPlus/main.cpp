#include <iostream>
// ++a; ++++a; ++a = 20;

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

    Complex & operator++();

private:
    double m_real;
    double m_image;
};

Complex & Complex::operator++()
{
    ++this->m_real;
    ++this->m_image;
    return *this;
}

int main()
{
    int a = 10;
    cout << ++a << endl;;
    cout << a << endl;

    cout << ++++a << endl;;
    cout << a << endl;

    ++a = 20;
    cout << a << endl;

    cout << "==========" << endl;
    Complex ca(10, 10);
    (++ca).dumpFormat();
    ca.dumpFormat();

    //(++++ca).dumpFormat();
    ((ca.operator++()).operator++()).dumpFormat();
    ca.dumpFormat();
    (++ca) = Complex(20, 20);
    ca.dumpFormat();

    return 0;
}