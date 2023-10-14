#include <iostream>
#include <string>

using std::cout;
using std::endl;

template<typename T>
void myswap(T & lhs, T & rhs)
{
    T temp = lhs;
    lhs = rhs;
    rhs = temp;
}

class Mytype
{
public:
    Mytype(int x, int y)
        :_x(x), _y(y)
    {}

    int _x;
    int _y;
protected:
};

int main()
{
    int a = 2;
    int b = 3;
    myswap(a, b);
    cout << a << " " << b << endl;

    cout << "==========" << endl;
    double da = 3.0;
    double db = 5.0;
    myswap(da, db);
    cout << da << " " << db << endl;

    cout << "==========" << endl;
    std::string sa = "apple";
    std::string sb = "banana";
    myswap(sa, sb);
    cout << sa << " " << sb << endl;

    Mytype mt(1, 2);
    Mytype mt2(3, 4);
    myswap(mt, mt2);
    cout << mt._x << " " << mt._y << endl;

    return 0;
}