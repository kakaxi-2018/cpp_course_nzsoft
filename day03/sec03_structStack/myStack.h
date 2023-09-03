#ifndef __MYSTACK_H__
#define __MYSTACK_H__

const int max_size = 1024;

class Stack
{
    public:
        void init();
        void push(char d);
        char pop();
        bool isFull();
        bool isEmpty();
    private:
        int top;
        char space[max_size];
};

#endif