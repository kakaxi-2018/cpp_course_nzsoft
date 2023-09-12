#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Student
{
public:
    Student(std::string n, int a)
        :m_name(n), m_age(a)
    {}

    std::string m_name;
    int m_age; 
};

int main()
{
    Student s("Bruce", 19);
    Student s2("Mike", 18);

    Student *ps = &s;
    Student *ps2 = &s2;

    //std::string *pstr = &s.m_name;  // note: the encapsulation is broken

    cout << "==========" << endl;
    // based on class
    // has little value, because member is always private
    std::string Student::*pstr = &Student::m_name;

    cout << s.*pstr << endl;
    cout << ps->*pstr << endl;

    cout << s2.*pstr << endl;
    cout << ps2->*pstr << endl;

    return 0;
}