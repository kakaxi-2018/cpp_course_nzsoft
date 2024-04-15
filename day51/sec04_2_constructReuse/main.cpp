#include <iostream>

struct A
{
    A(bool a, char b, int c, float d, double e)
        :a_(a), b_(b), c_(c), d_(d), e_(e)
    {}

    A(int c)
        :A(true, 'b', c, 1.1, 1000.1)
    {}

    A(double e)
        :A(false, 'a', 0, 0.1, e)
    {}

    bool a_;
    char b_;
    int c_;
    float d_;
    double e_;
};

using std::cout;
using std::endl;

int main()
{
    A o1(10);
    cout << "a: " << o1.a_
        << ", b: " << o1.b_
        << ", c: " << o1.c_
        << ", d: " << o1.d_
        << ", e: " << o1.e_ << endl;

    A o2(5.5);
    cout << "a: " << o2.a_
        << ", b: " << o2.b_
        << ", c: " << o2.c_
        << ", d: " << o2.d_
        << ", e: " << o2.e_ << endl;

    return 0;
}