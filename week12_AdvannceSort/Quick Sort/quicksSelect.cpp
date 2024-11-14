#include<iostream>
using namespace std;
int partition(int arr[], int si , int ei){
    int pivotElement = arr[(si+ei)/2];
    int count = 0;
    for(int i=si;i<=ei;i++){ 
        if(i==(si+ei)/2 ) continue;
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx=count+si;
    swap(arr[(si+ei)/2],arr[pivotIdx]);
    //making smaller left and greater right side (taking equal to also at left)
    int i=si,j=ei; 
    while(i<pivotIdx && j>pivotIdx){
        if(arr[i]<=pivotElement) i++;
        if(arr[j]>pivotElement) j--;
        else if(arr[i]>pivotElement && arr[j]<=pivotElement){
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
int KthSmallest(int arr[], int si , int ei, int k){  // si-starting idx , ei-ending idx
    int pivot = partition(arr,si,ei);
    if(pivot+1==k) return arr[pivot];
    else if(pivot+1<k) return KthSmallest(arr,pivot+1,ei,k);  //right wala pass
    else  return KthSmallest(arr,si,pivot-1,k);  //if(pivot+1>k)  left wala pass

} 
int main(){
    int arr[]={5,1,8,2,7,6,3,-4};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int k=4;
    cout<<KthSmallest(arr,0,n-1,k);
}