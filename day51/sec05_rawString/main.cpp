#include <iostream>

#define path "C:\\ZA\\github"
#define path2 R"(C:\ZA\github)"
// 下面这种会报错: 不能发现字符串字面量操作
//#define path2 R"(C:\ZA\git)"hub)"
// 下面 path3 这种的不可以，相当于是一个函数调用了
//#define path3 R("C:\ZA\github")

using std::cout;
using std::endl;

int main()
{

    cout << path << endl;
    cout << path2 << endl;
    //cout << path3 << endl;


    return 0;
}