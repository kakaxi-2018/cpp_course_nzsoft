#include <iostream>
#include <fstream>

using std::cout;
using std::endl;
using std::cin;

void foo(std::fstream fs)
{}

int main1()
{
    std::fstream fs;
    std::fstream fs2;
    //fs = fs2;  // error, can't copy

    //foo(fs);  // error, can't copy

    return 0;
}

int main()
{
    int a;
    int b;
    int c;

    cin >> a >> b >> c;
    cout << a << b << c;

    return 0;
}