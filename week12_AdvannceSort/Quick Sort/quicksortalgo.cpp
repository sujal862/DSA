#include<iostream>
using namespace std;
int partition(int arr[], int si , int ei){
    int pivotElement = arr[si];  //let start ele be pivot ele
    int count = 0;
    for(int i=si+1;i<=ei;i++){ //dont check si elem bec pivot ele=arr[si];
        if(arr[i]<=pivotElement) count++;
    }
    int pivotIdx=count+si;
    swap(arr[si],arr[pivotIdx]);  // now pivot ele is at its correct position
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
    // 7 1 8 2 5 6 3 4 
    
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