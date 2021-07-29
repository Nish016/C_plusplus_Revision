#include <iostream>
using namespace std;
void Swap(int *a, int *b)
{
    int temp;  // temp  a   b
    temp = *a; //   5   5   4
    *a = *b;   //   5   4   4
    *b = temp; //   5   4   5
}
int main()
{
    int x = 5, y = 4;
    Swap(&x, &y); //Values are swapped
    cout << "Value of x & y after swapping: " << x << "\n"
         << y;
    return 0;
}