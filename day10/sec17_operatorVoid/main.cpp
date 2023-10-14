#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::cin;

int main1()
{
    std::fstream fs("aa.txt", std::ios::in);

    //if (!fs)
    if (fs.operator!())
    {
        cout << "open error" << endl;
    }

    char ch;

    while (cin >> ch)
    {
        cout << ch << endl;
    }

    return 0;
}

class A
{
public:
    A()
    {}

    ~A()
    {}

    operator void* () const
    {
        cout << "operator void* () const" << endl;
        return (void *)this;
    }

    bool operator!() const
    {
        cout << "bool operator!() const" << endl;
        return true;
    }
protected:
};

int main()
{
    A a;

    while (a)
    {
        cout << "first" << endl;
        break;
    }

    if (!a)
    {
        cout << "second" << endl;
    }

    return 0;
}