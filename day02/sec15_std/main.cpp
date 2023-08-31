#include <iostream>


int main()
{
    {
        std::cout << "Hello world!" << std::endl;
    }

    {
        using namespace std;
        using namespace std;
        cout << "Hello world!" << endl;
    }

    {
        using namespace std;
        cout << "Hello world!" << endl;
    }

    return 0;
}