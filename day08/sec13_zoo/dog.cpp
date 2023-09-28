#include "dog.h"
#include <iostream>

Dog::Dog()
{
    std::cout << "Dog()" << std::endl;
}

Dog::~Dog()
{
    std::cout << "~Dog()" << std::endl;
}

void Dog::voice()
{
    std::cout << "wang wang wang..." << std::endl;
}