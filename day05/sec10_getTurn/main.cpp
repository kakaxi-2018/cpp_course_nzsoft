#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::cin;

class Server
{
public:
    Server(std::string n) 
        :m_name(n)
    {}

    void run();
    static bool stillOpen();
    static int & getTurnCount();
private:
    static int m_turnCount;
    static int m_lastTurnIdx;
    static bool m_turnFlag;
    std::string m_name;
};

int Server::m_turnCount = 0;
int Server::m_lastTurnIdx = 0;
bool Server::m_turnFlag = true;

void Server::run()
{
    if (m_turnFlag && m_lastTurnIdx < m_turnCount)
    {
        ++m_lastTurnIdx;
        cout << "server: " << this->m_name << " is serving " 
            << m_lastTurnIdx << endl;
    }

    if (m_lastTurnIdx >= m_turnCount)
    {
        m_turnFlag = false;
    }
}

bool Server::stillOpen()
{
    return m_turnFlag;
}

int & Server::getTurnCount()
{
    return m_turnCount;
}

int main()
{
    Server server1("Server1");
    Server server2("server2");

    int num;
    cout << "please input num of people: ";
    cin >> num;

    for (int i = 0; i < num; ++i)
    {
        ++Server::getTurnCount();
    }

    do
    {
        server1.run();
        server2.run();
    } while (Server::stillOpen());

    return 0;
}