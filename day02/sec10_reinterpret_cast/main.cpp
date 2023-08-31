#include <iostream>

using std::cout;
using std::endl;

int main()
{
    // the two sides can't be implicitly converted
    int *m;
    int n = 42;

    m = reinterpret_cast<int *>(n);
    n = reinterpret_cast<int>(m);

    int arr[5] = {1, 2, 3, 4, 5};
    //cout << std::hex << *((int *)((int)arr+1)) << endl;
    cout << std::hex << *((int *)((int64_t)arr+1)) << endl;
    //cout << std::hex << *((int *)((int)arr+1)+1) << endl;
    cout << std::hex << *((int *)((int64_t)arr+1)+1) << endl;


    return 0;
}