#ifndef __MYSTRING_H__
#define __MYSTRING_H__

#include <iostream>

class Mystring
{
    friend std::istream & operator>>(std::istream & ci, Mystring & ms);
    friend std::ostream & operator<<(std::ostream & co, Mystring & ms);
public:
    Mystring(const char * str = nullptr);
    ~Mystring();
    Mystring(const Mystring & another);
    Mystring & operator=(const Mystring & another);

private:
    char * m_str;
};


#endif