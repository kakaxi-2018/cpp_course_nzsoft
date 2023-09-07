#include <iostream>
#include <time.h>
#include <unistd.h>
#include <iomanip>

using std::cout;
using std::endl;

class myclock
{
public:
    myclock()
    {
        time_t now = time(nullptr);
        struct tm *tm_now = localtime(&now);;
        m_hour = tm_now->tm_hour;
        m_min = tm_now->tm_min;
        m_sec = tm_now->tm_sec;
    }

    ~myclock()
    {

    }

    void tick()
    {
        sleep(1);

        if (60 == ++m_sec)
        {
            m_sec = 0;

            if (60 == ++m_min)
            {
                m_min = 0;

                if (24 == ++m_hour)
                {
                    m_hour = 0;
                }
            }
        }
    }

    void display()
    {
        system("clear");
        cout << std::setfill('0');
        cout << std::setw(2) << m_hour << ":" 
            << std::setw(2) << m_min << ":" 
            << std::setw(2) << m_sec << endl;
    }

    void run()
    {
        while (1)
        {
            tick();
            display();
        }
    }
private:
    int m_hour;
    int m_min;
    int m_sec;
};

int main()
{
    myclock mc;
    mc.run();

    return 0;
}