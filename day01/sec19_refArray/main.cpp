#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int arr[10] = {1, 3, 5, 7, 9};
    int * const & ra = arr;
    //int * & ra2 = arr;  // compile error
    //int * & const ra3 = arr;  // compile error

    for (int i = 0; i < 10; ++i)
    {
        cout << ra[i] << endl;
    }

    cout << "==========" << endl;
    int (&rarr)[10] = arr;

    for (int i = 0; i < 10; ++i)
    {
        cout << rarr[i] << endl;
    }

    cout << "sizeof(arr)  = " << sizeof(arr) << endl;
    cout << "sizeof(rarr) = " << sizeof(rarr) << endl;

    return 0;
}