#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class DataStr
{
public:
    DataStr()
        :m_str(new char[1024]{0})
    {
        strcpy(m_str, "C++ is the best language!");
    }

    DataStr(const DataStr &another)
    {
        m_str = new char[strlen(another.m_str)+1];
        strcpy(m_str, another.m_str);
    }

    ~DataStr()
    {
        delete []m_str;
    }

    void dis()
    {
        cout << m_str << endl;
    }

    void setStr(char *s)
    {
        strcpy(m_str, s);
    }
private:
    char *m_str;
};

int main()
{
    DataStr s;
    s.dis();

    DataStr s2(s);
    s2.dis();

    s.setStr((char *)"PHP is the best language!");
    s2.dis();


    return 0;
}