#include <iostream>
#include<climits>
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
    //Max
    int max= INT_MIN;
    for(i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];  //this will remain x have always the highest value
    }
    cout<<"max:"<<max<<endl;
    //second max
    int smax = INT_MIN;
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i]!=max && smax < arr[i]) smax = arr[i];
    }
    cout<<"second max: "<<smax;
}