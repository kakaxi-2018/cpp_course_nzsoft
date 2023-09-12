#include <iostream>
#include <string>

using std::cout;
using std::endl;

class University
{
public:
    University(std::string t, std::string l)
        :m_tower(t), m_lake(l)
    {}

    void dis()
    {
        cout << m_tower << " |" << m_lake << " |" << m_lib << endl;
    }

    static std::string & getLib()
    {
        return m_lib;
    }
private:
    std::string m_tower;
    std::string m_lake;
    static std::string m_lib;
};

std::string University::m_lib = "";

int main()
{
    University PK("boyaTower", "weimingLake");
    PK.getLib() += "JiuYinZhenJing";
    PK.dis();

    University BS("LeiFengTower", "DaMingLake");
    BS.getLib() += " ChinaWaJueJinaJiaQiang";
    BS.dis();

    University XDF("DianShiTower", "SouXiHuLake");
    XDF.getLib() += " YaoCHuGuoZhaoWo";
    XDF.dis();

    return 0;
}