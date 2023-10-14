#ifndef __MYLIST_H__
#define __MYLIST_H__

#include <iostream>

using std::cout;
using std::endl;

namespace listspace
{

template<class ItemType>
class GenericList;

template<class ItemType>
std::ostream & operator<<(std::ostream & co, 
    const GenericList<ItemType> & theList);

template<class ItemType>
class GenericList
{
    // note: add '<>' after function
    friend std::ostream & operator<< <>(std::ostream & co, 
        const GenericList<ItemType> & theList);

public:
    GenericList(int max);
    ~GenericList();
    int length() const;
    void add(ItemType newItem);
    bool full() const;
    void erase();
private:
    ItemType * _item;
    int _maxLength;
    int _curIdx;
};
}

#endif