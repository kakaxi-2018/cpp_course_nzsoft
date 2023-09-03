#include <iostream>

using std::cout;
using std::endl;

struct Date
{
    public:
        Date(int y = 1970, int m = 1, int d = 1)
            :m_year(y), m_month(m), m_day(d)
        {}

        ~Date()
        {
            cout << "~Date()" << endl;
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
    {
        Date d;
        d.dis();
    }

    cout << "==========" << endl;
    Date *pd = new Date(2016);
    pd->dis();
    delete pd;

    return 0;
}