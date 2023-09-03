#include "mylist.h"
#include <iostream>

void myList::initList()
{
    head = new Node;
    head->next = nullptr;
}

void myList::insertList(int d)
{
    Node *cur = new Node;
    cur->data = d;
    cur->next = head->next;
    head->next = cur;
}

void myList::traverseList()
{
    Node *sh = head;
    sh = sh->next;

    while (sh)
    {
        std::cout << sh->data << std::endl;
        sh = sh->next;
    }
}

void myList::destroyList()
{
    Node *sh = head;
    Node *t;
    
    while (sh)
    {
        t = sh;
        sh = sh->next;
        delete t;
        t = nullptr;
    }
}