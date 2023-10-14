#ifndef __MYSTACK_H__
#define __MYSTACK_H__

template<typename T>
class Stack
{
public : 
    Stack(int size = 1024);
    ~Stack();
    bool isEmpty();
    bool isFull();
    void push(T data);
    T pop();
private:
    T *space;
    int top;
};

#endif