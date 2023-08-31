#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::endl;

int main()
{
    std::vector<std::string> vec;

    FILE *pf = fopen("aa.txt", "r");

    if (nullptr == pf)
    {
        exit(-1);
    }

    char buf[1024];
    std::string s;

    while (fgets(buf, 1024, pf) != nullptr)
    {
        s = buf;
        vec.push_back(s);
    }

    fclose(pf);

    for (auto item : vec)
    {
        cout << item;
    }

    return 0;
}