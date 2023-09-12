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

    void dis(int idx)
    {
        cout << "idx: " << idx << endl;
    }
private:
    std::string m_name;
    int m_age;
};

int main()
{
    Student s("ZhangSan", 17);
    Student s2("Richard", 16);

    Student *ps = &s;
    Student *ps2 = &s2;

    void (Student::*pFunc)(int) = &Student::dis;
    (s.*pFunc)(10);
    (s2.*pFunc)(20);

    (ps->*pFunc)(15);
    (ps2->*pFunc)(25);

    return 0;
}