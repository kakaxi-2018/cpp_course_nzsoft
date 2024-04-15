#include <iostream>
#include <cassert>

using std::cout;
using std::endl;

char * myStrcpy(char * dst, const char * src)
{
    // 运行时报错，主要用于调试
    assert(dst != nullptr);
    assert(src != nullptr);

    char * d = dst;

    while (*dst++ = *src++);
    return d;
}

int main()
{
    char * dst = nullptr;
    char * src = nullptr;
    myStrcpy(dst, src);

    return 0;
}