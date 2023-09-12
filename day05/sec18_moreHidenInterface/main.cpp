#include <iostream>

using std::cout;
using std::endl;

class Game
{
public:
    Game()
    {
        pf[0] = &Game::f;
        pf[1] = &Game::g;
        pf[2] = &Game::h;
        pf[3] = &Game::i;
    }

    void select(int i)
    {
        if (i >= 0 && i < nc)
        {
            //((this->*pf)[i])(i);
            (this->*pf[i])(i);  // note: use this
        }
    }

    void f(int idx) { cout << "void f(int idx)" << idx << endl; }
    void g(int idx) { cout << "void g(int idx)" << idx << endl; }
    void h(int idx) { cout << "void h(int idx)" << idx << endl; }
    void i(int idx) { cout << "void i(int idx)" << idx << endl; }

    enum
    {
        nc = 4
    };

    void (Game::*pf[nc])(int);
private:
};

int main()
{
    Game game;
    game.select(0);
    game.select(1);
    game.select(2);
    game.select(3);

    return 0;
}