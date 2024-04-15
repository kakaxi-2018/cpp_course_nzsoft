#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    A() = default;

    ~A() = default;

    A(const A &another) = default;

    // 思考： 返回的为什么是引用？
    A & operator=(const A &another) = default;

    // 重载构造函数，带参数
    A(int a)
    {}
};

int main()
{
    A aa;
    A bb;
    aa = bb;

    cout << "==========" << endl;
    // note: 能通过编译，这是一个函数声明
    A aa2();
    A aa3(20);

    return 0;
}