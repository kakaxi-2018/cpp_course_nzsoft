#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

int main1()
{
    std::string *ps = new std::string("China");
    cout << ps << endl;
    cout << *ps << endl;
    delete ps;

    cout << "==========" << endl;
    // user for comparison
    int a = 10;
    int *pi = &a;
    cout << pi << endl;
    cout << *pi << endl;


    return 0;
}

int main2()
{
    // initialization
    std::string s("China");
    std::string s2("America");

    // size
    cout << sizeof(std::string) << endl;  // it depends(x32/x64, win/linux...)
    cout << sizeof(s) << endl;

    // input
    cout << "==========" << endl;
    std::string s3;
    //cin >> s3;
    std::getline(cin, s3);
    cout << s3 << endl;

    return 0;
}

// strlen strcat strcmp strcpy
int main()
{
    std::string s("apple");
    cout << s.length() << endl;
    cout << s.size() << endl;

    std::string s2("apple");
    s += s2;
    cout << s << endl;

    std::string s3("appl");

    if (s2 > s3)
    {
        cout << "s2 > s3" << endl;
    }
    else if (s2 < s3)
    {
        cout << "s2 < s3" << endl;
    }
    else
    {
        cout << "s2 == s3" << endl;
    }

    s2 = s3;
    cout << "s2: " << s2 << endl;

    return 0;
}