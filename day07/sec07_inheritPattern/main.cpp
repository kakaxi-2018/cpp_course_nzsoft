#include <iostream>

using std::cout;
using std::endl;

class A
{
public:
    int m_pub;
protected:
    int m_pro;
private:
    int m_pri;
};

class B: public A
{
public:
    int m_ppub;

    void dis()
    {
        cout << m_pub << endl;
        cout << m_pro << endl;
        //cout << m_pri << endl;  // inaccessible
    }
protected:
    int m_ppro;
private:
    int m_ppri;
};

class C: public B
{
public:
    void dump()
    {
        cout << m_ppub << endl;
        cout << m_ppro << endl;
        //cout << m_ppri << endl;  // inaccessible
    }
protected:
private:
};

int main()
{
    B bb;
    cout << bb.m_pub << endl;
    //cout << bb.m_pro << endl;  // inaccessible

    cout << bb.m_ppub << endl;
    //cout << bb.m_ppro << endl;  // inaccessible

    cout << "sizee(A): " << sizeof(A) << endl;
    cout << "sizee(B): " << sizeof(B) << endl;

    return 0;
}