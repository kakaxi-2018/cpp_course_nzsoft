#include <iostream>
#include <ctime>

using std::cout;
using std::endl;

class CCSprite
{
public:
    CCSprite()
    {}

    static CCSprite * create()
    {
        CCSprite *pRet = new CCSprite;

        if (pRet && pRet->init())
        {
            pRet->autoRelease();
            return pRet;
        }
        else
        {
            delete pRet;
            pRet = nullptr;
            exit(-1);
        }
    }

    bool init()
    {
        ch = rand() % (127 - 32) + 33;
        return true;
    }

    void autoRelease()
    {
        if (nullptr == head)
        {
            this->next = nullptr;
            head = this;
        }
        else
        {
            this->next = head;
            head = this;
        }
    }

    static void renderTree()
    {
        CCSprite *t = head;  // note: make a copy of member 'head'

        while (t)
        {
            cout << t->ch << endl;
            t = t->next;
        }
    }

private:
    char ch;
    static CCSprite *head;
    CCSprite *next;
};

CCSprite * CCSprite::head = nullptr;

int main()
{
    srand(time(nullptr));

    CCSprite *ps = CCSprite::create();
    CCSprite *ps2 = CCSprite::create();
    CCSprite *ps3 = CCSprite::create();
    CCSprite *ps4 = CCSprite::create();

    CCSprite::renderTree();

    return 0;
}