//Selection sort
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=size(arr);
//selection sort
    for(int i=0;i<n-1;i++){
        int min=INT_MAX; 
        int minidx=-1;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                minidx=j;
            }
        }
        swap(arr[minidx],arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}


