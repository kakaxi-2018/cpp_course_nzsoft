#include <iostream>

using std::cout;
using std::endl;

// 闭包
// & 引用
// = 复制产生成复本，复本是 const，要想修改需要加 mutable

// 值捕获方式
int main1()
{
    int x = 10;
    int y = 20;

    // 如果我们希望能改变一个被捕获的变量的值，就必须在参数列表首加上关键字 mutable
    auto f = [x] () mutable {
        x += 30;
        cout << "lambda: x: " << x << endl;
    };
    f();

    cout << "x: " << x << " y: "<< y <<endl;

    return 0;
}

// 引用捕获方式
int main2()
{
    int x = 10;
    int y = 20;

    // 对于非 const 变量，可以修改其值
    auto f = [&] () {
        x += 30;
        y += 30;

        cout << "lambda: x: " << x << " y: "<< y <<endl;
    };

    f();

    cout << "x: " << x << " y: "<< y <<endl;

    return 0;
}

// 隐式捕获
int main3()
{
    int x = 10;
    int y = 20;

    auto f = [=, &y] () {
        y += 30;

        cout << "lambda: x: " << x << " y: "<< y <<endl;
    };

    f();

    cout << "x: " << x << " y: "<< y <<endl;

    return 0;
}

// 隐式捕获
int main()
{
    int x = 10;
    int y = 20;
    
    auto f = [&, x] () {
        y += 30;
        cout << "lambda: x: " << x << " y: "<< y <<endl;
    };

    f();
    cout << "x: " << x << " y: "<< y <<endl;

    return 0;
}