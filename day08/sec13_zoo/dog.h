#ifndef __DOG_H__
#define __DOG_H__


#include "animal.h"

class Dog: public Animal
{
public:
    Dog();
    virtual ~Dog();
    virtual void voice() override;
protected:
};

#endif