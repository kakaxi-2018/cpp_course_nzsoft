#include <stdio.h>

int main()
{
    int a;
    int b = 42;
    int c = 100;

    (a = b) = c;  // error, lvalue required as left operand of assginment

    printf("a = %d\n", a);

    return 0;
}