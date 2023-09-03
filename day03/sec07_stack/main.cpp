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
    Stack s();  // function declaration
    //cout << s.pop() << endl;  // compile error, s is non-class type of 'Stack()'
    
    // definition
    Stack ss;
    cout << ss.pop() << endl;

    Stack ss2(20);
    cout << ss2.pop() << endl;

    return 0;
}