#include <iostream>

using std::cout;
using std::endl;
class Student
{
    friend std::ostream & operator<<(std::ostream & co, const Student & stu);
public:
    Student(std::string n, char ch, double d)
        :m_name(n), m_sex(ch), m_score(d)
    {
        cout << "Student()" << endl;
    }

private:
    std::string m_name;
    char m_sex;
    double m_score;
};

std::ostream & operator<<(std::ostream & co, const Student & stu)
{
    co << "name : " << stu.m_name;
    co << " sex  : " << stu.m_sex;
    co << " score: " << stu.m_score;

    return co;
}

class Graduate: public Student
{
    friend std::ostream & operator<<(std::ostream & co, const Graduate & g);
public:
    Graduate(std::string n, char ch, double sco, double sa)
        :Student(n, ch, sco)
    {
        cout << "Graduate()" << endl;
        m_salary  = sa;
    }

private:
    double m_salary;
};

std::ostream & operator<<(std::ostream & co, const Graduate & g)
{
    co << static_cast<const Student &>(g);
    co << " salary: " << g.m_salary;

    return co;
}

int main()
{
    Graduate g("ZhangSan", 'f', 88.0, 1000.0);
    cout << g;

    return 0;
}