#include <iostream>
#include <string>
#include "mystring.h"

using std::cout;
using std::endl;
using std::cin;

int main()
{
    std::string s;
    std::string s2("apple");
    std::string s3(s2);
    std::string s4;
    s4 = s3;
    std::string s5;
    cin >> s5;

    cout << s << endl;
    cout << s2 << endl;
    cout << s3 << endl;
    cout << s4 << endl;
    cout << s5 << endl;
    
    cout << "==========" << endl;
    Mystring ms;
    Mystring ms2("apple");
    Mystring ms3(ms2);
    Mystring ms4;
    ms4 = ms3;
    Mystring ms5;
    cin >> ms5; 

    cout << ms << endl; 
    cout << ms2 << endl; 
    cout << ms3 << endl; 
    cout << ms4 << endl; 
    cout << ms5 << endl;

    return 0;
}