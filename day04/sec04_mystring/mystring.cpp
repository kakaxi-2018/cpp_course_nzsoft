#include "mystring.h"
#include <cstring>
#include <cstdio>
#include <cstdlib>

mystring::mystring(const char *strArg)
{
    if (nullptr == strArg)
    {
        m_str = new char[1];
        *m_str = '\0';
    }
    else
    {
        m_str = new char[strlen(strArg) + 1];
        strcpy(m_str, strArg);
    }
}

mystring::mystring(const mystring & another)
{
    this->m_str = new char[strlen(another.m_str) + 1];
    strcpy(this->m_str, another.m_str);
}

mystring::~mystring()
{
    delete []m_str;
}

mystring & mystring::operator=(const mystring &another)
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

mystring mystring::operator+(const mystring &another)
{
    mystring ms;
    delete []ms.m_str;
    ms.m_str = new char[strlen(this->m_str) + strlen(another.m_str) + 1]{0};
    strcat(strcat(ms.m_str, this->m_str), another.m_str);
    return ms;
}

mystring & mystring::operator+=(const mystring &another)
{
    int catLen = strlen(this->m_str);
    int srcLen = strlen(another.m_str);
    this->m_str = static_cast<char *>(realloc(this->m_str, catLen + srcLen + 1));
    memset(this->m_str + catLen, 0, srcLen + 1);
    strcat(this->m_str, another.m_str);
    return *this;
}

bool mystring::operator>(const mystring &another)
{
    return strcmp(this->m_str, another.m_str) > 0;
}

bool mystring::operator<(const mystring &another)
{
    return strcmp(this->m_str, another.m_str) < 0;
}

bool mystring::operator==(const mystring &another)
{
    return 0 == strcmp(this->m_str, another.m_str);
}

char mystring::at(int n)
{
    return m_str[n];
}

char & mystring::operator[](int n)
{
    return m_str[n];
}


void mystring::dump()
{
    printf("%s\n", m_str);
}