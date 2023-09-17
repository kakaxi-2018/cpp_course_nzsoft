#include <iostream>

// a++; a++++; a++ = 20;

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

    Complex & operator++()
    {
        ++this->m_real;
        ++this->m_image;
        return *this;
    }

    const Complex operator++(int);

private:
    double m_real;
    double m_image;
};

const Complex Complex::operator++(int)
{
    Complex ms(*this);
    ++this->m_real;
    ++this->m_image;
    return ms;
}

int main()
{
    int a = 10;
    cout << a++ << endl;
    cout << a << endl;

    //cout << a++++ << endl;  // compile error

    //a++ = 20;  // compile error

    cout << "==========" << endl;
    Complex ca(10, 10);
    (ca++).dumpFormat();
    ca.dumpFormat();

    //(ca++++).dumpFormat();  // compile error

    //(ca++) = Complex(20, 20);  // compile error

    return 0;
}