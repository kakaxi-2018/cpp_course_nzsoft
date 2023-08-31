#include <iostream>

using std::cout;
using std::endl;

int main()
{
    bool flag = true;
    cout << "sizeof(bool) = " << sizeof(bool) << endl;
    cout << "sizeof(flag) = " << sizeof(flag) << endl;

    if (flag)
    {
        cout << "flag is true" << endl;
    }
    else
    {
        cout << "flag is false" << endl;
    }

    return 0;
}