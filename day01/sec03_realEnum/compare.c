#include <stdio.h>

enum Day
{
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main()
{
    enum Day d = Monday;
    enum Day d2 = 42; 
    enum Day d3 = Sunday;

    printf("d2 = %d\n", d2);
    printf("d3 = %d\n", d3);

    return 0;
}