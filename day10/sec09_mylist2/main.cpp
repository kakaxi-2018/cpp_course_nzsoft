#include <iostream>
#include "mylist.hpp"

using namespace listspace;

using std::cout;
using std::endl;

int main()
{
    GenericList<int> first_list(2);
    first_list.add(1);
    first_list.add(2);
    cout << "first_list: \n"
         << first_list;

    cout << "==========" << endl;
    GenericList<char> second_list(10);
    second_list.add('A');
    second_list.add('B');
    second_list.add('c');
    cout << "second_list: \n"
         << second_list;

    return 0;
}