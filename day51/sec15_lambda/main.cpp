#include <iostream>

using std::cout;
using std::endl;

// 最小的 lambda 表达式
auto f = [] { return 1 + 2; };

int main1()
{
    cout << f() << endl;

    cout << [] { return 1 + 3; }() << endl;

    return 0;
}

// 较小的 lambda 表达式
int main()
{
    auto f = [] (int a, int b) { return a + b; };
    cout << f(3, 4) << endl;

    cout << [] (int a, int b) { return a + b; } (3, 4) << endl;
    // 返回类型 -> 一般不写
    cout << [] (int a, int b)->int {return a * b; }(3, 4) << endl;

    return 0;
}