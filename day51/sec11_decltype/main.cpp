#include <iostream>
#include <string>

using std::cout;
using std::endl;

void func()
{
    cout << "func()" << endl;
}

typedef void (*FUNC)();

int main()
{
    int i = 5;
    decltype(i) ii;
    cout << sizeof(i) << ' ' << sizeof(ii) << endl;

    decltype("China") p = "aaaaa";
    cout << sizeof(p) << endl;

    decltype(std::string("Canda")) s;
    cout << sizeof(s) << endl;

    char * ps = (char *)"China";
    decltype(ps) pps;
    cout << sizeof(pps) << endl;

    FUNC f;
    decltype(f) ff = func;
    ff();

    return 0;
}