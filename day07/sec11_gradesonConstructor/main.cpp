#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Student
{
public:
    Student(std::string n, char ch, double s)
        :m_name(n), m_sex(ch), m_score(s)
    {}

    void dis()
    {
        cout << "name : " << m_name << endl;
        cout << "sex  : " << m_sex << endl;
        cout << "score: " << m_score << endl;
    }
private:
    std::string m_name;
    char m_sex;
    double m_score;
};

class Graduate: public Student
{
public:
    Graduate(std::string n, char ch, double s, double sal)
        :Student(n, ch, s)
    {
        m_salary = sal;
    }

    void dump()
    {
        dis();
        cout << "salary: " << m_salary << endl;
    }
private:
    double m_salary;
};

class Doctor: public Graduate
{
public:
    Doctor(std::string n, char ch, double s, double sal, std::string t)
        :Graduate(n, ch, s, sal)
    {
        m_title = t;
    }

    void disDump()
    {
        dump();
        cout << "title: " << m_title << endl;
    }
private:
    std::string m_title;
};

int main()
{
    Doctor d("ZhangSan", 'm', 95.0, 3000.0, "DoctorZhang");
    d.disDump();

    return 0;
}