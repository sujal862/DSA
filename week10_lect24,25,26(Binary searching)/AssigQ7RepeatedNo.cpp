#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,10,11,12};
    int lo=0;
    int hi=sizeof(arr)/4;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==mid){
            if(arr[mid+1]==arr[mid] || arr[mid-1]==arr[mid]){
                cout<<"repeated no.:"<<arr[mid];
                break;
            }
            else hi=mid-1;
        }
        else  //arr[mid]>mid
        lo=mid+1;
    }
}