#include<iostream>
#include<vector>
using namespace std;
vector<int> merge(vector<int> &arr1,vector<int> &arr2){  //vector return data type
    int n=arr1.size();
    int m=arr2.size(); 
    vector<int>arr3(m+n);
    int i=0,j=0,k=0;
    while(i<=n-1 && j<=m-1){
        if(arr1[i]<arr2[j]){
             arr3[k]=arr1[i];
             i++;
             k++;
        }
        else if (arr1[i] > arr2[j]){
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    //for remaining elements
    if(i==n){    //i.e.arr1 ka sara elements arr3 ma dal chuka hu; arr2 lamba hoga thats why unka elemens bach ga sa copy that to arr3
        while(j<=m-1){
            arr3[k]=arr2[j];
            k++;
            j++;
        }
    if (j==m){ // i.e.arr2 ka sara elements arr3 ma dal chuka hu; arr1 lamba hoga thats why unka elemens bach ga so copy that to arr3
        while (i<=n- 1){
            arr3[k] = arr1[i];
            k++;
            i++;
            }
        }
    }
    return arr3;
}
int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(4);
    arr1.push_back(5);
    arr1.push_back(8);
    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(3);
    arr2.push_back(6);
    arr2.push_back(7);
    arr2.push_back(10);

    for (int i = 0; i < arr1.size(); i++) {cout << arr1[i] << " "; } // print 1st sorted array
    cout << endl;
    for (int i = 0; i < arr2.size(); i++) {cout << arr2[i] << " ";} // print 2nd sorted array
    cout << endl;
    vector<int>v = merge(arr1,arr2);  //vector caller data type ; arr3 is returned in v vector
    for (int i = 0; i < v.size(); i++) { cout << v[i] << " "; }  //print output
}

//2method in leet code -88  check that. easyyyyy