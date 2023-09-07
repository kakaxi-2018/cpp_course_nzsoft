#include <iostream>
#include <string>

using std::cout;
using std::endl;

#if 0
class Stu
{
public:
    Stu()
    {
        cout << this << "----A()" << endl;
    }

    ~Stu()
    {
        cout << this << "----~A()" << endl;
    }
private:
    int age;
};

int main()
{
    Stu s;
    cout << &s << endl;

    cout << "==========" << endl;

    Stu s2;
    cout << &s2 << endl;

    return 0;
}
#endif

#if 0
class Stu
{
public:
    Stu()
    {
        cout << this << "----A()" << endl;
    }

    ~Stu()
    {
        cout << this << "----~A()" << endl;
    }
private:
    int age;
};

int main()
{
    cout << sizeof(Stu) << endl;

    return 0;
}
#endif

class Stu
{
public:
    Stu(std::string sn = "", int a = 18)
        :m_name(sn), m_age(a)
        {
        }

    ~Stu()
    {
    }

    void dis()
    {
        cout << m_name << " " << m_age << endl;
    }

    Stu & growup()
    {
        ++this->m_age;
        return *this;
    }
private:
    std::string m_name;
    int m_age;
};

int main()
{
    Stu s("ZhangSan", 18);
    s.dis();

    s.growup().growup().growup();
    s.dis();

    return 0;
}