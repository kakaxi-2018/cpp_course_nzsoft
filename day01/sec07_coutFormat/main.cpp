#include <iostream>
#include <iomanip>

using std::cout;
using std::endl;

int main1()
{
    int data = 1234;
    cout << data << endl;
    cout << std::hex << data << endl;
    cout << std::oct << data << endl;
    cout << std::dec << data << endl;

    cout << "==========" << endl;
    cout << std::dec << 128 << endl;
    cout << std::hex << 128 << endl;

    return 0;
}

int main2()
{
    double d = 1.2345678;
    cout << std::setw(10) << std::setiosflags(std::ios::left) << d << "----" 
        << endl;
    cout << "----" << std::setw(10) << std::setiosflags(std::ios::right) << d 
        << endl;

    // 12:03:05
    int a = 12;
    int b = 3;
    int c = 5;
    cout << std::setfill('0') << std::setw(2) << a << ":" << std::setw(2) << b 
        << ":" << std::setw(2) << c << endl;


    return 0;
}

int main()
{
    double d = 1.2345678;
    cout << std::setprecision(3) << std::setiosflags(std::ios::fixed) <<  d << endl;

    return 0;
}