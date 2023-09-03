#include <iostream>

using std::cout;
using std::endl;

struct Date
{
    void initDate()
    {
        year = 1970;
        month = 1;
        day = 1;
    }

    void disDate()
    {
        cout << year << "-" << month << "-" << day << endl;
    }

    bool isLeapYear()
    {
        if ((0 == year % 4 && year % 100 != 0) || (0 == year % 400))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    int year;
    int month;
    int day;
};

int main()
{
    Date d;
    d.initDate();
    d.disDate();

    cout << "after modify date" << endl;
    d.year = 2016;
    d.month = 5;
    d.day = 5;
    d.disDate();

    if (d.isLeapYear())
    {
        cout << "leap year" << endl;
    }
    else
    {
        cout << "not leap year" << endl;
    }

    return 0;
}