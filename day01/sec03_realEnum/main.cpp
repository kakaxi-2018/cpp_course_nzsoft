#include <iostream>

using std::cout;
using std::endl;

enum Day
{
    Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday
};

int main()
{
    Day d = Monday;
    //Day d2 = 100;  // error, 'int' to 'day'
    Day d3 = Sunday;
    cout << "d3 = " << d3 << endl;

    return 0;
}