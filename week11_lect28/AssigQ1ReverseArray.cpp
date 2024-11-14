#include<iostream>
using namespace std;
void reversee(int a[],int currentidx,int n){  // reciever array should be int arr[]
    if(currentidx == n) return;

    reversee(a,currentidx+1,n);
    cout<<a[currentidx]<<" ";
}
int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int n=sizeof(arr)/4;
    reversee(arr,0,n);
}

