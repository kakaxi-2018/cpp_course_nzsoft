#include <iostream>
#include <vector>
#include <initializer_list>
#include <string>

using std::cout;
using std::endl;

int main1()
{
    // 在 C 中的功能彻底被废弃了，下面这一行代码在 C++11 中无法编译通过
    //auto int i;

    return 0;
}

void traverse()
{
    // 半自动
    std::vector<int> vec = {1, 3, 5, 7, 9};

    auto itr = vec.begin();

    for (; itr != vec.end(); ++itr)
    {
        cout << *itr << endl;
    }

}

int main2()
{
    // 推导基本数据类型
    std::vector<int> vec = {1, 3, 5, 7, 9};

    for (auto &item: vec)
    {
        cout << item << ' ';
    }
    cout << endl;

    cout << "==========" << endl;
    auto a = 5;
    cout << "sizeof(a) = " << sizeof(a) << endl;

    auto b = 5.5;
    cout << "sizeof(b) = " << sizeof(b) << endl;

    auto c = a + b;
    cout << "sizeof(c) = " << sizeof(c) << endl;

    // 推导不出修饰
    const auto m = 42;
    auto n = m;
    n = 30;
    cout << "n = " << n << endl;

    return 0;
}

void func()
{
    cout << "func()" << endl;
}

typedef void (*pf)();

int main3()
{
    // 推导函数类型
    auto pFunc = func;
    pFunc();

    return 0;
}

// note: 在 C++11 中， auto 不能修改函数参数。在 C++14 中可以
//void foo(auto x)
void foo(int x)
{
    cout << x << endl;
}

int main4()
{
    foo(20);
    foo(14.5);

    return 0;
}

int main()
{
    //auto arr = {1, 3, 5, 7, 9};
    std::initializer_list<int> arr = {1, 3, 5, 7, 9};
    cout << "sizeof(arr): " << sizeof(arr) << endl;

    cout << "==========" << endl;
    auto p = (std::string)"China";
    cout << sizeof(char *) << ' ' << sizeof(std::string) << endl;
    cout << sizeof(p) << endl;

    return 0;
}