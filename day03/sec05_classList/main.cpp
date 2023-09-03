#include <iostream>
#include "mylist.h"

using std::cout;
using std::endl;

int main()
{
    myList ml;

    ml.initList();

    for (int i = 0; i < 10; ++i)
    {
        ml.insertList(i);
    }

    ml.traverseList();
    cout << "==========" << endl;
    ml.traverseList();
    ml.destroyList();

    return 0;
}