#include <iostream>

using std::cout;
using std::endl;

int main()
{
    int a = 1234;
    cout << a << endl;
    std::string s = std::to_string(a);
    cout << "s: " << s << endl;

    cout << "==========" << endl;
    std::string s2("123x45abcd555");
    int b = std::stoi(s2);
    cout << "b = " << b << endl;

    return 0;
}