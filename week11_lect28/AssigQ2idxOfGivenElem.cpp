#include <iostream>
#include<vector>
using namespace std;
int idx(vector<int> &arr , int element,int n){
    if(n<0)  return -1; 
    if(arr[n]==element) return n;

    return idx(arr,element,n-1);  //final value isi return statement ka pas ayaga than ya main func ko return krdega
}
int main() {
int n, element;
cin >> n;
vector<int> arr(n);
for(int i = 0; i < n; i++) {
cin >> arr[i];
}
cin >> element;
cout<<idx(arr,element,n);
}
