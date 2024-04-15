#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

enum class Season : char 
{
    Spring,
    Summer,
    Autumn,
    Winter
};

enum struct XX:long long 
{
    Spring,
    Summer,
    Autumn,
    Winter
};

int main()
{
    //Season s = Season::Spring;

    //XX s2 = XX::Spring;

    //cout << static_cast<int>(Season::Winter) << endl;

    cout << sizeof(XX::Summer) << endl;

    return 0;
}


# if 0
namespace sea {
enum Season {
    Spring,
    Summer,
    Autumn,
    Winter
};
}

namespace xxxx{
enum xx{
    Spring,
    Summer,
    Autumn,
    Winter
};
}

int main()
{
    sea::Season sea = sea::Season::Summer;

    std::fstream f;
    // 下面的 in out trunc 其实也是在类内的枚举类型
    f.open("aa.txt", std::ios::in|std::ios::out|std::ios::trunc);

    return 0;
}
#endif