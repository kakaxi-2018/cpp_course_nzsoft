#include <iostream>

using std::cout;
using std::endl;
using std::cin;

int main()
{
    int integerVal;
    cout << "Before a bad input operation:"
        << "\n cin.eof(): " << cin.eof()
        << "\n cin.fail(): " << cin.fail()
        << "\n cin.bad(): " << cin.bad()
        << "\n cin.good(): " << cin.good()
        << endl;
    cin >> integerVal;
    cout << "After a bad input operation:"
        << "\n cin.eof(): " << cin.eof()
        << "\n cin.fail(): " << cin.fail()
        << "\n cin.bad(): " << cin.bad()
        << "\n cin.good(): " << cin.good()
        << endl;
    cin.clear();
    cout << "after clear:"
        << "\n cin.eof(): " << cin.eof()
        << "\n cin.fail(): " << cin.fail()
        << "\n cin.bad(): " << cin.bad()
        << "\n cin.good(): " << cin.good()
        << endl;


    return 0;
}