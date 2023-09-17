#include <iostream>
using namespace std;

class Sprite
{
    friend void fight(Sprite &s);
public:
    Sprite(int lb = 100)
        :m_lifeBlood(lb)
    {}

    int getLifeBlood()
    {
        return m_lifeBlood;
    }

    void setLifeBlood(int lb)
    {
        m_lifeBlood = lb;
    }
private:
    int m_lifeBlood;
};

void fight(Sprite &s)
{
    //s.setLifeBlood(s.getLifeBlood() - 20);
    //cout << s.getLifeBlood() << endl;

    s.m_lifeBlood -= 20;
    cout << s.m_lifeBlood << endl;
}

int main()
{
    Sprite s(100);
    fight(s);

    return 0;
}