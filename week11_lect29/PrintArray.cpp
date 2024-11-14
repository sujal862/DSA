#include<iostream>
using namespace std;
void print(int arr[],int n,int i){
    if(i==n) return;
    cout<<arr[i];
    print(arr,n,i+1);
}
int main(){
    int arr[]={2,3,4,5,6};
    int n=sizeof(arr)/4;
    print(arr,n,0);
}