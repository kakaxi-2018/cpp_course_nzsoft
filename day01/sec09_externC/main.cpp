#include <iostream>
extern "C"
{
#include "mystr.h"
}

using std::cout;
using std::endl;

int main()
{
    char *str = (char *)"Apple";
    int n = myStrlen(str);
    cout << "n = " << n << endl;

    return 0;
}