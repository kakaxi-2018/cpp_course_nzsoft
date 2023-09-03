#include <iostream>

using std::cout;
using std::endl;

class Birthday
{
public:
    Birthday()
        :m_year(new int(1970)), m_month(new int(1)), m_day(new int(1))
    {
        cout << "Birthday()" << endl;
    }

    ~Birthday()
    {
        cout << "~Birthday()" << endl;
        delete m_year;
        delete m_month;
        delete m_day;
    }
private:
    int *m_year;
    int *m_month;
    int *m_day;
};

struct Stu 
{
public:
    Stu()
        :m_name(new char[1024]), m_age(18)
    {
        cout << "Stu()" << endl;
    }

    ~Stu()
    {
        delete []m_name;
        cout << "~Stu()" << endl;
    }
private:
    char *m_name;
    int m_age;
    Birthday birth;
};

int main()
{
    {
        Stu s;
    }

    cout << "==========" << endl;

    Stu *ps = new Stu;
    delete ps;

    return 0;
}