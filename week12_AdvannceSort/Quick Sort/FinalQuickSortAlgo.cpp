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
void quickSort(int arr[], int si , int ei){  // si-starting idx , ei-ending idx
    if(si>=ei) return ;
    // 5 1 8 2 7 6 3 4
    int pivot = partition(arr,si,ei);
    // 4 1 3 2 5 6 8 7
    
    //Magic
    quickSort(arr,si,pivot-1);
    quickSort(arr,pivot+1,ei);
} 
int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n= sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}