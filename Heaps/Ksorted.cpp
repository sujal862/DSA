#include<iostream>
#include<queue>
using namespace std;
int main(){
    int arr[] = {6,5,3,2,8,10,9};
    int k = 4;
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>v;
    priority_queue<int,vector<int>,greater<int>>pq; //min heap
    for(int i=0;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            v.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size()){
        v.push_back(pq.top());
        pq.pop();
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}