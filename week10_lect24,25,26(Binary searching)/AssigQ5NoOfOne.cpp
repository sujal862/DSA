#include<iostream>
using namespace std;
int main(){
    int arr[]={0,0,0,0,1,1,1,1};  //sorted binary array so 1 will always be in last index
    int n=sizeof(arr)/4;
    int lo=0,hi=n-1,target=1;
    bool flag;
    while(lo<=hi){
        int mid=lo+(hi-lo)/2;
        if(arr[mid]==target){
            if(arr[mid-1]!=target){
                cout<<(n-1)-mid+1;  //last index - first occurence-1
                flag=true;
                break;
            }
            else{
                hi=mid-1;
            }
        }
        else if(arr[mid]<target){lo=mid+1;}
        else if(arr[mid]>target){hi=mid-1;}
    }
    if(flag==false) cout<<0;
}
