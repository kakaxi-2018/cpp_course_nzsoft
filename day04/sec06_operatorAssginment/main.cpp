#include <iostream>

using std::cout;
using std::endl;

struct Date
{
public:
    Date(int y = 1970, int m = 1, int d = 1)
        :m_year(y), m_month(m), m_day(d)
    {
    }        

    ~Date()
    {
    }

    Date & operator=(const Date &another)
    {
        this->m_year= another.m_year;
        this->m_month = another.m_month;
        this->m_day = another.m_day;
        return *this;
    }

    void dis()
    {
        cout << m_year << "-" << m_month << "-" << m_day << endl;
    }

private:
    int m_year;
    int m_month;
    int m_day;
};

int main()
{
    Date d(1999, 9, 1);
    d.dis();

    //cout << d.m_year << endl;  // is private

    Date d2;
    Date d3;

    d3 = d2 = d;
    //d3.operator=(d2.operator=(d));
    d2.dis();
    d3.dis();

    return 0;
}