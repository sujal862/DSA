#include<iostream>
using namespace std;
int main(){
    int A[]={2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(A)/sizeof(A[0]);
    int K=2;
    int prev=0,i=1,j=K;
    int v[n-K+1];
    for(int i=0;i<K;i++){
        if(A[i]<0){
            prev = i;
            break;
        }
    }
    v[0]=A[prev];
    while(j<n){
        if(prev>=i) v[i]=A[prev];
        else{
            bool flag = false;
            for(prev=i;prev<=j;prev++){
                if(A[prev]<0){
                    flag=true;
                    break;
                }
            }
            ((flag) ? v[i]=A[prev]: v[i]=0);
        }
        i++;
        j++;
    }
    for(int i=0;i<n-K+1;i++){
        cout<<v[i]<<" ";
    }
}