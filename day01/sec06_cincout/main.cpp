#include <iostream>
#include <cstdio>
#include <string>

using std::cout;
using std::endl;
using std::cin;
using std::string;

int main1()
{
    int a;
    int b;
    int c;

    cin >> a >> b >> c;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    return 0;
}

int main2()
{
    int m;
    char n;

    //scanf("%d %c", &m, &n);
    cin >> m >> n;

    cout << "m = " << m << endl;
    cout << "n = " << n << endl;

    return 0;
}

int main3()
{
    char buf[10];
    //fgets(buf, 10, stdin);

    //cin >> buf;  // error, no compile error, note: unsafe
    cin.getline(buf, 10);  // safe

    cout << "buf: " << buf << endl;

    return 0;
}

int main()
{
    string s;  // string, char *
    cin >> s;

    cout << s << endl;
    cout << "max_size: " << s.max_size() << endl;

    return 0;    
}