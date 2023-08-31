#include <iostream>

using std::cout;
using std::endl;

int main1()
{
    double *pd[50];

    try
    {
        for (int i = 0; i < 50; ++i)
        {
            cout << i << endl;
            pd[i] = new double[500000000];
        }
    }
    catch (std::bad_alloc & e)
    {
        cout << e.what() << endl;
        cout << "xxxxxxxxxx" <<endl;
    }

    return 0;
}

void newError()
{
    cout << "new error" << endl;
    exit(1);
}

int main2()
{
    double *pd[50];
    std::set_new_handler(newError);

    for (int i = 0; i < 50; ++i)
    {
        cout << i << endl;
        pd[i] = new double[500000000];
    }

    return 0;
}

int main()
{
    double *pd[50];

    for (int i = 0; i < 50; ++i)
    {
        cout << i << endl;
        pd[i] = new (std::nothrow)double[500000000];

        if (pd[i] == nullptr)
        {
            cout << "new error " << __FILE__ << " " << __func__ << " "
                << __LINE__ << endl;
            exit(-1);
        }
    }

    return 0;
}