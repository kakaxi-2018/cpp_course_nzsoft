#include <iostream>
#include <fstream>

using std::cout;
using std::endl;

struct Student
{
    char name[50];
    int num;
    int age;
    char sex;
};

int main()
{
    std::fstream fs;
    fs.open("aa.txt", std::ios::in|std::ios::out|std::ios::binary);

    if (!fs)
    {
        cout << "open error" << endl;
    }

    Student s[] = {
        {"Lili", 1001, 18, 'f'},
        {"Mary", 1002, 17, 'm'},
        {"Tony", 1003, 19, 'm'},
        {"Rose", 1004, 20, 'f'}
    };

    fs.write((char *)&s, sizeof(s));

    fs.seekg(0, std::ios::beg);

    Student ss;

    while (fs.read((char *)&ss, sizeof(ss)))
    {
        cout << "name: " << ss.name << endl;
        cout << "num : " << ss.num << endl;
        cout << "age : " << ss.age << endl;
        cout << "sex : " << ss.sex << endl;
    }

    fs.close();

    return 0;
}