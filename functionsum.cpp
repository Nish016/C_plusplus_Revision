#include<iostream>
using namespace std;
int Sum(int a, int b)
{
    int sum = 0;
    sum = a+b;
}
int main()
{
    int x,y;
    cout<<"Enter the values x & y: ";
    cin>>x>>y;
    int add = Sum(x,y);
    cout<<"Sum of the two numbers is: "<<add;
    return 0;
}