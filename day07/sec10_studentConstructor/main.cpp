#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Student
{
public:
    Student(std::string n, char ch, double d)
        :m_name(n), m_sex(ch), m_score(d)
    {
        cout << "Student()" << endl;
    }

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

class Birthday
{
public:
    Birthday(int y, int m, int d)
        :m_year(y), m_month(m), m_day(d)
    {
        cout << "Birthday()" << endl;
    }

    void disBirth()
    {
        cout << "year : " << m_year << endl;
        cout << "month: " << m_month << endl;
        cout << "day  :" << m_day << endl;
    }
private:
    int m_year;
    int m_month;
    int m_day;
};

class Graduate: public Student
{
public:
    Graduate(std::string n, char ch, double sco, double sa, int y, int m, int d)
        :Student(n, ch, sco), m_birth(y, m, d)
    {
        cout << "Graduate()" << endl;
        m_salary  = sa;
    }

    void dump()
    {
        dis();
        m_birth.disBirth();
        cout << "salary: " << m_salary << endl;
    }
private:
    double m_salary;
    Birthday m_birth;
};

int main()
{
    Graduate g("ZhangSan", 'm', 85.0, 1000.0, 1989, 2, 15);
    g.dump();

    return 0;
}