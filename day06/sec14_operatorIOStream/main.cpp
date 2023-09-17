#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Complex
{
    friend std::istream & operator>>(std::istream & ci, Complex & cc);
    friend std::ostream & operator<<(std::ostream & co, const Complex & cc);
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

// >> friend function
// before Complex, need't const
std::istream & operator>>(std::istream & ci, Complex & cc) 
{
    ci >> cc.m_real >> cc.m_image;
    return ci;
}

// << friend function
std::ostream & operator<<(std::ostream & co, const Complex & cc)
{
    co << "(" << cc.m_real << ", " << cc.m_image << ")" << endl;
    return co;
}


int main()
{
    Complex c1(10, 20);
    Complex c2(30, 40);

    //cin >> c1 >> c2;
    operator>>(operator>>(cin, c1), c2);
    //cout << c1 << c2;
    operator<<(operator<<(cout, c1), c2);

    return 0;
}