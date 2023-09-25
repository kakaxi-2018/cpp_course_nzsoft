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

    Student & operator=(const Student & another)
    {
        cout << "Student & operator=(const Student & another)" << endl;

        if (this == &another)
        {
            return *this;
        }

        this->m_name = another.m_name;
        this->m_sex = another.m_sex;
        this->m_score = another.m_score;
        return *this;
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
    {}

    Birthday & operator=(const Birthday & another)
    {
        cout << "Birthday & operator=(const Birthday & another)" << endl;

        if (this == &another)
        {
            return *this;
        }

        this->m_year = another.m_year;
        this->m_month = another.m_month;
        this->m_day = another.m_day;
        return *this;
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
    Graduate(std::string n, char ch, double s, double sa, int y, int m, int d)
        :Student(n, ch, s), m_birth(y, m, d)
    {
        m_salary = sa;
    }

    Graduate & operator=(const Graduate & another)
    {
        cout << "Graduate & operator=(const Graduate & another)" << endl;

        if (this == &another)
        {
            return *this;
        }

        Student::operator=(another);
        this->m_birth = another.m_birth;
        this->m_salary = another.m_salary;
        return * this;
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
    Graduate g("ZhangSan", 'f', 88.0, 1000.0, 1995, 6, 5);
    g.dump();
    cout << "==========" << endl;
    Graduate gg("Lisi", 'm', 98.0, 3000.0, 1999, 9, 5);
    gg = g;
    gg.dump();

    return 0;
}