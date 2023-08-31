#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 42, b, c;
    int *pArr[] = {&a, &b, &c};  // array of pointer, int *, int **

    //int &rArr[] = {a, b, c};  // compile error, by reduction to absurdity


    return 0;
}