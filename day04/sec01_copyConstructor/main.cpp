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
    int a = 0;  // 初始化
    a = 5;  // 赋值

    int b = a;  // 初始化

    Date d(2018, 5, 5);
    d.dis();

    Date dd(d);
    dd.dis();

    cout << sizeof(d) << " " << sizeof(dd) << endl;

    return 0;
}