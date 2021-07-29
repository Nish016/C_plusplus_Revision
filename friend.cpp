#include <iostream>
using namespace std;

class Hello
{
    int p, q;
    friend Hello hello(Hello p1, Hello q1);

public:
    void getit(int n1, int n2);
    void setit(void);
};

void Hello ::getit(int n1, int n2)
{
    cout << "Get It";
    cout << p << q;
}

void Hello ::setit(void)
{
    cout << "Enter P and Q:";
    cin >> p >> q;
}

Hello hello(Hello p1, Hello q1)
{
    Hello r1;
    r1.getit(p1.p + q1.p, p1.q + q1.q);
}

int main()
{
    Hello h1;
    h1.setit();
    h1.getit(4, 5);
    return 0;
}