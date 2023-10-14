#include <iostream>
#include <string>
#include "mystack.h"
#include "mystack.cpp"

using std::cout;
using std::endl;


int main()
{
    Stack<int> st;

    for (int i = 0; i < 10; ++i)
    {
        if (!st.isFull())
        {
            st.push(i);
        }
    }

    while (!st.isEmpty())
    {
        cout << st.pop() << endl;
    }

    cout << "==========" << endl;
    Stack<std::string> st2;
    st2.push("aa");
    st2.push("bb");
    st2.push("cc");

    while (!st2.isEmpty())
    {
        cout << st2.pop() << endl;
    }

    return 0;
}