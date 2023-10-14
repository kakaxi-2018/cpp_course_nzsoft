#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int val1 = 1;
    int val2 = 2;
    auto val3 = val1 + val2;

    auto i = 0, * p = &val1;

    int j = 0, & r = j;
    auto a = r;

    return 0;
}