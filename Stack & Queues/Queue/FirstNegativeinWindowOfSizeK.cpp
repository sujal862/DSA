#include<iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int arr[] = {3,-4,-7,30,7,-9,2,1,6,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;
    vector<int>ans;
    queue<int>q;
    //step-1
    for(int i=0;i<n;i++){
        if(arr[i]<0) q.push(i);
    }
    int i=0;
    while(i<=n-k){
        while(q.size()!=0 && q.front() < i) q.pop();  // if q.front() is picha of window
        if(q.size()==0 || q.front()>=i+k){  //if q.front is aga of window i.e no -ve ele exist in that window 
            ans.push_back(0);
            i++;
        }
        else{  //if q.front() is inside the window
        ans.push_back(arr[q.front()]); 
        i++; 
        }
    }

    for(auto x:ans){
        cout<<x<<" ";
    }


}