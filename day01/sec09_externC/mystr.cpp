#include "mystr.h"

int myStrlen(char *str)
{
    int len = 0;

    while (*str)
    {
        len++;
        str++;
    }

    return len;
}