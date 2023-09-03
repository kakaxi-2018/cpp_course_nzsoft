#include "myStack.h"
#include <cstring>

void Stack::init()
{
    top = 0;
    memset(space, 0, max_size);
}

void Stack::push(char d)
{
    space[top++] = d;
}

char Stack::pop()
{
    return space[--top];
}

bool Stack::isFull()
{
    return top == max_size;
}

bool Stack::isEmpty()
{
    return top == 0;
}