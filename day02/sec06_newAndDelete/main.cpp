#include <iostream>
#include <string>

using std::cout;
using std::endl;

struct Stu
{
    std::string name;
    char sex;
    int score;
};

int main1()
{
    //int *p = (int *)malloc(sizeof(int) * 10);
    int *p2 = new int(10);
    cout << *p2 << endl;
    delete p2;

    cout << "==========" << endl;
    Stu *ps = new Stu;
    delete ps;

    return 0;
}

int main2()
{
    float *p = new float[10]{1.2, 3.4, 4.5};

    for (int i = 0; i < 10; ++i)
    {
        cout << p[i] << endl;
    }

    delete []p;

    cout << "==========" << endl;
    char **pp = new char *[11];
    char **t = pp;

    for (int i = 0; i < 10; ++i)
    {
        pp[i] = (char *)("Apple");
    }

    pp[10] = nullptr;

    while (*pp)
    {
        cout << *pp++ << endl;
    }

    delete []t;

    return 0;
}

// two dimensions
int main3()
{
    int (*pa)[5] = new int[3][5];

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            pa[i][j] = i + j;
        }
    }

    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 5; ++j)
        {
            cout << pa[i][j] << " ";
        }

        cout << endl;
    }

    delete []pa;

    return 0;
}

// multidimensional array
int main4()
{
    int (*pa)[3][5] = new int[2][3][5];

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 5; ++k)
            {
                pa[i][j][k] = i + j + k;
            }
        }
    }

    for (int i = 0; i < 2; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 5; ++k)
            {
                cout << pa[i][j][k] << " ";
            }

            cout << endl;
        }

        cout << "==========" << endl;
    }

    delete []pa;

    return 0;
}

int main5()
{
    // variate
    int *p = new int;
    delete p;

    // pointer array
    int **pp = new int *[10];
    delete []pp;

    // array
    int (*pArray)[5] = new int [3][5];
    delete []pArray;

    return 0;
}

int main()
{
    int *pi = new int(42);
    cout << pi << endl;
    cout << *pi << endl;

    // string and int, analogy
    std::string *p = new std::string("beef");
    cout << p << endl;
    cout << *p << endl;

    char *q = (char *)"banana";
    cout << q << endl;
    cout << *q << endl;

    return 0;
}