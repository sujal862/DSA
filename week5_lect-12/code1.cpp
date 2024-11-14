//accessing the elements of array in another function
#include<iostream>
using namespace std;
void display(int a[]){ 
    for(int i=0;i<=4;i++){
    cout<<a[i]<<" ";
    }
    cout<<endl;
    return;
}
void change(int b[]){
    b[0]=100;
    return;
}
int main(){
    int arr[5]={1,2,3,4,5};
    display(arr);  //calling display function and (by default it happens)passing address of arr to a
    change(arr);
    display(arr);
}