#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;


int main()
{
    std::vector<int> vi = {1, 9, 5, 7, 3, 2, 8, 6, 4, 10};
    std::sort(vi.begin(), vi.end(), [](int a, int b) { return a < b; });

    for (auto item : vi)
    {
        cout << item << endl;
    }

    cout << "==========" << endl;
    std::vector<std::string> vs = {"aa", "dd", "bb", "cc"};
    std::sort(vs.begin(), vs.end(), 
        [](std::string s1, std::string s2) {return s1 > s2; });

    for (auto &item: vs)
    {
        cout << item << endl;
    }

    return 0;
}