#include <iostream>
#include <string>
#include <unistd.h>

using std::cout;
using std::endl;

class Car
{
public:
    Car(std::string b = "RedFlag", std::string c = "Red", double o = 0.0)
        :m_brand(b), m_color(c), m_oil(o)
    {}

    ~Car()
    {}

    void addOil(double o)
    {
        m_oil += o;
    }

    int run()
    {
        if (m_oil <= 0)
        {
            cout << "oil less than 0, need add oil" << endl;
            return 0;
        }

        --m_oil;
        sleep(1);
        cout << "running... oil: " << m_oil << endl;
        return 1;
    }
private:
    std::string m_brand;
    std::string m_color;
    double m_oil;
};

int main()
{
    Car c;
    c.addOil(15);

    while (1)
    {
        int ret = c.run();

        if (!ret)
        {
            break;
        }
    }

    return 0;
}