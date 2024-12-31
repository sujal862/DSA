//Selection sort
#include <iostream>
#include <climits>
using namespace std;
int main(){
    int arr[]={5,3,1,4,9,2,6,0,8};
    int n=size(arr);
//selection sort
    for(int i=0;i<n-1;i++){ 
        int minidx=i;
        for(int j=i;j<n;j++){
            if(arr[j]<arr[minidx]){
                minidx=j;
            }
        }
        swap(arr[minidx],arr[i]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}



