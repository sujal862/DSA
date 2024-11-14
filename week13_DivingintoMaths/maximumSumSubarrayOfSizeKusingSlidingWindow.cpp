#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    int maxSum = INT_MIN;
    int Sum=0;
    int maxIdx=0;
    for(int i=0;i<k;i++){   //tno.=  k;
        Sum+=arr[i];
    }
    maxSum = Sum;
    //Sliding Algorithm
    int i=1,j=k;
    while(j<n){  // tno. = n-k;
        Sum = Sum - arr[i-1] + arr[j];
        if(maxSum<Sum){
            maxSum = Sum;
            maxIdx = i;
        }
        i++;
        j++;
    }
    //t.c = O(n);
    cout<<maxSum<<endl<<maxIdx;
}