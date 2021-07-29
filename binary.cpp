#include <iostream>
using namespace std;
int main()
{
    long int num, count = 0;
    cout << "Enter the binary number to be checked: " << endl;
    cin >> num;

    while (num > 0)
    {
        int val = num % 10;
        if ((val != 0) && (val != 1))
        {
            cout << "Not binary";
            break;
        }
        num = num / 10;
        if (num == 0)
        {
            cout << "Number is binary";
        }
    }
    return 0;
}