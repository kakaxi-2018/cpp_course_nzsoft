#include <iostream>
#include <stack>
#include <string>

using std::cout;
using std::endl;



int main()
{
    std::stack<int> s;

    for (int i = 0; i < 10; ++i)
    {
        s.push(i);
    }

    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }

    cout << "==========" << endl;
    std::stack<std::string> st;
    st.push("aa");
    st.push("bb");
    st.push("cc");

    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}