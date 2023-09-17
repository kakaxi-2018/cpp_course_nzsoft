#include "mystring.h"
#include <cstring>

Mystring::Mystring(const char *s)
{
    if (nullptr == s)
    {
        m_str = new char[1];
        *m_str = '\0';
    }
    else
    {
        m_str = new char[strlen(s) + 1];
        strcpy(m_str, s);
    }
}

Mystring::~Mystring()
{
    delete []m_str;
}

Mystring::Mystring(const Mystring &another)
{
    m_str = new char[strlen(another.m_str) + 1];
    strcpy(m_str, another.m_str);
}

Mystring & Mystring::operator=(const Mystring &another)
{
    if (this == &another)
    {
        return *this;
    }

    delete []this->m_str;
    this->m_str = new char[strlen(another.m_str) + 1];
    strcpy(this->m_str, another.m_str);
    return *this;
}

std::istream & operator>>(std::istream &ci, Mystring &ms)
{
    char str[1024];
    ci >> str;
    delete []ms.m_str;
    ms.m_str = new char[strlen(str) + 1];
    strcpy(ms.m_str, str);
    return ci;
}

std::ostream & operator<<(std::ostream &co, Mystring &ms)
{
    co << ms.m_str;
    return co;
}
