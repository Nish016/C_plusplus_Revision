#include <iostream>
using namespace std;
int num(int data)
{
    data = 5;
}
int main()
{
    int data = 3;
    int number = num(data); //Value is not changed in call by value
    cout << number;
    return 0;
}