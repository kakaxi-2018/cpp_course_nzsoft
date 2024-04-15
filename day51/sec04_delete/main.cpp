#include <iostream>

using std::cout;
using std::endl;

class Singleton
{
public:
    static Singleton * getInstance()
    {
        if (nullptr == ins_)
        {
            ins_ = new Singleton;
        }

        return ins_;
    }

    ~Singleton() = delete;
    Singleton(const Singleton & another) = delete;
    Singleton & operator=(const Singleton & another) = delete;
private:
    // 私有的内部可以调用，如果是 delete，类内部也无法调用了
    Singleton() = default;

    static Singleton * ins_;
};

// 如果 .h 文件和 .cpp 文件分开，static 成员放在 .h 文件中
Singleton * Singleton::ins_ = nullptr;

int main()
{
    Singleton *aa = Singleton::getInstance();

    return 0;
}