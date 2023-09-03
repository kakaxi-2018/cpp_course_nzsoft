#ifndef __MYLIST_H__
#define __MYLIST_H__

struct Node
{
    int data;
    struct Node *next;
};

class myList
{
public:
    void initList();
    void insertList(int d);
    void traverseList();
    void destroyList();

private:
    Node *head;
};

#endif