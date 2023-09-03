#include <iostream>
#include <cstring>
#include "myStack.h"

using std::cout;
using std::endl;

int main()
{
    Stack s;
    s.init();

    for (char c = 'a'; c <= 'z'; ++c)
    {
        if (!s.isFull())
        {
            s.push(c);
        }
    }

    //s.top = 0;  // struct -> class

    while (!s.isEmpty())
    {
        cout << s.pop() << endl;
    }

    return 0;
}