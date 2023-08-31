#include <iostream>

using std::cout;
using std::endl;

int main1()
{
    int a = 42;
    const int &ra = a;
    //ra = 30;  // compile error
    const_cast<int &>(ra) = 30;
    cout << a << endl;
    cout << ra << endl;

    cout << "==========" << endl;
    const int *pa = &a;
    //*pa = 50;  // compile error
    *const_cast<int *>(pa) = 50;
    cout << *pa << endl;

    return 0;
}

int main()
{
    const int a = 42;
    const int &ra = a;
    const_cast<int &>(ra) = 50;  // note: undefined
    cout << a << endl;
    cout << ra << endl;

    cout << "==========" << endl;
    struct Data
    {
        int n;
    };

    const Data d = {42};
    const Data &rd = d;
    //rd.n = 50;
    const_cast<Data &>(rd).n = 50;
    cout << d.n << endl;
    cout << rd.n << endl;


    return 0;
}