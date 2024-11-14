//Insertion sort
#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,1,4,2};
    int n=size(arr);
    for(int i=1;i<n;i++){
        int y=i;
        while(arr[y-1]>arr[y] && y>=1){
            swap(arr[y-1],arr[y]);
            y--;
        }
    }
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}