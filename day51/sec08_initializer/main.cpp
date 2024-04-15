#include <iostream>
#include <vector>
#include <initializer_list>
#include <map>
#include <string>

using std::cout;
using std::endl;

// 思考：为什么需要用到 const？还有 引用？
int sum(const std::initializer_list<int> &il)
{
    int s = 0;

    for (auto item: il)
    {
        s += item;
    }

    return s;
}

int average(const std::initializer_list<int> &il)
{
    int s = 0;
    
    for (auto item: il)
    {
        s += item;
    }

    return s / il.size();
}

int main1()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};  // 变参，为了达到变参的效果

    int s = sum({1, 3, 5, 7, 9});
    cout << "s: " << s << endl;

    int avg = average({1, 3, 5, 7, 9});
    cout << "avg: " << avg << endl;

    return 0;
}

int main2()
{
    std::vector<int> vec = {1, 2, 3, 4, 5};
    // 类比
    //A a;  // 无参构造
    //A aa(a);  // 拷贝构造
    //A aaa = a;  // 拷贝构造

    /*
    int a;
    int b(10);
    int c = 10;
    */

    return 0;
}


template<class T>
class MyArr 
{
public:
    MyArr() = default;
    MyArr(const std::initializer_list<T> &il)
        :vec(il)
    {
        //for (auto &item: il)
        //{
        //    vec.push_back(item);
        //}
    }

    void dis()
    {
        for (auto &item: vec)
        {
            cout << item << ' ';
        }
        cout << endl;
    }
protected:
    std::vector<T> vec;
};

int main3()
{
    MyArr<int> vec({1, 3, 5, 7, 9});
    vec.dis();

    return 0;
}

int main()
{
    // 类比
    int a{10};
    cout << "a: " << a << endl;

    int arr[10]{1, 3, 5, 7, 9};
    // 非类类型的初始化列表不能使用小括号
    int arr2[10]{2, 4, 5, 8, 10};

    std::vector<int> vi({1, 2, 3, 4, 5});

    cout << "==========" << endl;

    // 统一初始化的风格
    int i = 0;
    int MyArr[10] = {1, 2, 3, 4, 5};
    std::vector<int> vec = {2, 4, 6, 8, 10};
    std::map<int, std::string> mp = {
        {1, "China"},
        {2, "Canda"},
        {3, "America"}
    };

    return 0;
}