#include "animal.h"
#include "dog.h"
#include "cat.h"
#include <iostream>


int main()
{
    //Dog d;
    Animal * pa;

    /*
    pa = &d;
    pa->voice();
    std::cout << "==========" << std::endl;
    pa = &t;
    pa->voice();
    */

    std::cout << "==========" << std::endl;
    pa = new Dog;
    pa->voice();
    delete pa;

    std::cout << "==========" << std::endl;
    pa = new Cat;
    pa->voice();
    delete pa;
    

    return 0;
}