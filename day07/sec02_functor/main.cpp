#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using std::cout;
using std::endl;

class Mypow
{
public:
    double operator()(double x, int y)
    {
        double ret = 1;

        for (int i = 0; i != y; ++i)
        {
            ret *= x;
        }

        return ret;
    }
};


int main1()
{
    cout << pow(5, 3) << endl;
    Mypow mypow;
    cout << mypow(5, 3) << endl;

    return 0;
}

bool Compare(int a, int b)
{
    if (a < b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

class MyCompare
{
public:
    MyCompare(bool f = true)
     :m_flag(f)
    {}

    bool operator()(int a, int b)
    {
        if (true == m_flag)
        {
            return a < b;
        }
        else
        {
            return a > b;
        }
    }

    bool m_flag;
};

int main()
{
    std::vector<int> vi = {1, 3, 5, 8, 4, 6};
    //std::sort(vi.begin(), vi.end(), Compare);
    std::sort(vi.begin(), vi.end(), MyCompare(false));

    for (auto it = vi.begin(); it != vi.end(); ++it)
    {
        cout << *it << endl;
    }

    return 0;
}