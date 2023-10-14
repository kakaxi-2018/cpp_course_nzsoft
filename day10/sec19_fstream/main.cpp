#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

int main1()
{
    std::fstream fs;
    fs.open("aa.txt", std::ios::in|std::ios::out|std::ios::trunc);

    if (!fs)
    {
        cout << "open error" << endl;
    }

    for (char c = 'a'; c <= 'z'; ++c)
    {
        fs.put(c);
    }

    fs.seekg(0, std::ios::beg);

    char ch;
    while (fs.get(ch))
    {
        cout << ch << endl;
    }

    fs.close();

    return 0;
}

int main2()
{
    std::fstream fs;
    fs.open("abc.txt", std::ios::in|std::ios::out|std::ios::trunc);

    if (!fs)
    {
        cout << "open error" << endl;
    }

    for (char c = 'a'; c < 'z'; ++c)
    {
        fs << c;
    }

    fs.seekg(0, std::ios::beg);

    char ch;

    while (fs >> ch)
    {
        cout << ch << endl;
    }

    fs.close();

    return 0;
}

int main()
{
    std::fstream fs;
    fs.open("mm.txt", std::ios::in|std::ios::out|std::ios::trunc);

    if (!fs)
    {
        cout << "open error" << endl;
    }

    fs << "aaa aa" << endl;
    fs << "bbb bb" << endl;
    fs << "ccc cc" << endl;
    fs << "ddd dd" << endl;

    fs.seekg(0, std::ios::beg);

    char buf[1024];

    /*
    while (fs >> buf)
    {
        cout << buf << endl;
    }
    */

    while (fs.getline(buf, 1024))
    {
        cout << buf << endl;
    }

    fs.close();

    return 0;
}