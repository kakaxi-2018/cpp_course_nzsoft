#include <iostream>

using std::cout;
using std::endl;

struct TypeC
{
    char ch;
};

struct TypeP
{
    char *pc;
};

struct TypeR
{
    char &pr;
};

int main()
{

    cout << sizeof(TypeC) << endl;
    cout << sizeof(TypeP) << endl;
    cout << sizeof(TypeR) << endl;


    return 0;
}