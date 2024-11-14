#include<iostream>
using namespace std;
void UniqueEle(int arr[], int n){
    int res = 0;
    for(int i = 0 ; i<n ; i++) res^=arr[i]; 
    int temp = res;
    int k=0;
    //find the position of any set bit in res
    while(1){
        if(temp & 1 == 1) break;
        temp = temp>>1;
        k++;
    }
    //do xor of all elements which has kth bit = 1 
    int restval = 0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        if(((num >> k) & 1) == 1) restval^= num;
    }
    cout<<restval<<" ";
    res = res^restval; //2nd unique ele = 1st uniq ele ^ res
    cout<<res;

}

int main(){
    int arr[]={1,2,1,3,2,5,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    UniqueEle(arr,n);
}