#include <iostream>
#include <cstdlib>

using std::cout;
using std::endl;

class A
{
public:
    A()
    {
        cout << "A()" << endl;
    }

    ~A()
    {
        cout << "~A()" << endl;
    }

    void dis()
    {
        cout << "dis()" << endl;
    }

    void * operator new(size_t size)
    {
        cout << "operator new" << endl;
        cout << "size: " << size << endl;

        void * pa = malloc(size);
        ((A *)pa)->m_x = 10;
        ((A *)pa)->m_y = 25;

        cout << pa << endl;
        return pa;
    }

    void operator delete(void * pa)
    {
        cout << "operator delete" << endl;
        cout << pa << endl;
        free(pa);
    }

    void * operator new[] (size_t size)
    {
        cout << "operator new[]" << endl;
        cout << "size: " << size << endl;

        void * pa = malloc(size);
        cout << pa << endl;
        return pa;
    }

    void operator delete[] (void * pa)
    {
        cout << "operator delete[]" << endl;
        cout << pa << endl;
        free(pa);
    }

    int m_x;
    int m_y;
};

int main()
{
    //A * pa = new A;
    //pa->dis();
    //delete pa;

    A * ppa = new A[10];
    delete []ppa;

    return 0;
}