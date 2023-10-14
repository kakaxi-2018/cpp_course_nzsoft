#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main1()
{
    char buf[1024];

    while (cin.getline(buf, 10))
    {
        cout << buf << endl;
    }

    cout << "\n cin.eof(): " << cin.eof()
        << "\n cin.fail(): " << cin.fail()
        << "\n cin.bad(): " << cin.bad()
        << "\n cin.good(): " << cin.good() << endl;

    return 0;
}

int main2()
{
    char buf[1024];

    while (cin.get(buf, 10, 'x'))
    {
        cout << buf << endl;
    }

    cout << "\n cin.eof(): " << cin.eof()
        << "\n cin.fail(): " << cin.fail()
        << "\n cin.bad(): " << cin.bad()
        << "\n cin.good(): " << cin.good() << endl;

    return 0;
}

int main3()
{
    char ch;

    while (cin.get(ch))
    {
        cout << ch << endl;
    }

    return 0;
}

int main()
{
    char buf[1024];
    //cin >> buf;
    cin.getline(buf, 1024);
    cout << buf << endl;


    return 0;
}