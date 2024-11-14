#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;
    int arr[n];
    // input
    int i;
    for (i = 0; i <= n - 1; i++)
    {
        cin >> arr[i];
    }
    int x;
    cout << "enter the x: "<<endl;
    cin >> x;
    int count=0;
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] > x)  { count = count + 1; }
    }
    cout<<"number of elements greater than "<<x<<" is: "<<count;
}