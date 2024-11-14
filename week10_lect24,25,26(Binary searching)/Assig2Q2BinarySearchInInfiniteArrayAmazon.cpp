#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int target=10;
    int lo=0;
    int hi=1;
    while(arr[hi]<target){
        lo=hi;
        hi*=2;
    }
    //Now i am sure that target will lie b/w this lo and hi
    //apply normal BS
    bool flag= false;
    while(lo<hi){
        int mid=lo+(hi-lo)/2;
        if(target ==arr[mid]){ 
        flag=true;
        break;  
        }
        else if(target<arr[mid]) hi=mid-1;
        else lo =mid+1;
    }
    if(flag == false) cout<<"no";
    else cout<<"yes";
}