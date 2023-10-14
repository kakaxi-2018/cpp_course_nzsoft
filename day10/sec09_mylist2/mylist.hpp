#ifndef __MYLIST_HPP__
#define __MYLIST_HPP__

#include <iostream>

using std::cout;
using std::endl;

namespace listspace
{

template <class ItemType>
class GenericList;

template <class ItemType>
std::ostream &operator<<(std::ostream &co,
                         const GenericList<ItemType> &theList);

template <class ItemType>
class GenericList
{
    // note: add '<>' after function
    friend std::ostream &operator<< <>(std::ostream &co,
                                       const GenericList<ItemType> &theList);

public:
    GenericList(int max);
    ~GenericList();
    int length() const;
    void add(ItemType newItem);
    bool full() const;
    void erase();

private:
    ItemType *_item;
    int _maxLength;
    int _curIdx;
};

template <class ItemType>
std::ostream &operator<<(std::ostream &co,
                         const GenericList<ItemType> &theList)
{
    for (int i = 0; i < theList._curIdx; ++i)
    {
        cout << theList._item[i] << endl;
    }

    return co;
}

template <class ItemType>
GenericList<ItemType>::GenericList(int max)
    : _maxLength(max), _curIdx(0)
{
    _item = new ItemType[max];
}

template <class ItemType>
GenericList<ItemType>::~GenericList()
{
    delete[] _item;
}

template <class ItemType>
int GenericList<ItemType>::length() const
{
    return _curIdx;
}

template <class ItemType>
void GenericList<ItemType>::add(ItemType newItem)
{
    if (full())
    {
        cout << "Error: adding to a full list.\n";
        exit(-1);
    }
    else
    {
        _item[_curIdx] = newItem;
        ++_curIdx;
    }
}

template <class ItemType>
bool GenericList<ItemType>::full() const
{
    return _curIdx == _maxLength;
}

template <class ItemType>
void GenericList<ItemType>::erase()
{
    _curIdx = 0;
}
}

#endif