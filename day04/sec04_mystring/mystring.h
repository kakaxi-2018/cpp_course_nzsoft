#ifndef __MYSTRING_H__
#define __MYSTRING_H__

class mystring
{
public:
    mystring(const char *strArg = nullptr);
    mystring(const mystring &another);
    ~mystring();
    mystring & operator=(const mystring &another);
    mystring operator+(const mystring &another);
    mystring & operator+=(const mystring &another);
    bool operator>(const mystring &another);
    bool operator<(const mystring &another);
    bool operator==(const mystring &another);
    char at(int n);
    char & operator[](int n);
    void dump();
private:
    char * m_str;
};

#endif