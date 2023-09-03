#include <iostream>

using std::cout;
using std::endl;

int main()
{
    char **p = new char *[10];

    for (int i = 0; i < 10; ++i)
    {
        p[i] = new char[100];
    }

    for (int i = 0; i < 10; ++i)
    {
        delete []p[i];
    }

    delete []p;

    return 0;
}