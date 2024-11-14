#include<iostream>
using namespace std;
#include<climits>
void printm(int arr[],int n,int max){
    if(n<0){
        cout<<max;
        return;
    }
    if(max<arr[n]){
        max=arr[n];
    }
    printm(arr,n-1,max);
}
int main(){
    int arr[]={2,3,54,5,6};
    int n=sizeof(arr)/4;
    printm(arr,n-1,INT_MIN);
}