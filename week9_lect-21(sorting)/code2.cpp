#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<char>v;
    string arr="AZYZXBDJKX";
    for(int i=0;i<size(arr);i++){
        if(arr[i]>=int('X')){
            v.push_back(arr[i]);
        }
    }
    //bubble sort in dec. just changed the sign of swap
    int n=v.size();
    for(int i=0;i<n-1;i++){  
    bool flag=true;
        for(int j=0;j<n-1-i;j++){
            if(v[j]<v[j+1]){   //sign change 
            swap(v[j],v[j+1]);
            flag=false;
            }
        } 
        if(flag==true) break; 
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i];
    }
}