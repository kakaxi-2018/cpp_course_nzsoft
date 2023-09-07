#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Stu
{
public:
    Stu(std::string n = "WangWu")
    {
        m_name = n;
    }

    void dis()
    {
        cout << m_name << endl;
    }
private:
    std::string m_name;
};

int main()
{
    Stu s[5] = {Stu("ZhangSan"), Stu("LiSi")};

    for (int i = 0; i < 5; ++i)
    {
        s[i].dis();
    }

    cout << "==========" << endl;
    Stu *pStu = new Stu;
    delete pStu;

    Stu *ps = new Stu[5]{Stu("ZhangSan"), Stu("LiSi"), Stu("Jack")};

    for (int i = 0; i < 5; ++i)
    {
        ps[i].dis();
    }

    delete []ps;

    return 0;
}