#include <iostream>
#include <string>

// explicit

using std::cout;
using std::endl;

class Mystring
{
public:
    explicit Mystring(const char * s = nullptr)
    {
        cout << "Mystring()" << endl;
    }

    Mystring(const Mystring & another)
    {
        cout << "Mystring(const Mystring & another)" << endl;
    }

    Mystring & operator=(const Mystring & another)
    {
        cout << "Mystring & operator=(const Mystring & another)" << endl;
        return *this;
    }
private:
    char * m_str;
};

class Stack
{
public:
    explicit Stack(int size = 1024)
    {}
};

int main()
{
    std::string s;  // constructor, default
    std::string s2("apple");  // constructor
    std::string s3(s2);  // copy constructor
    std::string s4 = s3;  // copy constructor, implicit
    std::string s5;
    s5 = s4;  // operator assignment


    cout << "==========" << endl;
    Mystring ms;
    Mystring ms2("apple");
    Mystring ms3(ms2);
    Mystring ms4 = ms3;
    Mystring ms5;
    ms5 = ms4;

    cout << "==========" << endl;
    //Mystring ms6 = "apple";  // constructor, implicit
    //Mystring ms6("apple");  // constructor
    //Mystring ms6 = Mystring("apple");  // constructor
    Mystring ms6 = static_cast<Mystring>("apple");

    cout << "==========" << endl;
    //Stack stack(100);  // constructor
    //Stack stack = 100;  // constructor, implicit
    //Stack stack = (Stack)100;
    Stack stack = static_cast<Stack>(100);

    return 0;
}