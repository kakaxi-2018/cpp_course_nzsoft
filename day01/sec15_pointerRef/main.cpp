#include <iostream>

using std::cout;
using std::endl;

void mySwap(char ** p, char **q)
{
    char *temp = *p;
    *p = *q;
    *q = temp;
}

void mySwap(char *&rp, char * &rq)
{
    char *temp = rp;
    rp = rq;
    rq = temp;
}

int main()
{
    char *p = (char *)"China";
    char *q = (char *)"America";

    cout << "p: " << p << ", " << "q: " << q << endl;
    //mySwap(&p, &q);
    mySwap(p, q);
    cout << "p: " << p << ", " << "q: " << q << endl;

    return 0;
}