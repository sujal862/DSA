#include<iostream>
using namespace std;
void sumTriangle(int a[],int n){
    if(n<0) return;
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i<n-1){
        a[i]=a[i]+a[i+1];
        }
    }
    cout<<endl;
    sumTriangle(a,n-1);
}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/4;
    sumTriangle(arr,n);
}



// or by defining extra array (upper one is easy and solved by me and less SC)

/* #include<iostream>
using namespace std;
void sumTriangle(int a[],int n){
    if(n<0) return;
    int ea[n-1];
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
        if(i<n-1){
        ea[i]=a[i]+a[i+1];
        }
    }
    cout<<endl;
    sumTriangle(ea,n-1);
}
int main(){
    int arr[]={5,4,3,2,1};
    int n=sizeof(arr)/4;
    sumTriangle(arr,n);
}
*/
