#include "mystack.h"

Stack::Stack(int size)
    :top(0), stackSize(size), space(new char[size]{0})
{
}

Stack::~Stack()
{
    delete []space;
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