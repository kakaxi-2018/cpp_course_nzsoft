#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;

int main()
{
    std::vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    std::for_each(vec.begin(), vec.end(), [](int & x) { cout << x << ' '; });

    return 0;
}