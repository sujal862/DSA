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
    {  cin >> arr[i];   }
    int x;
    cout<<"enter the element to search: ";
    cin>>x;
    //search
    //using check box
    bool flag=false;    //default flag = false
    for (i = 0; i <= n - 1; i++){
        if(arr[i]==x) {flag=true;}
}
if( flag==true) cout<< "present";
else cout<<" not present";
}