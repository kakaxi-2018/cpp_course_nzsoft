#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    A(char ch = '\0')
        :m_str(new char(ch))
    {}

    ~A()
    {
        // sometime do it in this way 
        if (nullptr != m_str)
        {
            delete m_str;
            m_str = nullptr;
        }
    }

    A(const A &another)
    {
        *m_str = *(another.m_str);
    }

    A & operator=(const A &another)
    {
        *m_str = *(another.m_str);
        return *this;
    }
private:
    char *m_str;
};

int main()
{
    A a, b, c;
    a = b = c;
    (a = b) = c;

    return 0;
}