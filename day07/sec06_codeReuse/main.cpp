#include <iostream>
#include <string>

using std::cout;
using std::endl;

class Human
{
public:
    void eat(std::string food)
    {
        cout << "food: " << food << endl;
    }
};

class Teacher: public Human
{
public:
    void teach(std::string course)
    {
        cout << "I teach " << course << endl;
    }
};

class Student: public Human
{
public:
    void learn(std::string course)
    {
        cout << "I learn " << course << endl;
    }
};

class Worker: public Human
{
public:
};

int main()
{
    Teacher tech;
    tech.eat("hamburger");
    tech.teach("C++");

    Student stu;
    stu.eat("noodles");
    stu.learn("C++");

    Worker work;
    work.eat("rice");

    return 0;
}