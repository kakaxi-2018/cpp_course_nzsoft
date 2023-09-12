#include <iostream>

using std::cout;
using std::endl;

class Singleton
{
public:
    static Singleton * getSingleton()
    {
        if (nullptr == m_ins)
        {
            m_ins = new Singleton;
        }

        return m_ins;
    }

    static void releaseInstance()
    {
        if (nullptr != m_ins)
        {
            delete m_ins;
            m_ins = nullptr;
        }
    }
private:
    Singleton()
    {}
    ~Singleton()
    {}
    Singleton(const Singleton &)
    {}
    Singleton & operator=(const Singleton &)
    {
        return *this;
    }

    static Singleton *m_ins;
};

Singleton * Singleton::m_ins = nullptr;

int main()
{
    //Singleton s;  // compile error: inaccessible
    //Singleton *ps = new Singleton;  // compile error: inaccessible

    Singleton *ps = Singleton::getSingleton();
    Singleton *ps2 = Singleton::getSingleton();
    Singleton *ps3 = Singleton::getSingleton();

    cout << ps << endl;
    cout << ps2 << endl;
    cout << ps3 << endl;

    //Singleton t;  // error: inaccessible
    //Singleton t2(t);  // error: inaccessible
    //*ps = *ps;  // error: inacessible

    //delete ps;  // error: inaccessible

    Singleton::releaseInstance();

    return 0;
}