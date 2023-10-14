#include <iostream>

using std::cout;
using std::endl;

// note: no throw exception: bad_alloc, why?

int main()
{
    /*
    double * p;

    for (int i = 0; i < 1000000; ++i)
    {
        p = new double[900000];
    }
    */

    try
    {
        double * p;

        for (int i = 0; i < 1000; ++i)
        {
            p = new double[900000];
        }
    }
    catch(std::bad_alloc & e)
    {
        cout << e.what() << endl;
        exit(-1);
    }

    return 0;
}