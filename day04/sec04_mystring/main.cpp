#include <iostream>
#include <string>
#include "mystring.h"

using std::cout;
using std::endl;

int main()
{
    std::string s;
    std::string s2("apple");
    std::string s3;
    s3 = s2;
    std::string s4("I like ");
    std::string s5("banana, ");
    s4 += s5 += s2;

    cout << "s : " << s << endl;
    cout << "s2: " << s2 << endl;
    cout << "s3: " << s3 << endl;
    cout << "s4: " << s4 << endl;
    cout << "s5: " << s5 << endl;

    s3 = "appl";

    if (s3 > s2)
    {
        cout << ">" << endl;
    }
    else if (s3 < s2)
    {
        cout << "<" << endl;
    }

    if (s3 == s2)
    {
        cout << "==" << endl;
    }

    cout << s3.at(0) << endl;
    cout << s3[0] << endl;
    
    cout << "===============" << endl;
    mystring ms;
    mystring ms2((char *)"apple");
    mystring ms3;
    ms3 = ms2;
    mystring ms4("I like ");
    mystring ms5("banana, ");
    ms4 += ms5 += ms2;

    ms.dump();
    ms2.dump();
    ms3.dump();
    ms4.dump();
    ms5.dump();

    ms3 = "appl";

    if (ms3 > ms2)
    {
        cout << ">" << endl;
    }
    else if (ms3 < ms2)
    {
        cout << "<" << endl;
    }

    if (ms3 == ms2)
    {
        cout << "==" << endl;
    }

    cout << ms3.at(0) << endl;
    cout << ms3[0] << endl;

    mystring ms6 = ms3 + ms2;
    ms6.dump();

    return 0;
}