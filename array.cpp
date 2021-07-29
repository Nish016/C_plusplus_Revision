#include <iostream>
using namespace std;
int main()
{
    int n, i;
    cout << "Enter number of array elements: ";
    cin>>n;
    int a[n];

    cout <<"Enter the elements in array: ";
    
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        cout<<"Element:"<<i<<endl;
        cout<<a[i];
    }
    return 0;
}