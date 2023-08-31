#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

void foo(int a = 4)
{
    cout << "foo()" << endl;
}

int main1()
{
    string s;
    string s2;

    cin >> s >> s2;
    cout << "s: "  << s << endl;
    cout << "s2: " << s2 << endl;

    return 0;
}

void func(int (&rarr)[10])
{
    cout << "func() sizeof(rarr) = " << sizeof(rarr) << endl;

    for (int i = 0; i < sizeof(rarr) / sizeof(rarr[0]); ++i)
    {
        cout << rarr[i] << endl;
    }
}

int main()
{
    int arr[10] = {1, 3, 5, 7, 9};
    int (&rarr)[10] = arr;
    cout << "sizeof(arr)  = " << sizeof(arr) << endl;
    cout << "sizeof(rarr) = " << sizeof(rarr) << endl;

    cout << "arr   = " << arr << endl;
    cout << "arr+1 = " << arr+1 << endl;

    cout << "rarr   = " << rarr << endl;
    cout << "rarr+1 = " << rarr+1 << endl;

    func(rarr);

    return 0;
}