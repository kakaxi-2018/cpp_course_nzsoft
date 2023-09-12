#include <iostream>

using std::cout;
using std::endl;

class Time
{
public:
    Time(int h = 0, int m = 0, int s = 0)
        :m_hour(h), m_min(m), m_sec(s)
    {}

    /*
    void dis()
    {
        cout << m_hour << ":" << m_min << ":" << m_sec << endl;
    }
    */

    void dis(Time *pt)
    {
        cout << pt->m_hour << ":" << pt->m_min << ":" << pt->m_sec << endl;
    }
private:
    int m_hour;
    int m_min;
    int m_sec;
};

int main()
{
    Time t(16, 3, 10);
    cout << sizeof(Time) << endl;
    cout << sizeof(t) << endl;

    t.dis(&t);

    return 0;
}