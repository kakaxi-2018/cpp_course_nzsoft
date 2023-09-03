#include <iostream>

using std::cout;
using std::endl;
class Stack
{
public:
    Stack(int size = 1024);
    ~Stack();

    void push(char ch);
    char pop();
    bool isFull();
    bool isEmpty();

private:
    int top;
    int stackSize;
    char *space;
};

Stack::Stack(int size)
    :top(0), stackSize(size), space(new char[size]{0})
{
}

Stack::~Stack()
{
    delete []space;
    cout << "xxxxxxxxxx" << endl;
}

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
    {
        Stack s;
    }

    cout << "==========" << endl;

    {
        Stack *ps = new Stack;
        delete ps;
    }

    return 0;
}