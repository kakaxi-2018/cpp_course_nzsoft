#ifndef __CAT_H__
#define __CAT_H__

#include "animal.h"

class Cat: public Animal
{
public:
    Cat();
    virtual ~Cat();
    virtual void voice() override;
protected:
};


#endif