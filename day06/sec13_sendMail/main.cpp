#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Mail
{
    friend class Send;
public:
    Mail(std::string t, std::string c)
        :m_title(t), m_content(c)
    {}
private:
    std::string m_title;
    std::string m_content;
};

class Send
{
public:
    Send(std::string a)
        :m_addr(a)
    {}

    Send & operator<<(const Mail & another);
private:
    std::string m_addr;
};


Send & Send::operator<<(const Mail & another)
{
    cout << another.m_title << endl;
    cout << another.m_content << endl;
    return *this;
}


int main()
{
    Send sender("JackMa@163.com");
    Mail mail("meeting", "about add salary");
    sender << mail;

    cout << "==========" << endl;
    Mail mail2("meeting2", "about cancel meeting");
    sender << mail << mail2;

    return 0;
}