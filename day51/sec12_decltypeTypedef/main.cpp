#include <iostream>
#include <map>
#include <string>

using std::cout;
using std::endl;

int main()
{
    std::map<int, std::string> mp;
    mp.insert(std::map<int, std::string>::value_type(1, "China"));

    //typedef decltype(std::map<int, std::string>::value_type(1, "China")) MyPair;
    typedef decltype(std::map<int, std::string>::value_type()) MyPair;
    mp.insert(MyPair(2, "America"));

    for (auto &item: mp)
    {
        cout << item.first << ' ' << item.second << endl;
    }
    

    return 0;
}