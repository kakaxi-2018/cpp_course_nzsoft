#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using std::cout;
using std::endl;

int main()
{
    srand(time(nullptr));
    std::vector<int> vi;

    for (int i = 0; i < 10; ++i)
    {
        vi.push_back(rand() % 100);
    }

    for (auto it = vi.begin(); it != vi.end(); ++it)
    {
        cout << *it << ' ';
    }

    cout << endl;

    std::sort(vi.begin(), vi.end(), [](int a, int b) { return a < b; });

    for (auto it = vi.begin(); it != vi.end(); ++it)
    {
        cout << *it << ' ';
    }

    cout << endl;

    return 0;
}