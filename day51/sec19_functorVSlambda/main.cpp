#include <iostream>

using std::cout;
using std::endl;
using std::cin;

class Tax
{
public:
    Tax(float r, float b)
        : _rate(r), _base(b)
    {}

    float operator()(float money)
    {
        return (money - _base) * _rate;
    }
private:
    float _rate;
    float _base;
};

// 仿函数
int main1()
{
    Tax high(0.3, 30000);
    Tax middle(0.2, 15000);
    Tax low(0.1, 3500);

    double salary;
    cout << "please input your salary: ";
    cin >> salary;

    if (salary > 30000)
    {
        cout << high(salary) << endl;
    }
    else if (salary > 15000)
    {
        cout << middle(salary) << endl;
    }
    else
    {
        cout << low(salary) << endl;
    }

    return 0;
}


// lamba
int main()
{
    double highRate = 0.3;
    double highBase = 30000;
    auto high = [highRate, highBase] (double money) {
        return (money-highBase) * highRate;
    };

    double midRate = 0.2;
    double midBase = 20000;
    auto mid = [midRate, midBase] (double money) {
        return (money-midBase) * midRate;
    };

    double lowRate = 0.1;
    double lowBase = 3500;
    auto low = [lowRate, lowBase] (double money) {
        return (money-lowBase) * lowRate;
    };

    cout << "please input your salary: ";
    double salary;
    cin >> salary;

    if (salary > 30000)
    {
        cout << high(salary) << endl;
    }
    else if (salary > 20000)
    {
        cout << mid(salary) << endl;
    }
    else
    {
        cout << low(salary) << endl;
    }

    return 0;
}