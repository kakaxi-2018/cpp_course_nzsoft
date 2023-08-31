#include <iostream>

using std::cout;
using std::endl;

typedef struct _pos
{
    int x_;
    int y_;
} Pos;

bool operator==(Pos one, Pos another)
{
    if (one.x_ == another.x_ && one.y_ == another.y_)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEqual(Pos one, Pos another)
{
    if (one.x_ == another.x_ && one.y_ == another.y_)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main1()
{
    Pos p1{1, 2};
    Pos p2{1, 2};

    if (p1 == p2)
    //if (operator==(p1, p2))
    //if (isEqual(p1, p2))
    {
        cout << "==" << endl;
    }
    else
    {
        cout << "!=" << endl;
    }

    return 0;
}

struct Complex
{
    double real;
    double image;
};

Complex operator+(Complex one, Complex another)
{
    Complex sum;
    sum.real = one.real + another.real;
    sum.image = one.image + another.image;
    return sum;
}

int main()
{
    Complex c1{1.0, 2.0};
    Complex c2{5.0, 6.0};
    Complex sum = c1 + c2;
    //Complex sum = operator+(c1, c2);
    cout << "c1 + c2 = " << "(" << sum.real << "," << sum.image << ")" << endl;
    return 0;
}