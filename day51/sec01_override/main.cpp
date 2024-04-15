#include <iostream>

using std::cout;
using std::endl;

class G
{
public:
    virtual void func()
    {}
private:
};

class H: public G
{
public:
    virtual void func() override
    {
        cout << "H::func()" << endl;
    }
private:
};

int main()
{
    G * g = new H;
    g->func();
    delete g;

    return 0;
}