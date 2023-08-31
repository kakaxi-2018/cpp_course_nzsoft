#include <iostream>

using std::cout;
using std::endl;

namespace one
{
    int x = 42;

    namespace another
    {
        int x = 50;
    }
}


int main()
{
    {
        cout << one::x << endl;
        cout << one::another::x << endl;
    }

    {
        using one::x;
        //using one::another::x;  // compile error, conflict
    }

    return 0;
}