#include <iostream>
#include <string>

using std::cout;
using std::endl;

class IReader
{
public:
    virtual std::string getContent() = 0;
protected:
};

class Book: public IReader
{
public:
    Book(std::string s)
        :m_content(s)
    {}

    virtual std::string getContent() override
    {
        return m_content;
    }
protected:
    std::string m_content;
};

class Newspapers: public IReader
{
public:
    Newspapers(std::string s)
        :m_news(s)
    {}

    virtual std::string getContent() override
    {
        return m_news;
    }
protected:
    std::string m_news;
};

class Ebook: public IReader
{
public:
    Ebook(std::string e)
        :m_eb(e)
    {}

    virtual std::string getContent() override
    {
        return m_eb;
    }

protected:
    std::string m_eb;
};

class Mother
{
public:
    /*
    void read(Book & b)
    {
        cout << b.getContent() << endl;
    }

    void read(Newspapers & n)
    {
        cout << n.getContent() << endl;
    }
    */

    void read(IReader * ir)
    {
        cout << ir->getContent() << endl;
    }

protected:
};

int main()
{
    Mother m;
    Book b("100000 why?");
    m.read(&b);

    Newspapers news("international news");
    m.read(&news);

    Ebook eb("code complete");
    m.read(&eb);

    return 0;
}