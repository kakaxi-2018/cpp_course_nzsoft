#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

struct Stu
{
    char *name;
    int age;   
};

// wrong method 
int main1()
{
    Stu s;
    // note: there is a problem
    strcpy(s.name, "China");
    s.age = 19;

    return 0;
}

// wrong method
int main2()
{
    Stu *ps = new Stu;
    // note: there is a problem
    strcpy(ps->name, "China");
    ps->age = 19;

    return 0;
}

int main()
{
    Stu *ps = new Stu;
    ps->name = new char[50];
    strcpy(ps->name, "XiaoMing");
    ps->age = 19;

    delete []ps->name;  // don't leave out []
    delete ps;

    return 0;
}