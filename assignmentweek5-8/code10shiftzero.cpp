#include <iostream>
    using namespace std;
    int main(){
        int a[]={0,6,4,0,6,0,9,0};
        int n=8;
        int j=0;  // will always point the 0 just after a non zero num
        for(int i=0;i<n;i++){
            if(a[i]!=0){
                swap(a[j],a[i]);
                j++;   
            }
        }
      //print output
      for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
      }
}