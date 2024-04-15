#include <iostream>
#include <vector>
#include <list>
#include <map>
#include <string>

using std::cout;
using std::endl;

int main()
{
    int arr[] = {1, 3, 5, 7, 9};

    std::vector<int> vi;
    std::vector<int> vi2(5);
    std::vector<int> vi3(5, 10);
    std::vector<int> vi4(arr, arr+5);
    std::vector<int> vi5({1, 3, 5, 7, 9});

    /*
    for (auto item: vi5)
    {
        cout << item << " ";
    }
    cout << endl;
    */

    std::list<int> il;
    std::list<int> il2(5);
    std::list<int> il3(5, 10);
    std::list<int> il4(arr, arr+5);
    std::list<int> il5({2, 4, 6, 8, 10});
    
    /*
    for (auto item: il5)
    {
        cout << item << ' ';
    }
    cout << endl;
    */

   std::map<int, std::string> mp;
   mp[1] = "China";
   mp[2] = "America";
   mp[3] = "Canda";

   mp.insert(std::make_pair<int, std::string>(4, "Australia"));

   mp.insert(std::map<int, std::string>::value_type(5, "England"));

   for (auto &item: mp)
   {
        cout << item.first << ' ' << item.second << endl;
   }

    return 0;
}