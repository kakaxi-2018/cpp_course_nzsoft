#include <iostream>

using std::cout;
using std::endl;

#define SQR(x) ((x)*(x))


inline int sqr(int x);

inline int sqr(int x)
{
    return x * x;
}

int main()
{
    int i = 0;

    while (i < 5)
    {
        cout << sqr(i++) << endl;
        //cout << SQR(i++) << endl;
    }

    return 0;
}