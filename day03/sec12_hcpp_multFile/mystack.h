#ifndef __MYSTACK_H__
#define __MYSTACK_H__

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

#endif