#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    A(int m = 42)
        :m_num(m)
    {}

    void dis()
    {
        cout << "m_num: " << m_num << " " << "m_share: " << m_share << endl;
    }

    static void manageA();
    void manageB();

private:
    int m_num;
    static int m_share;
};

int A::m_share = 0;

void A::manageA()
{
    cout << m_share << endl;
    //cout << "m_num: " << m_num << endl;  // compile error
    // prompt: invalid user of member 'm_num' in static function

    //manageB();  // compile error
    // prompt: cannot call member function manageB() without object
}

void A::manageB()
{
    cout << "manageB()" << endl;
}

int main()
{
    A aa;
    aa.manageA();
    aa.manageB();

    A::manageA();

    return 0;
}