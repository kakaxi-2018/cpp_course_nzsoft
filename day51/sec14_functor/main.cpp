#include <iostream>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;

class Compare
{
public:
    Compare(bool flag = false)
        : flag_(flag)
    {}

    ~Compare() = default;

    bool operator()(int a, int b)
    {
        if (false == flag_)
        {
            return a > b;
        }
        else
        {
            return a <= b;
        }
    }
private:
    bool flag_;
};

int main()
{
    std::vector<int> vec = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
    //std::sort(vec.begin(), vec.end(), Compare(true));  // functor
    // lambda
    std::sort(vec.begin(), vec.end(), [](int a, int b) { return a > b; });  

    for (auto item: vec)
    {
        cout << item << ' ';
    }
    cout << endl;

    return 0;
}