#include <stdio.h>
#include <stdlib.h>

int main()
{
    char *p = malloc(100);
    free(p);

    const int a = 42;
    int *pa = &a;
    *pa = 20;
    printf("a = %d\n", a);

    int arr[3][4];
    int *pArr = arr;


    return 0;
}