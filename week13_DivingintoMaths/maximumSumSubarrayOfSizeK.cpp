#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    int maxSum = INT_MIN;
    int maxIdx = -1;
    for(int i=0;i<=n-k;i++){  //(n-k-1) times
        int sum=0;
        for(int j=i;j<i+k;j++){  // k times
            sum+=arr[j];
        }
        if(maxSum<sum){
            maxSum = sum;
            maxIdx = i;
        }
    }
    // tn0 = (n-k-1)*k
    //Time complexity = O(n*k)
    cout<<maxSum<<endl<<maxIdx;
}