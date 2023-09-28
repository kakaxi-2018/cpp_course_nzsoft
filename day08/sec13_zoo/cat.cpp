#include "cat.h"
#include <iostream>

Cat::Cat()
{
    std::cout << "Cat()" << std::endl;
}

Cat::~Cat()
{
    std::cout << "~Cat()" << std::endl;
}

void Cat::voice()
{
    std::cout << "miao miao miao..." << std::endl;
}