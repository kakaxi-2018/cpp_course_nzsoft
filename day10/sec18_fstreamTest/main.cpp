#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

int main1()
{
    std::fstream fs("aa.txt", std::ios::in|std::ios::out|std::ios::trunc);

    if (!fs)
    {
        cout << "open error" << endl;
    }

    fs.put('a');
    fs.put('b');
    fs.put('c');
    fs.put('d');

    fs.seekp(0, std::ios::beg);

    char ch;

    while (fs.get(ch), !fs.eof())
    {
        cout << ch;
    }

    fs.close();


    return 0;
}

class myfstream
{
public:
    myfstream(const char * path, const char * mode)
    {
        pf = fopen(path, mode);

        if (nullptr == pf)
        {
            flag = false;
        }

        flag = true;
    }

    bool operator!()
    {
        return !flag;
    }
private:
    FILE * pf;
    bool flag;
};

int main()
{
    myfstream mfs("abc.txt", "w");

    if (!mfs)
    {
        cout << "abcdefg" << endl;
    }

    return 0;
}