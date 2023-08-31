#include <iostream>

using std::cout;
using std::endl;

namespace one
{
    int x = 10;
}

namespace another
{
    int x = 42;
}

int main()
{
    {
        // recommend
        int x = 5;
        cout << x << endl;
        cout << one::x << endl;
        cout << another::x << endl;
    }

    {
        cout << "==========" << endl;
        using one::x;
        cout << x << endl;
        //using another::x;  // compile error, conflicts
        //cout << x << endl;
    }

    {
        cout << "==========" << endl;
        using namespace one;
        cout << x << endl;
        using namespace another;
        //cout << x << endl;  // compile error, ambigous
    }

    return 0;
}