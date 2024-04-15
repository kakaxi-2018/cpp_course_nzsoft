#include <iostream>

using std::cout;
using std::endl;

// 该 static_assert 用来确保编译仅在 32 位的平台上进行，不支持64位的平台，该语句可以
// 放在文件的开关处，这样可以迟早检查，以节省失败情况下的编译时间
static_assert(
    sizeof(void *) != 4,
    "64-bit code generation is not supported."
);

 template <typename T, typename U>
 int my_bit_copy(T & a, U & b)
 {
    static_assert(
        sizeof(a) == sizeof(b),
        "parameters must have same width"
    );

    return 0;
 }

int main()
{
    int a; float b;
    //my_bit_copy(a, b);

    char c;
    my_bit_copy(a, c);

    cout << "sizeof(float) = " << sizeof(float) << endl;

    return 0;
}