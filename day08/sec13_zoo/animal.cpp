#include "animal.h"
#include <iostream>

Animal::Animal()
{
    std::cout << "Animal()" << std::endl;
}

Animal::~Animal()
{
    std::cout << "~Animal()" << std::endl;
}
