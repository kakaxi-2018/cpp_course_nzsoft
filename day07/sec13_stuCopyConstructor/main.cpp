#include <iostream>

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

    Student(const Student & another)
    {
        cout << "Student(const Student & another)" << endl;

        this->m_name = another.m_name;
        this->m_sex = another.m_sex;
        this->m_score = another.m_score;
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

    Birthday(const Birthday & another)
    {
        cout << "Birthday(const Birthday & another)" << endl;
        this->m_year = another.m_year;
        this->m_month = another.m_month;
        this->m_day = another.m_day;
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

    Graduate(const Graduate & another)
        :Student(another), m_birth(another.m_birth)
    {
        cout << "Graduate(const Graduate & another)" << endl;
        this->m_salary = another.m_salary;
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
    Graduate g("ZhangSan", 'm', 95.0, 1000.0, 1989, 9, 14);
    g.dump();
    cout << "==========" << endl;
    Graduate gg(g);
    gg.dump();

    return 0;
}