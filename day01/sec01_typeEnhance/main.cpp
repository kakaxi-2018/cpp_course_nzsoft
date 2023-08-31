#include <iostream>
#include <cstdio>

using std::cout;
using std::endl;

int main()
{
    //char *p = malloc(100);  // error, 'void *' to 'char *'
    char *p = (char *)malloc(100);  // error
    free(p);

    const int a = 42;
    //int *pa = &a;  // error, 'const int *' to 'int *'
    const int *pa = &a;
    //*pa = 20;  // error, read-only '*pa'
    cout << "a = " << a << endl;

    int arr[3][4];
    //int *pArr = arr;  // error, 'int (*)[4]' to 'int *'
    int (*pArr)[4] = arr;

    return 0;
}