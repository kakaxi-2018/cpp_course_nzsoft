#include <iostream>
#include <cstring>

using std::cout;
using std::endl;

class Stack
{
public:
    Stack()
    {
        top = 0;
        stackSize = 1024;
        space = new char[stackSize];
        memset(space, 0, stackSize);
    }

    Stack(int size)
    {
        top = 0;
        stackSize = size;
        space = new char[size];
        memset(space, 0, size);
    }

    void push(char ch);
    char pop();
    bool isFull();
    bool isEmpty();
private:
    int top;
    int stackSize;
    char *space;
};


void Stack::push(char ch)
{
    space[top++] = ch;
}

char Stack::pop()
{
    return space[--top];
}

bool Stack::isFull()
{
    return stackSize == top;
}

bool Stack::isEmpty()
{
    return 0 == top;
}

int main()
{
    //Stack s;
    Stack s(20);

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