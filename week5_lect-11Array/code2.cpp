#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int arr[size];
    int sum=0;
    //input
    for(int i=0;i<=size-1;i++){
        cin>>arr[i];
        sum=sum+arr[i];
    }
    cout<<"sum = "<<sum;

}