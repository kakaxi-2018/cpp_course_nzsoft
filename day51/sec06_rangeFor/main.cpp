#include <iostream>
#include <map>
#include <vector>
#include <string>

using std::cout;
using std::endl;

int main1()
{
    // 这种的为什么能使用呢？ 有大括号 {}，做了单独的处理 begin end
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int i = 0; i < sizeof(arr)/sizeof(*arr); ++i)
    {
        cout << arr[i] << endl;
    }

    cout << "\n==========" << endl;
    for (auto i : arr)
    {
        cout << i << endl;
    }

    cout << "\n==========" << endl;
    // 这种的不能使用，涉及到 STL 中的 begin end 概念
    //char *p = "China";
    // 这种的数组形式就可以
    char p[] = "China";
    for (auto &c: p)
    {
        cout << c << ' ';
    }

    cout << "\n==========" << endl;
    std::vector<int> vec(arr, arr+10);

    for (auto item: vec)
    {
        cout << item << ' ' << endl;
    }

    cout << "\n==========" << endl;
    // 之前的做法
    std::vector<int>::iterator itr;
    for (itr = vec.begin(); itr != vec.end(); ++itr)
    {
        cout << *itr << ' ';
    }

    return 0;
}

int main()
{
    std::map<int, std::string> mp;
    mp[0] = "China";
    mp[1] = "Canda";
    mp[2] = "France";
    mp.insert({3, "English"});

    std::map<int, std::string>::iterator itr = mp.begin();
    for (; itr != mp.end(); ++itr)
    {
        cout << (*itr).first << '-' << itr->second << endl;
    }

    for (auto &item: mp)
    {
        // note: 这个 item 本身就里面的成员了
        cout << item.first << ' ' << item.second << endl;
    }

    return 0;
}