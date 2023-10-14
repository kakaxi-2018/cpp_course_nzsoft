#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

int main()
{
    std::fstream fs("aa.txt", std::ios::in | std::ios::out | std::ios::trunc);

    if (!fs)
    {
        cout << "open error" << endl;
    }

    fs << 1 << " " << 2 << " " << 3;

    fs.seekg(0, std::ios::beg);
    int a, b, c;
    fs >> a >> b >> c; 

    cout << "a = " << a << " b = " << b << " c = " << c << endl;


    return 0;
}