#include<iostream>
#include<vector>
using namespace std;
void merge(vector<int>& a,vector<int>& b,vector<int>&res){  //t.c of merge fun ->O(n)
    int i=0,j=0,k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<b[j])  res[k++]=a[i++];
        else  res[k++]=b[j++];
    }
    if(a.size()==i){
        while(j<=b.size()){
            res[k++]=b[j++];
        }
    }
    if(b.size()==j){
        while(i<a.size()){
            res[k++]=a[i++];
        }
    }
}

void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return; //base case
    int n1=n/2 , n2=n-n/2;
    vector<int> a(n1) , b(n2);
    for(int i=0;i<n1;i++){
        a[i]=v[i];
    }
    for(int i=0;i<n2;i++){
        b[i]=v[n1+i];
    }
    //magic recursion
    mergeSort(a);
    mergeSort(b);
    //merge two sorted array
    merge(a,b,v);
    a.clear();
    b.clear();
}
int main(){
    int arr[]={5,1,3,0, 4,9,6};
    int n= sizeof(arr)/sizeof(arr[0]);  
    vector<int>v(arr,arr+n);  //copy paste of arr in vector
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    mergeSort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}