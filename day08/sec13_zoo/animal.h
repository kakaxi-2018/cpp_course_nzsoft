#ifndef __ANIMAL_H__
#define __ANIMAL_H__

class Animal
{
public:
    Animal();
    virtual ~Animal();
    virtual void voice() = 0;
protected:
};

#endif