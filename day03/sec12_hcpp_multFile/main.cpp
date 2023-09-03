#include <iostream>
#include "myStack.h"

using std::cout;
using std::endl;

int main()
{
    Stack s;

    for (char ch = 'a'; ch <= 'z' && !s.isFull(); ++ch)
    {
        s.push(ch);
    }

    while (!s.isEmpty())
    {
        cout << s.pop() << endl;
    }

    return 0;
}