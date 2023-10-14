#include <iostream>
#include <string>
#include <cstring>

using std::cout;
using std::endl;

template<typename T>
int myCompare(T & lhs, T & rhs)
{
    if (lhs > rhs)
    {
        return 1;
    }
    else if (lhs < rhs)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

template<> int myCompare<const char *>(const char * & ca, const char * & cb)
{
    cout << "special--" << endl;

    if (strcmp(ca, cb) > 0)
    {
        return 1;
    }
    else if (strcmp(ca, cb) < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a = 3;
    int b = 2;
    cout << myCompare(a, b) << endl;

    std::string sa = "abc";
    std::string sb = "Abc";
    cout << myCompare(sa, sb) << endl;

    const char * ca = "abc";
    const char * cb = "Abc";
    cout << myCompare(ca, cb) << endl;



    return 0;
}