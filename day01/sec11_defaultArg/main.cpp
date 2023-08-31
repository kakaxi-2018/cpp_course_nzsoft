#include <iostream>
#include <time.h>
#include "mydefault.h"

using std::cout;
using std::endl;

void weatherForcast(char *w = (char *)"sunny")
{
    time_t t = time(0);
    char tmp[64];
    strftime(tmp, sizeof(tmp), "%Y/%m/%d %X %A", localtime(&t));
    cout << tmp << "today is weather " << w << endl;
}

int main1()
{
    weatherForcast();
    weatherForcast();
    weatherForcast((char *)"rainny");
    weatherForcast();

    return 0;
}

// void foo(int a, int b = 2, int c = 5)
// {
//     cout << "a = " << a << " ";
//     cout << "b = " << b << " ";
//     cout << "c = " << c << endl;
// }

int main()
{
    //foo();
    foo(10);
    foo(42, 45);

    return 0;
}